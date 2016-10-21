// Main.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Statistique.h"
#include <array>
#include <iostream>
#include <string>

#define TAILLE_TAB 5
#define VALUE_MAX 21

int main() {
	std::array<int, TAILLE_TAB> tmpArray = { 4, 1, 0, 3, 20};

	std::array<int, VALUE_MAX> effectiveArray = haz::Statistique::TransformInEffective<TAILLE_TAB, VALUE_MAX>(tmpArray);
	std::cout << "Array Transform : ";
	for (int i = 0; i < VALUE_MAX; ++i)
		std::cout << effectiveArray[i] << " ";

	std::cout << std::endl << "Median : ";
	std::cout << haz::Statistique::Median<VALUE_MAX>(effectiveArray, TAILLE_TAB) << std::endl;

	std::cout << std::endl << "Variance : ";
	std::cout << haz::Statistique::Variance<VALUE_MAX>(effectiveArray) << std::endl;

	std::string s;  std::cin >> s;

	return 0;
}