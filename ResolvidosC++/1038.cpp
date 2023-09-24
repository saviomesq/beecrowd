#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b;

    cin>>a>>b;

    if(a==1){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.00*b<<endl;
    }
    else if(a==2){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<4.50*b<<endl;
    }
   else if(a==3){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<5.00*b<<endl;
    }
    else if(a==4){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<2.00*b<<endl;
    }
    else if(a==5){
        cout<<fixed<<setprecision(2)<<"Total: R$ "<<1.50*b<<endl;
    }


    return 0;
}