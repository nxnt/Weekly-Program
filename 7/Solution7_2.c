/*  
    Problem : จงเขียนโปรแกรมหาค่า x + y โดยรับมาจาก “a.txt” 
              และแสดงใน “b.txt” (Level 4)
    LANG : C
    AUTHOR : Khunaon Maneesong 64010084
*/
#include <stdio.h>
int main()
{
    FILE *fa, *fb;
    float sum = 0;
    char num[255];

    fa = fopen("a.txt", "r");
    fb = fopen("b.txt", "r+");
    
    fscanf(fa,"%s",num);
    sum += (num[0] - '0');
    fscanf(fa,"%s",num);
    sum += (num[0] - '0');
    
    fprintf(fb, "%g", sum);

    fclose(fa);
    fclose(fb);
    return 0;
}