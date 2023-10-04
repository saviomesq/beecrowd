#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int finals=0,aux=0;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=0&&b>=0&&c>=0&&a<=1000 && b<=1000 && c<=1000){
     
       if(a>b && a>c)
    {  
        if(b+c<a){
        aux=c*4;
        finals=aux;
        aux=b*2;
        finals+=aux;
        
    }
    else{
        aux=a*2;
        finals=aux;
        aux=c*2;
        finals+=aux;
        
    }
    }
    else if(b>a && b>c)
    {
        aux=a*2;
        finals=aux;
        aux=c*2;
        finals+=aux;
    }
    else if(c>a && c>b)
    {
        
        if(a+b<c){
           aux=a*4;
        finals=aux;
        aux=b*2;
        finals+=aux; 
        }
        else{
            aux=a*2;
        finals=aux;
        aux=c*2;
        finals+=aux;
        }
    
    }

    printf("%d\n",finals);
     

        
    }
    return 0;
}
