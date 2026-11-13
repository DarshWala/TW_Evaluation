/**
 * @file Logger.h
 * @brief Defines the Logger class for logging messages at different severity levels.
 */

#ifndef LOGGER_H
#define LOGGER_H

#include <string>

/**
 * @enum LogLevel
 * @brief Specifies the severity level of a log message.
 */
enum class LogLevel {
    INFO,    ///< Informational messages
    WARNING, ///< Warning messages indicating potential issues
    ERROR    ///< Error messages indicating failures
};

/**
 * @class Logger
 * @brief A simple logging utility that prints messages with severity levels.
 */
class Logger {
public:
    /**
     * @brief Constructs a Logger with a given module name.
     * @param moduleName The name of the module using this logger.
     */
    Logger(const std::string& moduleName);

    /**
     * @brief Logs a message at the specified level.
     * @param level The severity level of the message.
     * @param message The message to log.
     */
    void log(LogLevel level, const std::string& message);

private:
    std::string module; ///< The module name associated with this logger.
};

#endif // LOGGER_H
