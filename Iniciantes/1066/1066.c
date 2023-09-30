#include <stdio.h>

int main(void)
{
  int valor,pares=0,impar=0,posi=0,neg=0;
 for(int i=0;i<5;i++){
   scanf("%d",&valor);
   if(valor%2==0){
     pares++;
   }
   else{
     impar++;
   }
   if(valor>0){
     posi++;
   }
   else if(valor<0){
     neg++;
   }
 }
  printf("%d valor(es) par(es)\n",pares);
  printf("%d valor(es) impar(es)\n",impar);
  printf("%d valor(es) positivo(s)\n",posi);
  printf("%d valor(es) negativo(s)\n",neg);
}
