#include <bits/stdc++.h>

using namespace std;

int main(){

    int x1,y1,x2,y2,aux=0;
    vector<int> qntd;
    while(x1!=0){

        cin>>x1>>y1>>x2>>y2;
        
        if(x1 == x2 && y1 == y2){
            qntd.push_back(0);
        }
        else if(x1+y1==x2+y2){
            qntd.push_back(1);
        }
        else if(x1==x2 || y1==y2){
            qntd.push_back(1);
        }
        else if(x1-x2==y1-y2){
            qntd.push_back(1);
        }
        else{
            qntd.push_back(2);
        }

        aux++;
        
    }
    for(int i =0;i<aux-1;i++){
        cout<<qntd[i]<<endl;
    }

    return 0;
}
