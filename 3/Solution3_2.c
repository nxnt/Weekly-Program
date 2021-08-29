/*  
    Problem : จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
              เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int y = 0 ; y >= -n ; y--)
    {
        for (int x = -n ; x <= n ; x++)
        {
            int negative_side = -abs(x);
            if ( y <= negative_side)
            {

                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}