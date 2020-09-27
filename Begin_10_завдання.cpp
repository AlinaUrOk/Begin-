// Begin_10_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/*Даны два ненулевых числа. Найти сумму, разность, произведение и частное их квадратов.*/
int main()
{
    int a = 20;
    int b = 5;
    cout << "a*a+b*b=" << a * a + b * b << endl;
    cout << "a*a-b*b=" << a * a - b * b << endl;
    cout << "a*a*b*b=" << a * a * b * b << endl;
    cout << "a*a/b*b=" << a * a / b * b << endl;
    return 0; 
}