#include <stdio.h>

int main(void)
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a>b&&a>c){
    if(c>b){
      printf("%d\n",b);
      printf("%d\n",c);
    }
    else{
      printf("%d\n",c);
      printf("%d\n",b);
    }
      printf("%d\n",a);
    
  }
  else if(b>a&&b>c){
    if(c>a){
      printf("%d\n",a);
      printf("%d\n",c);
    }
    else{
      printf("%d\n",c);
      printf("%d\n",a);
    }
      printf("%d\n",b);
    
  }

   else if(c>b&&c>a){
    if(b>a){
      printf("%d\n",a);
      printf("%d\n",b);
    }
    else{
      printf("%d\n",b);
      printf("%d\n",a);
    }
      printf("%d\n",c);
    
  }
  printf("\n");

  printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  
}
