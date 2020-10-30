#include <locale.h>
#include <stdio.h>
/*Федоров Дмитрий
  ВПИ21
  Лаба - 3 задание - 3
*/

int main()
{
    int n, x, y, z;
	n = 0;
	for (int i = 11; i <= 999; i++)
	{
		if (i < 100)
		{
			x = i % 10;
			y = i / 10;
			if (x == y) n++;
		}
		else
		{
			x = i % 10;
			y = i % 100; y /= 10;
			z = i / 100;
			if (x == z) n++;
		}
	}

	printf("%d\n", n);
}