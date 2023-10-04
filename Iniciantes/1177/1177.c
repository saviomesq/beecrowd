#include <stdio.h>

int main()
{
  int t,x=0;
  scanf("%d",&t);
  if(t>=2&&t<=50){
       int n[1000];
  for(int i=0;i<1000;i++,x++){
      n[i]=x;
      if(x==t-1){
         x=-1;
      }
  }
   
   for(int i=0;i<1000;i++,x++){
      printf("N[%d] = %d\n", i,n[i]);
  }
  
      
  }
 
  
    return 0;
}
