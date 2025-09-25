#pragma once

enum class EventType {
	KeyPressed,
	KeyReleased,
	MouseButtonPressed,
	MouseButtonReleased,
	MouseMoved
};

struct Event {
	EventType Type;
	int Key;		// Key code or mouse button
	float MouseX;	// For mouse positioning
	float MouseY;	// For mouse positioning
};