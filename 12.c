#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 12
*/


int main( void )
{
    int m, p, k = 0;
    scanf("%d", &m);
    for (p = 4; p < m; p *= 4)
        k++;
    printf("%d\n", k);

    return 0;
}