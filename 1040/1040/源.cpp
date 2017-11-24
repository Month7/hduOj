#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int T, N, temp;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &N);
		
		int *a = new int[N];
		for (int i = 0; i < N; i++)
			scanf("%d", &a[i]);
		for (int i = 0; i < N; i++) {
			for (int j = i + 1; j < N; j++) {
				if (a[i] > a[j]) {
					temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			if (i == N-1) {
				printf("%d", a[i]);
			}
			else {
				printf("%d ", a[i]);
			}
			
		}
		printf("\n");
	}
	return 0;
}