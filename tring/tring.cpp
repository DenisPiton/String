﻿// tring.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class String {
    int len = 10;
public:
    String(int len) : len{ len } {};
    const char* str{ new char[len] };
    String(const char* a) : str{a} {};
    ~String() {
        delete[] str;
    }
    void print()  
    {
        for (int i = 0; i < len; i++)
        {
            cout << str[i];


        }
        cout << endl;
    }
    void Setter(const char* a)
    {
        str = a;
    }
    void operator=(const char* a)
    {
        str = a;
    }
    
    
};
int main()
{

    String a{"asdasda"};
    a.print();
    a.Setter("dasdiuy");
    a.print();
    a = "kuays22";
    a.print();
    
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
