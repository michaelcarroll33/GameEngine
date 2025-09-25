#pragma once

#include <SFML/Graphics.hpp>

class Application {
public:
	Application();
	~Application();

	void Init();			// Initialize subsystem
	void Run();				// Main loop
	void Shutdown();		// Cleanup

	void SimulateEvents();
	void PollEventsForFrame();

	virtual void Update();
	virtual void Render();

	bool IsRunning() const { return m_Running; } // Main loop condition
	void Quit() { m_Running = false; }			 // Stop loop

protected:
	sf::RenderWindow m_Window;

private:
	bool m_Running = true;
};