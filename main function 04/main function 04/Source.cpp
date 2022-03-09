#include <stdio.h>
#define N (3)
int maxnum(int data[], int n);

int main(void) {
	int  suuji[N];
	int max = 0;

	for (int i = 1;i <= N;i++) {
		printf("%d‚Â–Ú‚Ì”Žš‚ð“ü—Í : ", i);
		scanf_s("%d", &suuji[i]);
	}
	max = maxnum(suuji, N);
	printf("Å‘å’l : %d", max);
	return 0;
}
int maxnum(int data[], int n) {
	int num = data[0];
	for (int i = 1;i < n;i++) {
		if (num < data[i])
			num = data[i];
	}
	return num;
}