#include "funcCalc.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

float Plus(float a, float b)
{
	a += b;
	std::cout << "Answer - " << a << std::endl;
	return a;
}
float Minus(float a, float b)
{
	a -= b;
	std::cout << "Answer - " << a << std::endl;
	return a;
}
float Del(float a, float b)
{
	a /= b;
	std::cout << "Answer - " << a << std::endl;
	return a;
}
float Umn(float a, float b)
{
	a *= b;
	std::cout << "Answer - " << a << std::endl;
	return a;
}
float Step(float a, float b)
{
	float summ = 0.f;
	summ = pow(a, b);
	std::cout << "Answer - " << summ << std::endl;
	return summ;
}