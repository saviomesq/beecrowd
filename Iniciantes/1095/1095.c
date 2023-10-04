#include <stdio.h>

int main(void)
{  
  int i=1,j=60;
  do{
    printf("I=%d J=%d\n",i,j);
    i=i+3;
    j=j-5;
  }while(j!=-5);
}
