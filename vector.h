#pragma once
#include <iostream>
class vector
{
private :
		int* vctr;
		 int size;
	
public:
	vector(); // ����������� �� ��������� //
	vector (const vector& vec);  // ����������� ����������� //
	vector(int value[], const int size); // ����������� � ����������� // 
	~vector(); // ���������� //
	vector& operator = (const vector& vec); // �������� ������������ ������������ //
	int operator [] (const int& pos); // ��������� �������� �� ������� //
	int size_of(const vector& vec); // ������ ������� //
	int find(int& value); // ����� �������� //
	void push_end(const vector& vec, int val); // ���������� � ����� //
	void replace(int& oldvalue, int& newValue);

};

std::ostream& operator<<(std::ostream& out, vector& vec);
std::istream& operator>>(std::istream& in, vector& vec);