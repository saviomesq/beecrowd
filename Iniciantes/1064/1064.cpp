#include <bits/stdc++.h>
using namespace std;

int main(){
    int cont=0;
    double a,media;
    for(int i=0;i<6;i++){
        cin>>a;
        if(a>0){
            cont++;
            media+=a;
        }
    }
    cout<<cont<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<media/4.0<<endl;


    return 0;
}
