#include <stdio.h>

int main(void)
{  
  int i=1,j=7;
  do{
    printf("I=%d J=%d\n",i,j);
    printf("I=%d J=%d\n",i,j-1);
    printf("I=%d J=%d\n",i,j-2);
    i=i+2;
    j=j+2;
    
  }while(i!=11);
}
