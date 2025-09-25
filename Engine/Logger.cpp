#include "Logger.h"

using namespace std;

void Logger::Init() {
	cout << "[Logger] Initialized " << endl;
}

void Logger::Shutdown() {
	cout << "[Logger] Shutdown " << endl;
}

void Logger::Log(LogLevel level, const std::string& msg) {
	switch (level) {
	case LogLevel::Info:
		cout << "[Info] " << msg << endl;
		break;
	case LogLevel::Warning:
		cout << "[Warning] " << msg << endl;
		break;
	case LogLevel::Error:
		cout << "[Error] " << msg << endl;
		break;
	case LogLevel::Debug:
		cout << "[Debug] " << msg << endl;
		break;
	}
}

void Logger::Info(const std::string& msg) {
	Log(LogLevel::Info, msg);
}

void Logger::Warning(const std::string& msg) {
	Log(LogLevel::Warning, msg);
}

void Logger::Error(const std::string& msg) {
	Log(LogLevel::Error, msg);
}

void Logger::Debug(const std::string& msg) {
	Log(LogLevel::Debug, msg);
}