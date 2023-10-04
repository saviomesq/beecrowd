  #include<stdio.h>
    int main()
    {

        double s=1.0,a=1.0,j=0,k=0;
        for(int i=0; i<=99; i++)
        {
            j=s/a;
            a++;
            k= k+j;
            //printf("[%d]%.2lf\n",i,j);
        }
        printf("%.2lf\n",k);








        return 0;
    }
