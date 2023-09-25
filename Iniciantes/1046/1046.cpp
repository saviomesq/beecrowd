#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,h2,aux;

    cin>>h1>>h2;
    if(h1>h2){
        aux= (24-h1) + h2;
        cout<<"O JOGO DUROU "<<aux<<" HORA(S)"<<endl;
    }
    else if(h2>h1){
        aux=h2-h1;
        cout<<"O JOGO DUROU "<<aux<<" HORA(S)"<<endl;
    }
    else{
        aux=24;
        cout<<"O JOGO DUROU "<<aux<<" HORA(S)"<<endl;
    }


    return 0;
}
