#include <bits/stdc++.h>
using namespace std;

int main(){
    double vet[100];
    for(int i=0;i<10;i++){
        cin>>vet[i];
        if(vet[i]<=10.0){
            printf("A[%d] = %.1lf\n",i,vet[i]);
        }
    }



    return 0;
}
