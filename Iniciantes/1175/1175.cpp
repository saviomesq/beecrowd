#include <bits/stdc++.h>
using namespace std;

int main(){

    int n[20],a,aux=19;

    for(int i=0;i<20;i++){
        cin>>a;
        n[aux]=a;
        aux--;
    }
    for(int i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }

    return 0;
}
