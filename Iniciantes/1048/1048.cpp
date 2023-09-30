#include <stdio.h>

int main(void)
{
  float sal,novosal;
  int percentual;
  scanf("%f",&sal);
  if(sal>=0 && sal<=400){
    novosal=sal*1.15;
    percentual= 15;
  }
  else if(sal>400 && sal<=800){
    novosal=sal*1.12;
    percentual= 12;
  }
  else if(sal>800 && sal<=1200){
    novosal=sal*1.1;
    percentual= 10;
  }
  else if(sal>1200 && sal<=2000){
    novosal=sal*1.07;
    percentual= 7;
  }
  else if(sal>2000){
    novosal=sal*1.04;
    percentual= 4;
  }
  printf("Novo salario: %.2f\n",novosal);
  printf("Reajuste ganho: %.2f\n",novosal-sal);
  printf("Em percentual: %d %\n",percentual);
  
}
