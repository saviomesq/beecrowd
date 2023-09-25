#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,aux;
    cin>>x;
    if(x%2==0){
        aux=x+1;
        for(int i=0;i<6;i++){
            cout<<aux<<endl;
            aux=aux+2;
        }
    }
    else{
        for(int i=0;i<6;i++){
            cout<<x<<endl;
            x=x+2;
        }
    }
    return 0;
}
