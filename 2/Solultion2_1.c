/*  
    Problem : เขียนโปรแกรมเพื่อรับค่าจำนวนเต็มมา 1 จำนวน (ผู้ตรวจจะใส่ค่าตั้งแต่ 100 – 999) 
              แล้วทำการแยกตัวเลขแต่ละหลักออกมาแล้วหาผลคูณของตัวเลขทุกหลัก ให้ทําซ้ำเช่นนี้ไปเรื่อย ๆ 
              จนเหลือผลลัพธ์เป็นเลขหลักเดียว ดังตัวอย่างการทำงานของโปรแกรม (Level 2)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
int Multiply(int x)
{
    int i=2,s=1,n[3]={0,0,0};
    do 
    {
        n[i] = x%10;
        s *= n[i];
        x/=10;
        i--;
    }
    while ( i >= 0 );
    {
        for (int i=0; i<3; i++)
        {
            if ( i == 2)
            {
                printf("%d = %d\n",n[i],s);
            }
            else printf("%d.",n[i]);
        }
        return s;
    }
}

int Count_num(int y)
{
    int c=0;
    do 
    {
        y/=10;
        c++;
    }
    while (y>0);
    {
        return c;
    }
}

int main()
{
    int n,sum,count;
    printf("Input number : ");
    scanf("%d",&n);
    sum=Multiply(n);
    while ( (count = Count_num(sum))>1 )
    {
        sum = Multiply(sum) ;
    }
    return 0;
}