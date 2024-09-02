#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");

    int a;
    int b;
    int c;

    cout << "Введите длины трех отрезков";

    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b + c || b > a + c || c > a + b)
    {
        cout << "Треугольник из этих отрезков не получается";
    }
    else
    {
        cout << "Треугольник готов";
    }


    int a1 = a * a;
    int b1 = b * b;
    int c1 = c * c;

    if (a1 == b1 + c1 || b1 == a1 + c1 || c1 == a1 + b1)
    {
        cout << "Треугольник с прямым углом";
    }


}
