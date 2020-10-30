#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 10
*/


int main( void )
{
    int n, r = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d\n", i);

    return 0;
}