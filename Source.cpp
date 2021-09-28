#include <stdio.h>
#include <math.h>
void main()
{
	printf("Zadani tochki A, B, C s opredelennimi koordinatami...");
	printf("Koordinati - A(x1, x2), B(y1, y2), C(z1, z2) sootvetstvenno");
	float x1, x2, y1, y2, z1, z2, AC, BC, summa;
	x1 = 3;
	x2 = 6;
	y1 = 2;
	y2 = 4;
	z1 = 9;
	z2 = 18;
	AC = sqrt(((x2 - x1) * (x2 - x1)) + ((z2 - z1) * (z2 - z1)));
	printf("       Otrezok AC = ");
	printf("%f\n", AC);
	BC = sqrt(((y2 - y1) * (y2 - y1)) + ((z2 - z1) * (z2 - z1)));
	printf("Otrezok BC = ");
	printf("%f\n", BC);
	summa = (AC + BC);
	printf("Summa otrezkov AC i BC = ");
	printf("%f\n", summa);
}