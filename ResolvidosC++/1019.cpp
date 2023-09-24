#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,h=0,m=0,s=0;
    cin>>n;
    if(n>=3600){
        h=n/3600;
        n=n%3600;
    }
    if(n>=60){
        m=n/60;
        s=n%60;   
    }
    if(n<60){
        s=n;
    }

    cout<<h<<":"<<m<<":"<<s<<endl;


    return 0;
}
