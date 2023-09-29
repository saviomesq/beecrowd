using namespace std;
#include<bits/stdc++.h>    

int main(){

    char joao[100];
    double salario,venda,finals;


    cin >> joao;
    cin >> salario;
    cin >> venda;
    finals = salario + ((venda*15)/100);
    cout <<fixed;
    cout<<setprecision(2)<<"TOTAL = R$ "<<finals<<endl;
    return 0;

}
