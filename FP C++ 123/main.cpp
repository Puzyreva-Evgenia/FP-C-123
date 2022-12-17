#include <iostream>
#include <iomanip>
#include <format>
#include <array>
#include <chrono>
#include <string>
#include <clocale>
#include <Windows.h>
#include <random>
#include <fstream>
#include "Oper.h"
#include"Print.h"
using namespace std;
int main()
{
	srand(time(NULL));
	cout<< sum(5, 9);

	int Arr[5];
	for (int i = 0; i < 5; i++) {
		Arr[i] = rand();
	}
	print(Arr, 5);
}


