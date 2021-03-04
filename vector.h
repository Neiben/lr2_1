#pragma once
#include <iostream>
class vector
{

		int* values;
		 int size;
	
public:
	vector(); // конструктор по умолчанию //
	vector (const vector& vec);  // конструктор клпирования //
	vector(int value[], const int size); // конструктор с параметрами // 
	~vector(); // деструктор //
	vector& operator = (const vector& vec); // оператор присваивания копированием //
	int operator [] (int& pos); // получение элемента по индексу //
	int size_of(const vector& vec); // размер вектора //
	int find(int& value); // поиск элемента //
	void push_end(const int& val); // добавление в конец //
	void replace(const int& oldvalue,const int& newValue); // замена 
	void print( vector& vec);
	friend std::ostream& operator<<(std::ostream& out, vector& vec);


};
