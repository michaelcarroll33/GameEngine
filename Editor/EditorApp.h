#pragma once

#include "Application.h"
#include "Logger.h"

class EditorApp : public Application {
public:

	EditorApp();
	~EditorApp();

	void Update() override {
		// Editor-specific logic
		Logger::Info("Editor updating...");	// Placeholder
	}

	void Render() override {
		// Render ImGui panels
		Logger::Info("Editor rendering...");
	}
};