#define _USE_MATH_DEFINES 
#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
	//#1
	double R = 19;
	double Pi = M_PI;

	double LenCircle = 2 * Pi * R;
	double AreaCircle = Pi * pow(R, 2);
	double AreaSfere = 4 * AreaCircle;
	double ValueSfere = (4.0 / 3.0) * AreaCircle;

	std::printf("%f\n", LenCircle);
	std::printf("%f\n", AreaCircle);
	std::printf("%f\n", AreaSfere);
	std::printf("%f\n", ValueSfere);

	//#2
	int K = 4000;
	int H = K / 3600;
	int M = K % 3600 / 60;
	int S = K % 60;
	std::printf("hours: %d\n", H);
	std::printf("minutes: %d\n", M);
	std::printf("secundes: %d\n", S);

	//#3
	double Chess = ~0ULL;
	unsigned long long years = std::ceil(Chess / 7e14);
	std::printf("%lld\n", years);

	//#4
}