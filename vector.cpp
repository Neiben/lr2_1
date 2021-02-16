#include "vector.h"
# include <iostream>
 //// еще ничего из этого не тестил, не имею понятия работают ли эти функции или нет
vector::vector() {  // default constructor
	 vctr = new int[10];
	 size = 10;

}

vector::vector(const vector& vec) { // copy constructor
	size =  vec.size;
	vctr = new int[size];
	int* value;
	if (vec.vctr != nullptr) {
		for (int i = 0; i < size; i ++) {
			value[i] = vctr[i];
			vec.vctr[i] = value[i];
		}
	}
}

vector::vector(int value[], const int size2) { // constructor with parametrs
	size = size2;
	vctr = new int[size2];
	for (int i = 0; i < size2; i ++) {
		vctr[i] = value[i];
	}
}

vector::~vector() {
	delete [] vctr;
	size = 0;
}

int vector:: size_of(const vector& vec) {
	int counter = 0;
	for (int i = 0; i < vec.size; i ++) {
		counter++;
	}
	std::cout << counter;	
}

int vector:: operator[] ( const int& pos) {
	return vctr[pos];
}

//int vector::find(int& value) {
//	for (int i = 0; i < size; i++) {
//		
//	}
//}