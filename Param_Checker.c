#include <stdio.h>
#include "Param_Checker.h"

void PrintWarning(const char* parameter, const char* condition) {
    printf("Warning: %s %s\n", parameter, condition);
}

void PrintMessage(const char* parameter, const char* condition) {
    printf("%s out of range: %s!\n", parameter, condition);
}

int IsOutOfRange(float value, float lowerLimit, float upperLimit) {
    return value < lowerLimit || value > upperLimit;
}


int IsApproachingLowerLimit(float value, float lowerLimit, float warningTolerance) {
    return value < lowerLimit + warningTolerance;
}

int IsApproachingUpperLimit(float value, float upperLimit, float warningTolerance) {
    return value > upperLimit - warningTolerance;
}

void CheckOutofRange(float value, float lowerLimit, const char* parameter) {
    if (IsOutOfRange(float value, float lowerLimit, float upperLimit)) {
        PrintMessage(parameter, "Out of Range");
    }
}

void CheckLowerLimitWarning(float value, float lowerLimit, float warningTolerance, const char* parameter) {
    if (IsApproachingLowerLimit(value, lowerLimit, warningTolerance)) {
        PrintWarning(parameter, "approaching lower limit");
    }
}

 void CheckUpperLimitWarning(float value, float upperLimit, float warningTolerance, const char* parameter) {
    if (IsApproachingUpperLimit(value, upperLimit, warningTolerance)) {
        PrintWarning(parameter, "approaching upper limit");
    }
}
int CheckRangeLimit(float value, float lowerLimit,float upperLimit, float warningTolerance, const char* parameter, int warningEnabled) {
    CheckOutofRange(value, lowerLimit, parameter);
    if (warningEnabled) {
        CheckLowerLimitWarning(value, lowerLimit, warningTolerance, parameter);
        CheckUpperLimitWarning(value, upperLimit, warningTolerance, parameter);
    }
    return 1;
}

int IsWithinRange(float value, float lowerLimit, float upperLimit, float warningTolerance, const char* parameter, int warningEnabled) {
    return CheckRangeLimit(value, lowerLimit, upperLimit, warningTolerance, parameter, warningEnabled) ;
           
}
