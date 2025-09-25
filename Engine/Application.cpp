#include "Application.h"
#include "Logger.h"
#include "Timer.h"
#include "EventSystem.h"
#include <imgui.h>
#include <imgui-SFML.h>



Application::Application() {}

Application::~Application() {}

void Application::Init() {
	Logger::Init();
	Logger::Info("Application initializing...");

	Timer::Get().Reset();
	EventSystem::Get().Init();

	sf::VideoMode videoMode(sf::Vector2u(800, 600));

	m_Window.create(videoMode, "Game Editor");
	m_Window.setFramerateLimit(60); //@todo moc- Do we want to cap framerate?

	bool success = ImGui::SFML::Init(m_Window);

	Logger::Info("Application initialized.");
}



void Application::Run() {
	Logger::Info("Application running.");
	sf::Clock deltaClock;

	while (m_Running && m_Window.isOpen()) {
		Timer::Get().Tick();


		PollEventsForFrame();
		
		ImGui::SFML::Update(m_Window, deltaClock.restart());

		/*Update();
		Render();*/

		ImGui::Begin("Hello!");

		ImGui::Text("ImGui running inside SFML!");

		if (ImGui::Button("Quit")) {
			Quit();
		}
		ImGui::End();

		m_Window.clear(sf::Color::Red);
		ImGui::SFML::Render(m_Window);
		m_Window.display();

		/*if (Timer::Get().ElapsedTime() >= 5.0f) {
			Logger::Info("Auto-quit after 5 seconds");
			Quit();
		}*/
	}
}

void Application::PollEventsForFrame() {
	while (true) {

		const auto optEvent = m_Window.pollEvent(); // Poll optional Events for each frame
		
		if (!optEvent) break; // Break if no events 

		const auto& ev = *optEvent;

		ImGui::SFML::ProcessEvent(m_Window, ev);

		if (ev.is<sf::Event::Closed>()) {
			m_Window.close();
			Quit();
		}
		else if (const auto* keyPressed = ev.getIf<sf::Event::KeyPressed>()) {
			Event e;
			e.Type = EventType::KeyPressed;
			e.Key = static_cast<int>(keyPressed->code);
			EventSystem::Get().FireEvent(e);
		}
		else if (const auto* mouseBtn = ev.getIf<sf::Event::MouseButtonPressed>()) {
			Event e;
			e.Type = EventType::MouseButtonPressed;
			e.Key = static_cast<int>(mouseBtn->button);
			e.MouseX = static_cast<float>(mouseBtn->position.x);
			e.MouseY = static_cast<float>(mouseBtn->position.y);
			EventSystem::Get().FireEvent(e);
		}
	}
}

void Application::Shutdown() {
	Logger::Info("Shutting down application...");
	
	ImGui::SFML::Shutdown();
	if (m_Window.isOpen())
		m_Window.close();

	Logger::Shutdown();
}

void Application::SimulateEvents() {
	Event e;
	e.Type = EventType::KeyPressed;
	e.Key = 'W';
	EventSystem::Get().FireEvent(e);
}

void Application::Update() {
	// Inherited
}

void Application::Render() {
	// Inherited
}