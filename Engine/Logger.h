#pragma once

#include <string>
#include <iostream>

enum class LogLevel { Info, Warning, Error, Debug };

class Logger {

public:
	static void Init();
	static void Shutdown();

	static void Log(LogLevel level, const std::string& msg);

	static void Info(const std::string& msg);
	static void Warning(const std::string& msg);
	static void Error(const std::string& msg);
	static void Debug(const std::string& msg);

};