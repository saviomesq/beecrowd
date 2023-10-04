#include <stdio.h>

int main()
{
   int x,y,aux=1;
   scanf("%d %d",&x,&y);
   if(x>1&&x<20&&x<y&&y<100000){
       
       
       
       for(int i=0;i<y;i++){
       for(int j=1;j<=x;j++){
           if(j!=x && j==1){
              printf("%d",aux); 
           }
           else if(j!=x && x!=0){
                printf(" %d",aux);
           }
           else{
               printf(" %d\n",aux);
           }
           aux++;
       }
       if(aux==y+1){
           i=y;
       }
   }

       
   }
   
    return 0;
}
