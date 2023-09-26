#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,res1,res2,res3;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        res1=9*(x*x)+y*y;
        res2=2*(x*x)+25*(y*y);
        res3=-100*x+(y*y*y);
        if(res1>res2 &&res1>res3){
            cout<<"Rafael ganhou"<<endl;
        }
        if(res2>res3&&res2>res1){
            cout<<"Beto ganhou"<<endl;
        }
        if(res3>res2&&res3>res1){
            cout<<"Carlos ganhou"<<endl;
        }
    }





    return 0;
}
