#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a,b,c,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        a=a*2.0; b=b*3.0;c=c*5.0;
        m=(a+b+c)/10.0;
        cout<<fixed<<setprecision(1)<<m<<endl;
    }
    return 0;
}


    
