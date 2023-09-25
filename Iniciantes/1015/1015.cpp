#include <bits/stdc++.h>
using namespace std;

int main(){

    double x1,y1,x2,y2,x,y;

    cin>>x1>>y1>>x2>>y2;
    x=x2-x1;
    x=pow(x,2);
    y=y2-y1;
    y=pow(y,2);
    y=x+y;
    x=sqrt(y);
    cout<<fixed<<setprecision(4)<<x<<endl;

    return 0;
}
