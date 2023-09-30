#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, passado;
    vector<int> passou;
    cin>>n;
    cin>>passado;
    
    vector<int> notas;
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        notas.emplace_back(j);
    }
    sort(notas.rbegin(),notas.rend());
    
    for(int i=0;i<passado;i++){
        passou.emplace_back(notas[i]);
    }
    int index = passado;
    while(notas[passado-1]== notas[index]){
        passou.emplace_back(notas[index]);
        index++;
    }
    cout<<passou.size()<<endl;
    return 0;
}
