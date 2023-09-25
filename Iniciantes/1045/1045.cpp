#include <bits/stdc++.h>
using namespace std;
#define MAX 3
int main()
{
    double a, b, c;
    vector<double> vet(MAX, 0);
    cin >> vet[0];
    cin >> vet[1];
    cin >> vet[2];

    sort(vet.begin(), vet.end());
    c = vet[0];
    b = vet[1];
    a = vet[2];

    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {

        if (a * a == b * b + c * c)
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (a * a > b * b + c * c)
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (a * a < b * b + c * c)
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (b == c && a ==b)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }

        if (a == b && c != b)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
        if (b == c && a != c)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
        if (c == a && a != b)
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
