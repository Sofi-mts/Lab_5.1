// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 8
// Кучер, Софія
// Обчислити (g(s*s, t+1) + g(t*t, s+1) ) / ( 1 + g^2(s+t, s*t)),
// де g(a, b) = sin(a*b) / (a*a + b*b)

#include <iostream>
#include <cmath>

using namespace std;

double g(const double a, const double b);       // прототип функції

int main()
{
    double s, t;                                // вхідні дані
    double c;                                   // значення виразу

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    c = (g(s * s, t + 1) + g(t * t, s + 1)) / (1 + pow(g(s + t, s * t), 2));

    cout << "c = " << c << endl;

    return 0;
}

// допоміжна функція g(a, b) = sin(a*b) / (a^2 + b^2)
double g(const double a, const double b)        // визначення функції
{
    return sin(a * b) / (a * a + b * b);
}
