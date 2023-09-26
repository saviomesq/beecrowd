#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase1,frase2,frase3;
    getline(cin,frase1);
    if(frase1=="vertebrado"){
        getline(cin,frase2);
        if(frase2=="ave"){
            getline(cin,frase3);
            if(frase3=="carnivoro"){
                cout<<"aguia"<<endl;
            }
            else if(frase3=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }
        else if(frase2=="mamifero"){
            getline(cin,frase3);
            if(frase3=="onivoro"){
                cout<<"homem"<<endl;
            }
            else if(frase3=="herbivoro"){
                cout<<"vaca"<<endl;
            }
        }
    }
    else if(frase1=="invertebrado"){
        getline(cin,frase2);
        if(frase2=="inseto"){
            getline(cin,frase3);
            if(frase3=="hematofago"){
                cout<<"pulga"<<endl;
            }
            else if(frase3=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }
        else if(frase2=="anelideo"){
            getline(cin,frase3);
            if(frase3=="hematofago"){
                cout<<"sanguessuga"<<endl;
            }
            else if(frase3=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }



    return 0;
}
