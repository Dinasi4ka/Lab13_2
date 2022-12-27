// Lab13_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <Windows.h>
#include <stdio.h>
#include <conio.h>

#include "var.h"

using namespace std;
using namespace nsVar;

#define z -1

#define MAX(x, y, z) ((x+y)>(x+z)?(x+y):(x+z))
#define MIN(x, y, z) ((x*x)<(5*abs(y-z))?(x*x):(5*abs(y-z)))

#define PRINTI(w) puts("¬аше число: "); \
 printf(#w" = %d\n",w)



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	int w;
	char ch = '0';
	do
	{
#if (z >= 1 && z <= 10)
		{

			puts("ўоб визначити максимальне з двох числових вираз≥в");
			puts("¬вед≥ть 3 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);
			scanf_s("%d", &c);
			PRINTI(c);

			w = MAX(a, b, c);
			PRINTI(w);
		}
#else
		{
			puts("ўоб визначити м≥н≥мальне з двох числових вираз≥в");
			puts("¬вед≥ть 3 числа: ");
			scanf_s("%d", &a);
			PRINTI(a);
			scanf_s("%d", &b);
			PRINTI(b);
			scanf_s("%d", &c);
			PRINTI(c);


			w = MIN(a, b, c) * MIN(a, b, c);
			PRINTI(w);
		}
#endif
		puts("ўоб повторити вказан≥ д≥њ, нажм≥ть y \n");
		ch = _getch();
	} while (ch == 'y');
}



