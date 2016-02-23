#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Masukkan Nilai N:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        if(i==n||i==1)
        {
            for(j=n;j>=1;j--)
                {
                    printf("* ");
                }
        }
        else
        {
            for(j=n;j>=1;j--)
                {
                    if(j==n||j==1)
                        {
                            printf("* ");
                        }
                    else
                        {
                            printf("  ");
                        }
                }
        }
        printf("\n");
    }
    getch();
    return 0;
}

