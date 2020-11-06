#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

void Plus(float a, float b)
{
	a = a + b;
	std::cout << "Answer - " << a << std::endl;
}
void Minus(float a, float b)
{
	a -= b;
	std::cout << "Answer - " << a << std::endl;
}
void Del(float a, float b) 
{
	a /= b;
	std::cout << "Answer - " << a << std::endl;
}
void Umn(float a, float b)
{
	a *= b;
	std::cout << "Answer - " << a << std::endl;
}
void Step(float a, float b)
{
	std::cout << "Answer - " << pow(a,b) << std::endl;
}
