#include <stdio.h>

int main(void)
{    
   int h,z,l;
    scanf("%d %d %d",&h,&z,&l);
  if(z>l && z>h){
    if(l>h){
      printf("luisinho\n");
    }
    else{
      printf("huguinho\n");
    }
  }
    
  else if(l>z&&l>h){
    if(z>h){
      printf("zezinho\n");
    }
    else{
      printf("huguinho\n");
    }
  }

  else if(h>z&&h>l){
    if(z>l){
      printf("zezinho\n");
    }
    else{
      printf("luisinho\n");
    }
  }


}
