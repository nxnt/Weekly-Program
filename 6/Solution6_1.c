/*  
    Problem : รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ 
              จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม (Level 5)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
int main()
{
    int x,y;
    printf("Before swap : ");
    scanf("%d %d",&x,&y);
    x = x + y; 
    y = x - y; 
    x = x - y; 
    printf("After swap : %d %d", x, y);
    return 0;
}