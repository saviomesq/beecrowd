#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,res;
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b){
        res=a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<res<<endl;
    }
    else{
        res=(a+b)*c;
        cout<<"Area = "<<fixed<<setprecision(1)<<res/2.0<<endl;
    }
    return 0;
}
