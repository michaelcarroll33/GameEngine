#pragma once

#include <chrono>

class Timer {

public:
	static Timer& Get();

	void Reset();
	void Tick();

	float DeltaTime() const { return m_DeltaTime; }
	float ElapsedTime() const { return m_ElapsedTime; }

private:

	Timer() = default;

	using clock = std::chrono::high_resolution_clock;
	std::chrono::time_point<clock> m_LastFrame;

	float m_DeltaTime = 0.0f;
	float m_ElapsedTime = 0.0f;

};