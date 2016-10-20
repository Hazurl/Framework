// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Statistique.h"
#include <array>
#include <iostream>
#include <string>


int main() {
	std::array<int, 2> tmpArray = { 5, 4 };

	std::cout << haz::Statistique::Average<int, std::array<int, 2>> ( tmpArray );

	std::string s;  std::cin >> s;

	return 0;
}