#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(cin>>a>>b,b+a!=0){
        int vet1[10]={0},vet2[10]={0};
        int v1=0,v2=0,cont=0,aux=0,slc=9;
        while(slc!=0){
            vet1[v1]=a%10;
            a=a/10;
            v1++;
            vet2[v2]=b%10;
            b=b/10;
            v2++;   
            slc--;
        }

        for(int i=0;i<10;i++){
            if(vet1[i]+vet2[i]+aux>=10){
                cont++;
                aux=1;
            }
            else
                aux=0;
        }
        if(cont==0)
            cout<<"No carry operation."<<endl;
        else if(cont==1)
            cout<<cont<<" carry operation."<<endl;
        else
            cout<<cont<<" carry operations."<<endl;
    }
    return 0;
}
