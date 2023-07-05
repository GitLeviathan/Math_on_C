#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <stdbool.h>

#define INF (1.0 / 0.0)
#define NaN (0.0 / 0.0)
#define EPS 1e-6
#define EXP 2.718281828459045
#define PI 3.141592653589793
#define S21_M_E 2.7182818284590452353602874  // Значение Е 25 после запятой

int s21_isnan(double x);
int s21_isinf(double x);

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

#endif  // S21_MATH_H_