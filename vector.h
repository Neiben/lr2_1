#pragma once
#include <iostream>
class vector
{
private :
		int* vctr;
		 int size;
	
public:
	vector(); // конструктор по умолчанию //
	vector (const vector& vec);  // конструктор клпирования //
	vector(int value[], const int size); // конструктор с параметрами // 
	~vector(); // деструктор //
	vector& operator = (const vector& vec); // оператор присваивания копированием //
	int operator [] (const int& pos); // получение элемента по индексу //
	int size_of(const vector& vec); // размер вектора //
	int find(int& value); // поиск элемента //
	void push_end(const vector& vec, int val); // добавление в конец //
	void replace(int& oldvalue, int& newValue);

};

std::ostream& operator<<(std::ostream& out, vector& vec);
std::istream& operator>>(std::istream& in, vector& vec);