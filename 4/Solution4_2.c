/*  
    Problem : ให้นักศึกษารับข้อมูลเก็บใน array ขนาด 10 ช่องแล้วแสดงค่าตัวเลขต่างๆ ใน array และแสดงผลต่างของ
              ผลรวมค่าที่ตำแหน่งเป็นเลขคี่ กับผลรวมของค่าที่ตำแหน่งเป็นเลขคู่(โดยคิดว่าตำแหน่งที่ 1 คือตัวเลขตัวแรก) 
              ดังตัวอย่างการทำงานของโปรแกรม (แสดง Output หลังจากใส่ค่า Input) (Level 3)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
int main()
{
    int i = 0, x = 0,y=0, n[10], sum = 0, tmp;
    do
    {
        scanf("%d", &n[i]);
        if (i % 2 == 0)
        {
            sum += n[i];
        }
        else
            sum -= n[i];
        i++;
    } while (i < 10);
    {
        printf("Data in array: ");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", n[i]);
        }
        printf("\nResult: %d", sum);
        printf("\nHint: ");
        for (int i=0 ; i <= 1; i++)
        {
            printf("(");
            do
            {
                if (n[x] > n[x + 2])
                {
                    tmp = n[x + 2];
                    n[x + 2] = n[x];
                    n[x] = tmp;
                    x=y; 
                }
                else 
                {
                    x+=2;
                }
            }while(x<10);
            y++;
            for (int k = i; k<10; k+=2)
            {
                if(k+1>=9)
                {
                    printf("%d",n[k]);
                }
                else printf("%d+",n[k]);
            }
            printf(")");
            if ( i == 0)
            {
                printf("-");
            }
        }
    }
    return 0;
}