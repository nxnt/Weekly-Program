#include <stdio.h>
#include <string.h>
char x[3];
char y[3];
int main()
{
    int sum = 1;
    scanf("%s", x);
    for (int i = 0; i < strlen(x); i++)
    {
        sum *= x[i] - '0';
    }
    sprintf(y, "%d", sum);
    printf("%c.%c.%c = %d\n",x[0],x[1],x[2],sum);
    while (strlen(y) > 2)
    {
        sum = 1;
        for (int i = 0; i < strlen(y); i++)
        { 
            sum *= y[i] - '0';
            if ( i == 2)
            {
                printf("%c = %d\n",y[i],sum);
            }
            else printf("%c.",y[i]);
        }
        sprintf(y, "%d", sum);

    }
    if (strlen(y) == 2)
    {
        printf("0.%c.%c = 0",y[0],y[1]);
    }
    return 0;
}
/*
    9*9*9 = 729
    7*2*9 = 126
    1*2*6 = 12
    0*1*2 = 0
*/