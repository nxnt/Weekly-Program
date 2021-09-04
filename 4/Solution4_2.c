#include <stdio.h>
int main()
{
    int i = 0, x = 0,y=0, n[10], sum = 0, tmp;
    do
    {
        scanf("%d", &n[i]);
        if (i % 2 == 0)
        {
            sum += n[i];
        }
        else
            sum -= n[i];
        i++;
    } while (i < 10);
    {
        printf("Data in array: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", n[i]);
        }
        printf("\nResult: %d", sum);
        printf("\nHint: ");
        for (int i=0 ; i <= 1; i++)
        {
            printf("(");
            do
            {
                if (n[x] > n[x + 2])
                {
                    tmp = n[x + 2];
                    n[x + 2] = n[x];
                    n[x] = tmp;
                    x=y; 
                }
                else 
                {
                    x+=2;
                }
            }while(x<10);
            y++;
            for (int k = i; k<10; k+=2)
            {
                if(k+1>=9)
                {
                    printf("%d",n[k]);
                }
                else printf("%d+",n[k]);
            }
            printf(")");
            if ( i == 0)
            {
                printf("-");
            }
        }
    }
    return 0;
}