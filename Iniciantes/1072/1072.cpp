#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,cont=0,cont2=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>=10 && x<=20){
            cont++;
        }
        else{
            cont2++;
        }
    }

    cout<<cont<<" in"<<endl;
    cout<<cont2<<" out"<<endl;
}
