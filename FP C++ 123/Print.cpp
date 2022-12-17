
#include <iostream>
void print(int Arr[],const int size) {
	for (int i = 0; i < size; i++) {
		std::cout << Arr[i]<<" ";
	}
}

void print(int* Arr[], const int length, const int  height) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < length; j++) {
			std::cout << Arr[i] << "\t";
		}
		std::cout << std::endl;
	}
}