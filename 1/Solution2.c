#include <stdio.h>
/*
    Task : จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    LANG : C
    AUTHOR : Khunanon Maneesong 64010084
*/
float num[2];
void Receive()
{
    int i = 0;
    printf("Enter number : ");
    for (i; i < 2; i++)
    {
        scanf("%f", &num[i]);
    }
}
int Calculate(float x, float y)
{
    printf("%.2f\n", x + y);
    printf("%.2f\n", x - y);
    printf("%.2f\n", x * y);
    printf("%.2f", x / y);
}
int main()
{
    Receive();
    Calculate(num[0], num[1]);
    return 0;
}