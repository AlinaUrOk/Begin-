// Begin_5_завдання.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
/*Begin5. Дана длина ребра куба a. Найти объем куба V = a³ и площадь его поверхности S = 6·a²*/
int main()
{
 
    int a = 3;
    int V = a * a * a;
    cout << "V=" << V << endl;
  
    int S = 6 * a * a;
    cout << "S=" << S << endl; 
    return 0; 
}
