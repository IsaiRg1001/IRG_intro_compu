#include <stdio.h>


int main()
{
	float porcentaje_y;
	float porcentaje_x;
	float  ancho;
	float alto;
	float porcentaje_ancho;
	float porcentaje_alto;
	int x1;
	int y1;
	int x2;
	int y2;
	scanf_s("%f", &porcentaje_y);
	scanf_s("%f", &porcentaje_x);
	scanf_s("%i", &ancho);
	scanf_s("%f", &porcentaje_ancho);
	scanf_s("%f", &porcentaje_alto);
	scanf_s("%i", &alto);
	x1 = ancho + porcentaje_x;
	y1 = alto * porcentaje_y;
	x2 = ancho * porcentaje_ancho + x1;
	y2 = alto * porcentaje_alto + y1;
	printf("%i%i%5.2f%5.2f%5.2f%5.2f%i%i%i%i", ancho, alto, porcentaje_x, porcentaje_y, porcentaje_ancho, porcentaje_alto, x1, y1, x2, y2);
	return 0;
}
