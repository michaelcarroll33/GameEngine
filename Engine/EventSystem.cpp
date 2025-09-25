#include "EventSystem.h"
#include "Timer.h"
#include <iostream>

EventSystem& EventSystem::Get() {
	static EventSystem instance;
	return instance;
}

void EventSystem::Init() {
	std::cout << "[EventSystem] Initialized" << std::endl;
}

void EventSystem::Poll() {
	std::cout << "[EventSystem] Polling events" << std::endl;
}