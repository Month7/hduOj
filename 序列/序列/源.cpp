#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	int *a = new int[n];
	int *b = new int[n];
	while (n--) {
		int i = 0;
		scanf("%d", &a[i]);
		i++;
	}
	while (n--) {
		int i = 0;
		scanf("%d", &b[i]);
		i++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] == b[j]) {

			}
		}
	}
}