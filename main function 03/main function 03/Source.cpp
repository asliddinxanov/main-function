#include <stdio.h>

void ast(int x);
int main(void) {
	int a;
	printf("Enter number : ");
	scanf_s("%d", &a);
	ast(a);

	return 0;

}
void ast(int x) {
	int a = (x % 10), b = (x / 10);

	for (int i = 1;i <= b; i++) {
		for (int j = 1;j <= 10;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int k = 1; k <= a; k++) {
		printf("*");
	}
	printf("\n");
}