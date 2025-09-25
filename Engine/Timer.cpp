#include "Timer.h"

Timer& Timer::Get() {
	static Timer instance;
	return instance;
}

void Timer::Reset() {
	m_LastFrame = clock::now();
	m_DeltaTime = 0.0f;
	m_ElapsedTime = 0.0f;
}

void Timer::Tick() {
	auto now = clock::now();
	m_DeltaTime = std::chrono::duration<float>(now - m_LastFrame).count();
	m_ElapsedTime += m_DeltaTime;
	m_LastFrame = now;
}