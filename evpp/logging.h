#pragma once
#include <vector>
#include <thread>
#include "evpp/platform_config.h"

#define DLOG_WARN std::cout << __PRETTY_FUNCTION__ << " this=" << this << " "
#define DLOG_TRACE std::cout << __PRETTY_FUNCTION__ << " this=" << this << " "
#define LOG_TRACE std::cout << __FILE__ << ":" << __LINE__ << " "
#define LOG_DEBUG std::cout << __FILE__ << ":" << __LINE__ << " "
#define LOG_INFO  std::cout << __FILE__ << ":" << __LINE__ << " "
#define LOG_WARN  std::cout << __FILE__ << ":" << __LINE__ << " "
#define LOG_ERROR std::cout << __FILE__ << ":" << __LINE__ << " "
#define LOG_FATAL std::cout << __FILE__ << ":" << __LINE__ << " "
#define CHECK_NOTnullptr(val) LOG_ERROR << "'" #val "' Must be non nullptr";

