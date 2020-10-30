#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 2
*/

int main()
{
    int n, x, y, z, k;
	n = 0;
	k = 0;
	for (int i = 111; i <= 999; i++)
	{
		k++;
		x = i % 10;
		y = i % 100; y /= 10;
		z = i / 100;
		if ((x == y || y == z || x == z)) n++;
	}

	printf("%d\n", k - n);
}