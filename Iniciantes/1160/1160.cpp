#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, pa, pb, anos = 0;
    double g1, g2;
    cin>>t;
    for (int i = 0; i < t; i++)
    {

        cin >> pa >> pb >> g1 >> g2;

        g1 = g1 / 100.00;
        g2 = g2 / 100.00;
        while (pa <= pb)
        {
            pa += pa * g1;
            pb += pb * g2;
            anos++;
             if (anos > 100)
        {
            cout<<"Mais de 1 seculo." << endl;
            break;
        }
        }

        if(anos<=100)
        {
            cout << anos << " anos." << endl;
        }
        anos=0;
    }

    return 0;
}
