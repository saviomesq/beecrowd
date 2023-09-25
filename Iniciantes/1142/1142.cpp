#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    for(int j=1;j<=n;j++){
        cout<<i<<" "<<i+1<<" "<<i+2<<" PUM"<<endl;
        i=i+4;
    }
    return 0;
}
