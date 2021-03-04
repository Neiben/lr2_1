#pragma once
#include <iostream>
class vector
{

		int* values;
		 int size;
	
public:
	vector(); // ����������� �� ��������� //
	vector (const vector& vec);  // ����������� ����������� //
	vector(int value[], const int size); // ����������� � ����������� // 
	~vector(); // ���������� //
	vector& operator = (const vector& vec); // �������� ������������ ������������ //
	int operator [] (int& pos); // ��������� �������� �� ������� //
	int size_of(const vector& vec); // ������ ������� //
	int find(int& value); // ����� �������� //
	void push_end(const int& val); // ���������� � ����� //
	void replace(const int& oldvalue,const int& newValue); // ������ 
	void print( vector& vec);
	friend std::ostream& operator<<(std::ostream& out, vector& vec);


};
