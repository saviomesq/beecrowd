#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1=3,m1,h2,m2,cont=0,contm=0,aux,r;
    while(cin>>h1>>m1>>h2>>m2 && h1+m1+h2+m2!=0){
        cont=0;
        contm=0;
        if(h1==h2 && m1>m2){
            cont=24;
        }
        else if(h1==h2 && m1>m2){
            cont=0;
        }
        while(h1!=h2){
            if(h1==23){
                h1=-1;
            }
            h1++;
            cont++;
        }

        if(m2>m1){
            contm=m2-m1;
        }
        else if(m2==m1){
            contm=0;
        }
        else{
            aux= 60-m1;
            contm=m2+aux;
            cont--;
        }
        r=cont*60 +contm;
        cout<<r<<endl;
    }
}
