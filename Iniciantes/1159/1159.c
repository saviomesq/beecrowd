#include <stdio.h>

int main(void)
{
  int x=1,aux=0;
  int vet[100],somador[100];
  while(x!=0){
    scanf("%d",&x);
    vet[aux]=x;
    aux++;
  }
  for(int i=0;i<aux-1;i++){
    if(vet[i]%2==0){
      somador[i]= (vet[i]*5)+20;
    }
    else{
      somador[i]=(vet[i]*5)+25;
    }
  }
  for(int i=0;i<aux-1;i++){
    printf("%d\n",somador[i]);
  }
}
