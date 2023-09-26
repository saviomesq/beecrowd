#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    double res,res2,aux,tt;
    cin>>n;
    aux=sqrt(5);
    res=(1+aux)/2.0;
    res2=(1-aux)/2.0;
    res=pow(res,n);
    res2=pow(res2,n);
    tt=(res-res2)/aux;

    cout<<fixed<<setprecision(1)<<tt<<endl;


    return 0;
}
