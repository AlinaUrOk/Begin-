﻿// Begin_33_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/*Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.*/

int main()
{
    int X = 2;
    int A = 10;
    /*T=цена за 1 кг конфет*/
    int T = A / X;
    cout << "T=" << T << endl;
    int Y = 3;
    /*F=цена за Y кг конфет*/
    int F = T * Y;
    cout << "F=" << F << endl;
    return 0;
}