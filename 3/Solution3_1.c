#include <stdio.h>

int main()
{
    float max = 0;
    float n1, n2, n3;
    scanf("%f %f %f",&n1,&n2,&n3);
    max = n1;
    if (max < n2)
    {
        max = n2;
    }
    if (max < n3)
    {
        max = n3;
    }
    printf("The maximum is %G", max);
    return 0;
}