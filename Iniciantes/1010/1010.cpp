using namespace std;
#include<bits/stdc++.h>    

int main(){


    int salve, qnt1, qntd2;
    float p1,p2,total;

    cin>>salve>>qnt1>>p1;
    cin>>salve>>qntd2>>p2;

    total = (qnt1*p1)+(qntd2*p2);
    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;

}
