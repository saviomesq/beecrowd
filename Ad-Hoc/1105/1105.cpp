#include <bits/stdc++.h>
using namespace std;
#define MAX 22

int main()
{

    int b, n, aux, dev, cred, total, flag = 0;
    int vet[MAX];
    while (cin >> b >> n && b + n != 0)
    {
        flag=0;
        for (int i = 0; i < b; i++)
        {
            cin >> aux;
            vet[i]=aux;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> dev >> cred >> total;
            
                vet[dev - 1] -= total;
                vet[cred - 1] += total;
        }

        for (int i = 0; i < b; i++)
        {
            if(vet[i]<0)
                flag=1;   
        }   
       
        if(flag==1){
            cout<<"N\n";
        }
        else
            cout<<"S\n";
    }

    return 0;
}
