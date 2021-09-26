/*  
    Problem : จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” 
              และแสดงใน “b.txt” (Level 4)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fa, *fb;
    int i = 0;
    float sum = 0;
    char num[255];

    fa = fopen("a.txt", "r");
    fb = fopen("b.txt", "r+");

    fgets(num, 255, fa);
    do
    {
        if (num[i] != ' ')
        {
            sum += (num[i] - '0');
        }
        i++;
    } while (i < strlen(num));
    {

        fprintf(fb, "%g", sum);
    }
    
    fclose(fa);
    fclose(fb);
    return 0;
}