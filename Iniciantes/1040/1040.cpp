#include <bits/stdc++.h>
using namespace std;

int main(){
    double n1,n2,n3,n4,rec,media,mediafinal;
    cin>>n1>>n2>>n3>>n4;
    media=((n1*2.0)+(n2*3.0)+(n3*4.0)+n4)/10.0;
    if(media>=7){
        cout<<"Media: "<<fixed<<setprecision(1)<<media<<endl;
        cout<<"Aluno aprovado."<<endl;
    }
    else if(media<5){
        cout<<"Media: "<<fixed<<setprecision(1)<<media<<endl;
        cout<<"Aluno reprovado."<<endl;
    }
    else{
        cout<<"Media: "<<fixed<<setprecision(1)<<media<<endl;
        cout<<"Aluno em exame."<<endl;
        cin>>rec;
        cout<<"Nota do exame: "<<rec<<endl;
        mediafinal=(media+rec)/2.0;
        if(mediafinal>=5){
            cout<<"Aluno aprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<mediafinal<<endl;
        }
        else{
            cout<<"Aluno reprovado."<<endl;
            cout<<"Media final: "<<fixed<<setprecision(1)<<mediafinal<<endl;
        }
    }


    return 0;
}
