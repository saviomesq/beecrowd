#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a,b,c;
    
    cin>>a;
    cin>>b;
    cin>>c;
    
    double media;
    media = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);
    cout << fixed <<setprecision(1);
    cout << "MEDIA = "<<media<<endl;

    return 0;
}
