#include <stdio.h>
/*
    Task : จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    LANG : C
    AUTHOR : Khunanon Maneesong 64010084
*/

int main()
{
    float num[2];
    int i = 0;
    printf("Enter number : ");
    for (i; i < 2; i++)
    {
        scanf("%f", &num[i]);
    }
    printf("%g + %g = %g\n", num[0], num[1], num[0] + num[1]);
    printf("%g - %g = %g\n", num[0], num[1], num[0] - num[1]);
    printf("%g x %g = %g\n", num[0], num[1], num[0] * num[1]);
    printf("%g / %g = %g", num[0], num[1], num[0] / num[1]);
    return 0;
}