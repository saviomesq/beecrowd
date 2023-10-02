#include <bits/stdc++.h>
using namespace std;

int main(){
    double salario,aux,imposto=0.0;
    cin>>salario;
    if(salario<=2000){
        cout<<"Isento"<<endl;
        return 0;
    }
    else{
        aux=salario-2000;
    }
    if(aux>1000){
        imposto+= (1000*1.08)-1000;
        aux-=1000;
    }
    else{
        imposto+=(aux*1.08)-aux;
        cout<<"R$ "<<fixed<<setprecision(2)<<imposto<<endl;
        return 0;
    }
    if(aux>1500){
        imposto+= (1500*1.18)-1500;
        aux-=1500;
    }
    else{
        imposto+=(aux*1.18)-aux;
        cout<<"R$ "<<fixed<<setprecision(2)<<imposto<<endl;
        return 0;
    }
    if(aux>=1){
        imposto+=(aux*1.28)-aux;
        cout<<"R$ "<<fixed<<setprecision(2)<<imposto<<endl;
        return 0;
    }
    
}
