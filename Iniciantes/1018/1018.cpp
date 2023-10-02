#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,resto,cem=0,cinq=0,vint=0,dez=0,cinc=0,dois=0,um=0;
    cin>>n;
    resto=n;
    if(resto>=100){
        cem=resto/100;
        resto=resto%100;
    }
    if(resto>=50){
        cinq=resto/50;
        resto=resto%50;
    }
    if(resto>=20){
        vint=resto/20;
        resto=resto%20;
    }
    if(resto>=10){
        dez=resto/10;
        resto=resto%10; 
    }
    if(resto>=5){
        cinc=resto/5;
        resto=resto%5; 
    }
    if(resto>=2){
        dois=resto/2;
        resto=resto%2;
    }
    if(resto>=1){
        um=resto/1;
    }
    cout<<n<<endl;
    cout<<cem<<" nota(s) de R$ 100,00"<<endl;
    cout<<cinq<<" nota(s) de R$ 50,00"<<endl;
    cout<<vint<<" nota(s) de R$ 20,00"<<endl;
    cout<<dez<<" nota(s) de R$ 10,00"<<endl;
    cout<<cinc<<" nota(s) de R$ 5,00"<<endl;
    cout<<dois<<" nota(s) de R$ 2,00"<<endl;
    cout<<um<<" nota(s) de R$ 1,00"<<endl;


    return 0;
}
