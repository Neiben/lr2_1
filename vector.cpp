#include "vector.h"
# include <iostream>
 
vector::vector(){  
	 values = new int[10];
	 size = 10;

}

vector::vector(const vector& vec) {
	size =  vec.size;
	values = new int[size];
	if (vec.values != nullptr) {
		for (int i = 0; i < size; i ++) {
		 values[i] = vec.values[i];
		}
	}
}

vector::vector(int value[], const int size2) { 
	size = size2;
	values = new int[size2];
	for (int i = 0; i < size2; i ++) {
		values[i] = value[i];
	}
}

vector::~vector() {    
	delete [] values;
	size = 0;
}

int vector:: size_of(const vector& vec) {   // size
	return size;
}

int vector:: operator[] (int& pos) {  
	return values[pos];
}

int vector::find(int& value) {
	int position = -1;
	for (int i = 0; i < size; i++) {
		position++;
		if (values[i]==value) {			
			std::cout << position << std:: endl;
			break;
		}
	}
	
	return position;
}

void vector::push_end(const int& val) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		counter++;
	}
	if (counter < size) {
		values[size] = val;
		size++;
	}
	else {
		int* New_val = new int[size + 10];
		for (int i = 0; i < size; i++) {
			New_val[i] = values[i];
		}
		New_val[size] = val;
		delete[] values;
		size++;
		values = New_val;
	}

}
 std::ostream& operator<<(std::ostream& out,  vector& vec) {	 

	for (int i = 0; i < vec.size; i++) {
		out << vec[i] << " ";
	}
	return out;
}
 vector& vector::operator=(const vector& vec) {
	 delete[] values;
	 size = vec.size;
	 values = new int[size];
	 for (int i = 0; i < size; i++) {
		 values[i] = vec.values[i];
	 }
	 return *this; 
 }

 void vector::replace(const int& oldvalue, const int& newValue) {
	
	 for (int i = 0; i < size; i++) {
		 if (values[i] == oldvalue) {
			 values[i] = newValue;
		 }
	 }
 }

 void vector::print( vector& vec) {
	 
		 for (int i = 0; i < vec.size; i++) {
			 std :: cout << vec.values[i] << " ";
		 }
	 
	 std::cout << std::endl;
 }