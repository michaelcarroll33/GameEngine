#pragma once

#include "Application.h"
#include "Logger.h"

class GameApp : public Application {
public:

	GameApp();
	~GameApp();

	void Update() override {
		// Game-specific logic
		Logger::Info("Game updating...");	// Placeholder
	}

	void Render() override {
		// Render Game scene
		Logger::Info("Game rendering...");
	}
};