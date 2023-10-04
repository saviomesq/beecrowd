#include <stdio.h>

int main(void)
{
 int idade,dias,mes,ano,aux,aux2;
  scanf("%d",&idade);
  ano=idade/365;
  aux=idade%365;
  mes=aux/30;
  dias=aux%30;
  printf("%d ano(s)\n",ano);
  printf("%d mes(es)\n",mes);
  printf("%d dia(s)\n",dias);
  
}
