// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

const double PI = 3.14159265;

int main()
{
	std::cout << "This program will calculate the sides and angles of a triangle." << '\n';
	std::cout << "If you know: " << '\n';
	std::cout << " " << '\n';
	std::cout << "Only two angles, enter 1 to solve for an AAA triangle." << '\n';
	std::cout << "Two angles and a side that is not between them, enter 2 to solve for an AAS triangle." << '\n';
	std::cout << "Two angles and a side that is between them, enter 3 to solve for an ASA triangle." << '\n';
	std::cout << "Two sides and an angle between them, enter 4 to solve a SAS triangle." << '\n';
	std::cout << "Two sides and an angle not in between them, enter 5 to slove for a SSA triangle." << '\n';
	std::cout << "All three sides and no angles, enter 6 to solve for a SSS." << '\n';
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
	case 1: // AAA

		std::cout << "Enter angle A: ", '\n';
		std::cin >> angle_a;
		std::cout << "Enter angle B: ";
		std::cin >> angle_b;
		
		angle_c = 180 - angle_a - angle_b;
		
		// convert the angles from degrees into radians

		angle_a = angle_a * PI / 180.0;
		angle_b = angle_b * PI / 180.0;
		angle_c = angle_c * PI / 180.0;
		
		side_a = 1.0;

		side_b = side_a * sin(angle_b) / sin(angle_a);
		side_c = side_a * sin(angle_c) / sin(angle_a);

		// convert the angles from radians to degrees
		angle_a = angle_a * 180 / PI;
		angle_b = angle_b * 180 / PI;
		angle_c = angle_c * 180 / PI;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a has been set to: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c;
		std::cout << '\n';


		if (side_a == side_b == side_c)
			std::cout << "The sides are proportional.";


		if ((angle_a <= 0) || (angle_a >= 180 || side_a <= 0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable." << std::endl;

		break;

	case 2: // AAS

		std::cout << "Enter Angle A: ", '\n';
		std::cin >> angle_a;
		std::cout << "Enter angle C: ";
		std::cin >> angle_c;
		std::cout << "Enter side c: ";
		std::cin >> side_c;

		angle_b = 180.0 - angle_a - angle_c;

		// convert the angles from degrees into radians

		angle_a = angle_a * PI / 180.0;
		angle_c = angle_c * PI / 180.0;

		side_a = side_c / sin(angle_c)  * sin(angle_a);
		side_b = side_a / sin(angle_a) * sin(angle_b);

		// convert the angles from radians into degrees at output

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a * 180.0 / PI << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c * 180.0 / PI << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << '\n';
		std::cout << " " << '\n';

		if ((angle_a <= 0) || (angle_a >= 180 || side_a <=0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable.";

		break;

	case 3: // ASA

		std::cout << "Enter Angle A: ";
		std::cin >> angle_a;
		std::cout << "Enter angle B: ";
		std::cin >> angle_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		angle_c = 180 - angle_a - angle_b;

		// convert the angles from degrees into radians
		angle_a = angle_a * PI / 180.0;
		angle_b = angle_b * PI / 180.0;

		side_a = side_c / sin(angle_c) * sin(angle_a);
		side_b = side_a / sin(angle_a) * sin(angle_b);

		// convert the angles from radians into degrees at output
		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a * 180.0 / PI << '\n';
		std::cout << "Angle B: " << angle_b * 180.0 / PI << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << '\n';
		std::cout << " " << '\n';

		if ((angle_a <= 0) || (angle_a >= 180 || side_a <= 0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable." << std::endl;

		break;

	case 4: // SAS
		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		std::cout << "Enter Angle A: ";
		std::cin >> angle_a;

		// convert the angles from degrees into radians
		angle_a = angle_a * PI / 180.0;

		side_a = sqrt((side_b * side_b) + (side_c * side_c) - 2 * side_b * side_c * cos(angle_a));
		angle_b = asin(sin(angle_a) / side_a * side_b);
		
		// convert the angles from radians into degrees at output
		angle_a = angle_a *  180.0 / PI;
		angle_b = angle_b * 180.0 / PI;

		angle_c = 180 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << '\n';
		std::cout << " " << '\n';

		if ((angle_a <= 0) || (angle_a >= 180 || side_a <= 0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable." << std::endl;

		break;

	case 5: // SSA

		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;
		std::cout << "Enter Angle B: ";
		std::cin >> angle_b;

		// convert the angles from degrees into radians
		angle_b = angle_b * PI / 180.0;

		angle_c = asin(sin(angle_b) / side_b * side_c);

		angle_a = PI - angle_b - angle_c;
		
		side_a = side_c / sin(angle_c) * sin(angle_a);
		

		// convert the angles from radians to degrees
		angle_a = angle_a * 180 / PI;
		angle_b = angle_b * 180 / PI;
		angle_c = angle_c * 180 / PI;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << '\n';
		std::cout << " " << '\n';

		if ((angle_a <= 0) || (angle_a >= 180 || side_a <= 0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable." << std::endl;

		break;

	case 6: // SSS

		std::cout << "Enter side a: ";
		std::cin >> side_a;
		std::cout << "Enter side b: ";
		std::cin >> side_b;
		std::cout << "Enter side c: ";
		std::cin >> side_c;

		angle_a = (pow(side_b, 2) + pow(side_c, 2) - pow(side_a, 2)) / (2 * side_b * side_c);
		angle_b = (pow(side_c, 2) + pow(side_a, 2) - pow(side_b, 2)) / (2 * side_c * side_a);
		
		angle_a = acos(angle_a);
		angle_b = acos(angle_b);

		// convert the angles from radians to degrees
		angle_a = angle_a * 180.0 / PI;
		angle_b = angle_b * 180.0 / PI;
		
		angle_c = 180.0 - angle_a - angle_b;

		std::cout << " " << '\n';
		std::cout << "Angle A: " << angle_a << '\n';
		std::cout << "Angle B: " << angle_b << '\n';
		std::cout << "Angle C: " << angle_c << '\n';
		std::cout << "Side a: " << side_a << '\n';
		std::cout << "Side b: " << side_b << '\n';
		std::cout << "Side c: " << side_c << '\n';
		std::cout << " " << '\n';

		if ((angle_a <= 0) || (angle_a >= 180 || side_a <= 0))
			std::cout << "Unsolvable.";
		if ((angle_b <= 0) || (angle_b >= 180 || side_b <= 0))
			std::cout << "Unsolvable.";
		if ((angle_c <= 0) || (angle_c >= 180 || side_c <= 0))
			std::cout << "Unsolvable." << std::endl;

		break;

	default:

		std::cout << "You must enter a number from 1 - 6. Restart the program." << std::endl;

		break;
	}

	return 0;
}

