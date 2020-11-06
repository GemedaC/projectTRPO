#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <conio.h>
#include "funcCalc.h"

int main(int argc, const char* argv[])
{
	const int SizeChar = 1;
	char Mass[SizeChar];
	while (Mass[0] != 'E')
	{
		float first = 0.f, second = 0.f;
		std::cout << "e - Exit, c - Continue" << std::endl;
		std::cin >> Mass[0];
		if (Mass[0] == 'e' || Mass[0] == 'E') break;
		std::cin >> first >> Mass[0] >> second;
		if (Mass[0] == '+') Plus(first, second);
		if (Mass[0] == '-') Minus(first, second);
		if (Mass[0] == '*') Umn(first, second);
		if (Mass[0] == '/' || Mass[0] == ':') Del(first, second);
		if (Mass[0] == '^') Step(first, second);
	}
	std::cin.get();
	return 0;
 }