// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

const double PI = 3.14159265;

int main()
{
	std::cout << "This program will calculate the sides and angles of a triangle." << '\n';
	std::cout << "If you have: " << '\n';
	std::cout << "Only two angles, enter 1 for AAA." << '\n';
	std::cout << "Two angles and a side that is not between, enter 2 to solve for AAS." << '\n';
	std::cout << "Two angles and a side that is between, enter 3 to solve for ASA." << '\n';
	std::cout << "Two sides and an angle between, enter 4 to solve for SAS." << '\n';
	std::cout << "Two Sides and an angle not in between, enter 5 to solve for SSA." << '\n';
	std::cout << "All three sides, enter 6 to solve for SSS." << '\n';
	std::cout << " " << std::endl;

	int triangle = {};
	double angle_a = {};
	double angle_b = {};
	double angle_c = {};
	double side_a = {};
	double side_b = {};
	double side_c = {};
	std::cin >> triangle;
	std::cout << " " << std::endl;

	switch (triangle)
	{
	case 1:

		std::cout << "Enter Angle A: ", '\n';
		std::cin >> angle_a;
		std::cout << "Enter angle B: ";
		std::cin >> angle_b;
		angle_c = 180 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;

		break;

	case 2:
		std::cout << "Enter Angle A: ", '\n';
		std::cin >> angle_a;
		std::cout << "Enter angle C: ";
		std::cin >> angle_c;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		angle_b = 180 - angle_a - angle_c;
		angle_a = angle_a * PI / 180.0;
		angle_c = angle_c * PI / 180.0;
		side_a = side_c / sin(angle_c)  * sin(angle_a);
		side_b = side_a / sin(angle_a) * sin(angle_b);

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a * 180.0 / PI << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c * 180.0 / PI << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;
		break;

	case 3:
		std::cout << "Enter Angle A: ";
		std::cin >> angle_a;
		std::cout << "Enter angle B: ";
		std::cin >> angle_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		angle_c = 180 - angle_a - angle_b;
		angle_a = angle_a * PI / 180.0;
		angle_b = angle_b * PI / 180.0;
		side_a = side_c / sin(angle_c) * sin(angle_a);
		side_b = side_a / sin(angle_a) * sin(angle_b);

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a * 180.0 / PI << '\n';
		std::cout << "Angle B: " << angle_b * 180.0 / PI << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;
		break;

	case 4:
		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		std::cout << "Enter Angle A: ";
		std::cin >> angle_a;
		angle_a = angle_a * PI / 180.0;
		side_a = sqrt((side_b * side_b) + (side_c * side_c) - 2 * side_b * side_c * (cos(angle_a) * PI / 180));
		angle_b = asin(sin(angle_a) / (side_a * side_b))  * PI / 180;
		angle_c = 180 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;


		break;

	case 5:
		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		std::cout << "Enter Angle B: ";
		std::cin >> angle_b;
		angle_b = angle_b * PI / 180.0;
		side_a = sqrt((side_b * side_b) + (side_c * side_c) - 2 * side_b * side_c * (cos(angle_b) * PI / 180));
		angle_a = asin(sin(angle_b) / (side_b * side_a)) * PI / 180;
		angle_c = 180 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;

		break;

	case 6:
		std::cout << "Enter side a: ";
		std::cin >> side_a;
		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		angle_a = (side_b * side_b + side_c * side_c - side_a * side_a) / 2 * side_b * side_c;
		angle_b = asin(sin(angle_a) / (side_a * side_b))  * PI / 180;
		angle_c = 180 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << std::endl;

		break;

	default:
		std::cout << "You must enter a number from 1 - 6. Restart the program.";
		break;
	}


	return 0;
}

