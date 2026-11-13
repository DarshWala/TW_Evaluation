/**
 * \mainpage TW Doxygen Demo Project
 *
 * This project demonstrates how to use Doxygen to document
 * a small multi-file C++ project.
 *
 * **Files:**
 * - Logger.h: Logging utility
 * - CalculationEngine.h: Math operations
 * - main.cpp: Entry point
 */

/**
 * @file main.cpp
 * @brief Application entry point demonstrating Logger and CalculationEngine usage.
 */

#include <iostream>
#include "Logger.h"
#include "CalculationEngine.h"

int main() {
    Logger logger("Main");
    CalculationEngine engine(logger);

    int sum = engine.add(3, 4);
    std::cout << "3 + 4 = " << sum << std::endl;

    double result = engine.power(2.0, 10);
    std::cout << "2^10 = " << result << std::endl;

    return 0;
}
