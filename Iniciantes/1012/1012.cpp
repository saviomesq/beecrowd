using namespace std;
#include<bits/stdc++.h>    

int main(){

    double a,b,c,tri,circ,trap,quad,ret;
    cin>>a>>b>>c;
    tri=(a*c)/2;
    circ= 3.14159*pow(c,2);
    trap= ((a+b)*c)/2;
    quad = b*b;
    ret = a*b;
    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<circ<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<trap<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<quad<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<ret<<endl;
    return 0;

}
