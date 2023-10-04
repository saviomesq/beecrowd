#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    
    if(x>y){
        while(y!=x){
            y++;
            if(y%5==3 || y%5==2){
                printf("%d\n",y);
            }
        }
    }
    
     else if(y>x){
        while(x!=y-1){
            x++;
            if(x%5==3 || x%5==2){
                printf("%d\n",x);
            }
        }
    }
   return 0;
}
