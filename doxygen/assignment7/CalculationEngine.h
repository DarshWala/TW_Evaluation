/**
 * @file CalculationEngine.h
 * @class CalculationEngine
 * @brief Provides mathematical operations using a Logger for diagnostics.
 * @details This class performs basic arithmetic operations and logs
 *          each computation using an injected Logger instance.
 */

#ifndef CALCULATION_ENGINE_H
#define CALCULATION_ENGINE_H

#include "Logger.h"

/**
 * @class CalculationEngine
 * @brief Mathematical operations engine with logging support.
 */
class CalculationEngine {
public:
    /**
     * @brief Constructs the engine with a logger.
     * @param logger Reference to a Logger instance.
     */
    CalculationEngine(Logger& logger);

    /**
     * @brief Adds two integers.
     * @param a First operand.
     * @param b Second operand.
     * @return Sum of a and b.
     */
    int add(int a, int b);

    /**
     * @brief Raises base to the power of exponent.
     * @param base The base value.
     * @param exponent The exponent value.
     * @return Result of base raised to the power of exponent.
     * \todo Handle negative exponents.
     */
    double power(double base, int exponent);

private:
    Logger& logger; ///< Logger used for diagnostic output.
};

#endif // CALCULATION_ENGINE_H
