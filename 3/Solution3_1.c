/*  
    Problem : จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
              เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int y = 1 ; y <= n ; y++)
    {
        for (int i = n-1 ; i >= y ; i--)
        {
            printf(" ");
        }
        for (int j=1 ; j<=2*y-1 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
        
    return 0;
}