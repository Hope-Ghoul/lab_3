#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 4
*/

int main()
{
    
    int n;
    scanf("%d", &n);
    int k = 1;
    while ((n /= 10) != 0) ++k;
    printf("%d", k);
    return 0;
}