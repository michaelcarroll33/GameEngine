#pragma once

namespace GameEngine {

	class Application;
	class EngineConfig;

	class Engine {

	public:

		Engine();
		~Engine();

		[[nodiscard]] bool Init(Application* app, const EngineConfig& cfg);
		/*static Engine& Get();

		void Run();
		void Tick();

		void Shutdown();
		void RequestShutdown();

		void PushLayer(std::shared_ptr<Layer> layer);
		void PushOverlay(std::shared_ptr<Overlay> overlay);
		void RemoveLayer(const std::string name);
		void RemoveLayer(std::shared_ptr<Layer> layer);

		template<typename T>
		T* RegisterSubsystems(std::unique_ptr<T> subsystem);

		template<typename T>
		T* GetSubsystem();

		Window& GetWindow();
		float GetDeltaTime();
		uint64_t GetFrameIndex();
		void OnEvent(Event& e);)

	private:
		bool m_Running;
		float m_DeltaTime;
		LayerStack m_Layers;
		std::unordered_map<std::string, std::unique_ptr<ISubsystem>> m_Subsystems;
		Window* m_Window;
		Application m_App;*/
	};
}