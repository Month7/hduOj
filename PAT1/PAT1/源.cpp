#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int T;
	scanf("%d", &T);
	int *a = new int[T];
	long long int A, B, C;
	for (int i = 1; i <= T + 1; i++) {
		cin >> A;
		cin >> B;
		cin >> C;
		if (A + B > C) {
			a[i] = 1;
		}
		else {
			a[i] = 0;
		}
	}
	for (int i = 1; i <= T; i++) {
		if (a[i] == 1) {
			printf("Case #%d: ture\n", i);
		}
		else {
			printf("Case #%d: false\n", i);
		}
	}
	return 0;
}