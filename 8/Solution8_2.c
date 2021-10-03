/*  
    Problem : จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include<stdio.h>
double squareRoot(double number)
{
    double error = 0.0000001; 
    double s = number;;
    while ((s - number / s) > error) 
    {
        s = (s + number / s) / 2;
    }
    return s;
}
int main()
 {
    double num;
    printf("Enter a Number : ");
    scanf("%lf",&num);
    if ( num < 0)
    {
        printf("Error : Negative number!");
    }
    else
    {
        printf("The square root of %g is %g",num,squareRoot(num));
    }
    return 0;
}