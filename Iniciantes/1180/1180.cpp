#include <bits/stdc++.h>
using namespace std;

int  main(){
    int n;
    cin>>n;
    int x[n],menor=INT_MAX,posi;
    for(int i=0;i<n;i++){
        cin>>x[i];
        if(x[i]<menor){
            menor=x[i];
            posi=i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<posi<<endl;

    return 0;
}
