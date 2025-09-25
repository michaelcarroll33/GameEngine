#pragma once
#include "Event.h"
#include <functional>
#include <vector>


class EventSystem {
	
public:
	using EventCallback = std::function<void(const Event&)>;

	void Subscribe(EventCallback callback) {
		m_Subscribers.push_back(callback);
	}

	void FireEvent(const Event& e) {
		for (auto& callback : m_Subscribers) {
			callback(e);
		}
	}

	static EventSystem& Get();

	void Init();
	void Poll();

private:

	EventSystem() = default;

	std::vector<EventCallback> m_Subscribers;

};