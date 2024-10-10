#ifndef PARAM_CHECKER_H
#define PARAM_CHECKER_H

void PrintWarning(const char* parameter, const char* condition);
void PrintBreach(const char* parameter, const char* condition);
int IsBelowLowerLimit(float value, float lowerLimit);
int IsAboveUpperLimit(float value, float upperLimit);
int IsApproachingLowerLimit(float value, float lowerLimit, float warningTolerance);
int IsApproachingUpperLimit(float value, float upperLimit, float warningTolerance);
void CheckLowerLimitBreach(float value, float lowerLimit, const char* parameter);
void CheckLowerLimitWarning(float value, float lowerLimit, float warningTolerance, const char* parameter);
int CheckLowerLimit(float value, float lowerLimit, float warningTolerance, const char* parameter, int warningEnabled);
int IsWithinRange(float value, float lowerLimit, float upperLimit, float warningTolerance, const char* parameter, int warningEnabled);

#endif // PARAM_CHECKER_H
