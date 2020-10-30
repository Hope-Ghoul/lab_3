#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 9
*/


int main( void )
{
    int n;
    scanf("%d", &n);
    while(n){
        if(n%5!=0)
            printf("%d", n%10);
        n /= 10;
    }
    return 0;
}