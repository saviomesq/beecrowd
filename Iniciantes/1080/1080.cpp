#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,maior=0,posi=0;
    for(int i=0;i<100;i++){
        cin>>x;
        if(maior<x){
            posi=i+1;
            maior=x;
        }
    }

    cout<<maior<<endl;
    cout<<posi<<endl;



    return 0;
}
