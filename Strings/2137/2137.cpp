#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    while(cin >> n){
        vector<int> livros;
        livros.clear();
        for(int i = 0; i <n;i++){
            int j;
            cin >> j;
            livros.emplace_back(j);
        }
        sort(livros.begin(),livros.end());
            for(const int& livro : livros){
                cout << setw(4) << setfill('0') << livro << endl;
            }
    }


    return 0;
}
