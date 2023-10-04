#include <stdio.h>

int main(void)
{
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  int soma=0;
  if(x>y){
    while(y!=x){
      y++;
      if(y%2!=0){
        if(x!=y){
         soma+=y; 
        }
      }
    }
  }
  else if(y>x){
    while(x!=y){
      x++;
      if(x%2!=0){
        soma+=x;
      }
    }
  }
  printf("%d\n",soma);
}
