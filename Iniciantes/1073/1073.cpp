#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x=2,res;
    cin>>n;
    while(x<n){
        res=x*x;
        cout<<x<<"^2 = "<<res<<endl;
        x=x+2;
    }
    if(n%2==0){
    cout<<n<<"^2 = "<<n*n<<endl;
    }

    return 0;
}
