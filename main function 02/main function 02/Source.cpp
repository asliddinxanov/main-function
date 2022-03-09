#include <stdio.h>

void message(int n);

int main(void) {

	int n;
	printf("Enter message number : ");
	scanf_s("%d", &n);
	message(n);
	return 0;
}
void message(int n) {
	int i;
	for (i = 1;i <= n;i++) {
		printf("Hello!\n", n);
	}
}