using namespace std;
#include<bits/stdc++.h>    

int main(){

   int a,b,c,maiorab;

   cin>>a>>b>>c;
    maiorab=(a+b+abs(a-b))/2;
    maiorab=(c+maiorab+abs(c-maiorab))/2;
    cout<<maiorab<<" eh o maior"<<endl;
    return 0;

}
