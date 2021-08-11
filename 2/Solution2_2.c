#include <stdio.h>


int main()
{
    float max=0;
    float n1,n2,n3,num[3];
    for (int i = 0; i <3; i++)
    {
        scanf("%f",&num[i]);  
    }
    max=num[0];
    for(int j=0;j<3;j++)
    {
        if (max<num[j])
        {
            max=num[j];
        }
        else {}
    }
    printf("The maximum is %G",max);
    return 0;
}