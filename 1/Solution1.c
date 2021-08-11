#include <stdio.h>
/*
    Task : จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    LANG : C
    AUTHOR : Khunanon Maneesong 64010084
*/
int main()
{
    int num1, num2;
    printf("Enter number : ");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d x %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d", num1, num2, num1 / num2);
    return 0;
}