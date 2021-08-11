#include <stdio.h>
/*
    Task : จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 2 ตัว แล้วแสดงผลบวก ลบ คูณ หาร ของตัวเลขทั้งสองตัวนั้น โดยใช้ตัวแปรน้อยที่สุด (Level 1)
    LANG : C
    AUTHOR : Khunanon Maneesong 64010084
*/
int num[2];
void Receive()
{
    int i = 0;
    printf("Enter number : ");
    for (i; i < 2; i++)
    {
        scanf("%d", &num[i]);
    }
}
int Calculate(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d x %d = %d\n", x, y, x * y);
    printf("%d / %d = %d", x, y, x / y);
}
int main()
{
    Receive();
    Calculate(num[0], num[1]);
    return 0;
}