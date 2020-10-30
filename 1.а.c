#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 1.а
*/

int main()
{
    int a, x, y, z;
    printf("a = ");
    scanf("%d", &a);
    if (a > 99 && a < 1000)
    {
        x = a % 10;
        a /= 10;
        y = a % 10;
        a /= 10;
        z = a % 10;
    }
    printf((x==y || y==z || x==z)? "true\n" : "false\n");
    return 0;
}