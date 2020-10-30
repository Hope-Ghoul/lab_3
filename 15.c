#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 15
*/


int main()
{
   int n, p = 1, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        p *= i;
        s += p;
    }
    printf("%d\n", s);

    return 0;
}