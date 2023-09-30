#include <stdio.h>

int main(void)
{
  float num;
  int positivo=0;
  for(int i=0;i<6;i++){
    scanf("%f",&num);
    if(num>0){
      positivo++;
    }
    if(num==0){
      i--;
    }
  }
  printf("%d valores positivos\n",positivo);
}
