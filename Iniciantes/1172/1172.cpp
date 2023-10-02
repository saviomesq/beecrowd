#include <bits/stdc++.h>
using namespace std;

int main(){
    int vet[10],x;
    for(int i=0;i<10;i++){
        cin>>x;
        if(x<=0){
            vet[i]=1;
        }
        else{
            vet[i]=x;
        }
    }
    for(int i=0;i<10;i++){
        printf("X[%d] = %d\n",i,vet[i]);
    }

    return 0;
}
