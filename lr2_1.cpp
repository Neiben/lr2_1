// lr2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "vector.h"
int main()
{
    int size = 10;
    int* value = new int[size];
    for (int i = 0; i < size; i++) {
        std::cin >> value[i];
    }
    vector vec1(value, size);
    std::cout << "first vector : " << vec1 << std::endl;


    vector vec2(vec1);
    std::cout << "secomd vector(copy of the first) : " << vec2 << std::endl;

    vec1.replace(9, 5);

    vec1.print(vec1);

    vec1.push_end(4);

    vec1.print(vec1);
    
    std::cout << vec1.size_of(vec1) << std::endl;
    const int size2 = 10;
    int arr[size2];
    for (int i = 0; i < size2; i++) {
        std::cin >> arr[i];
    }
    vector vec3(arr, size2);

    vec3.print(vec3);

    int val = 6;
    vec3.find(val);

    vec3 = vec1;

    vec3.print(vec3);

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
