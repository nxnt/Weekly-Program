/*  
    Problem : จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include<stdio.h>
void squareRoot(double number)
{
    double root = 1;
    int i = 0;
    if ( number < 0)
    {
        printf("Error : Negative number!");
    }
    else
    {
        while (1)
        {
            i = i + 1;
            root = (number / root + root) / 2;
            if (i == number + 1) 
            { 
                break; 
            }
        }
        printf("The square root of %g is %g", number, root); 
    }
}
int main() 
{
    double num;
    printf("Enter a Number : ");
    scanf("%lf",&num);
    squareRoot(num);
}