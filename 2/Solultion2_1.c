#include <stdio.h>
int main()
{
    float BMI, w, h;
    printf("Enter your Weight : ");
    scanf("%f", &w);
    printf("Enter your Height : ");
    scanf("%f", &h);
    BMI = w / (h * h);
    printf("BMI = %.1f", BMI);
    return 0;
}