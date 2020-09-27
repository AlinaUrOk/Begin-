// Begin_18_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/*Даны три точки A, B, C на числовой оси. Точка C расположена между  точками A и B. Найти произведение длин отрезков AC и BC.*/
int main()
{
    int A = 2;
    int B = 6;
    int C = 3;
    int AB = A - C;
    int BC = B - C;
    cout << "AB=" << AB << endl;
    cout << "BC=" << BC << endl;
    cout << "AB*BC=" << AB * BC << endl;
    return 0; 

}