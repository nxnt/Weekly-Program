#include <stdio.h>
#include <string.h>
char odd[10], even[10];
int odd_order()
{
    int i, odd_tmp;
    i = 0;
    do
    {
        if (i < 4 && odd[i] > odd[i + 1])
        {
            odd_tmp = odd[i + 1];
            odd[i + 1] = odd[i];
            odd[i] = odd_tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    } while (i < 5);
    printf("(");
    for (i = 0; i < 5; i++)
    {
        if (i==4)
        {
            printf("%d)", odd[i]);
        
        }
        else printf("%d+", odd[i]);
    }
}

int even_order()
{
    int i, even_tmp;
    i = 0;
    do
    {
        if (i < 4 && even[i] > even[i + 1])
        {
            even_tmp = even[i + 1];
            even[i + 1] = even[i];
            even[i] = even_tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    } while (i < 5);
    printf("(");
    for (i = 0; i < 5; i++)
    {
        if (i==4)
        {
            printf("%d)", even[i]);
        }
        else printf("%d+", even[i]);
    }
}

int main()
{
    int a = 0, b = 0,n[10];
    float sum1 = 0, sum2 = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
        if (i % 2 != 0)
        {
            sum1 += n[i];
            even[a] = n[i];
            a++;
        }
        else
        {
            sum2 += n[i];
            odd[b]=n[i];
            b++;
        }
    }
    printf("Data in array: ");
    for (int i =0 ;i<10 ; i++) 
    {
        printf("%d ",n[i]);
    }
    printf("\nResult: %g",sum2-sum1);
    printf("\nHint: ");
    odd_order();
    printf("-");
    even_order();
    return 0;
}