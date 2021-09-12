/*  
    Problem : จงเขียนโปรแกรมเพื่อรับข้อมูลเป็น string ไปเรื่อยๆ จนกว่าจะพิมพ์เครื่องหมาย . 
              หลังจากนั้นให้จัดเก็บข้อมูลลงในไฟล์ชื่อ c:\temp\data.txt (Level 4)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *f = fopen("c:\\temp\\data.txt","w+");
    char s[1000];
    printf("Input data string :");
    scanf("%[^.]",s);
    for (int i=0;i<strlen(s);i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '\n';
        }
    }
    fprintf(f,s);
    fprintf(f,".");
    fclose(f);
}