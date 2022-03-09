#include <stdio.h>

double men(double x);

int main(void) {
	double x, y, s;

	printf("a side : ");
	scanf_s("%lf", &x);
	printf("b side : ");
	scanf_s("%lf", &y);

	s = x * y;
	printf("area : %f\n", s);

	return 0;

}
double men(double x) {
	return x;
}