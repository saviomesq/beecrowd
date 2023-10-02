#include <bits/stdc++.h>
using namespace std;

int main(){

    double a,b,c,aux,x1,x2,sq;
    cin>>a>>b>>c;
    if(a==0){
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    aux=(b*b)-(4.0*a*c);
    if(aux<0){
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }
    else{
        sq=sqrt(aux);
        x1=(-b+sq)/(2.0*a);
        x2=(-b-sq)/(2.0*a);
        cout<<"R1 = "<<fixed<<setprecision(5)<<x1<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<x2<<endl;
    }




    return 0;
}
