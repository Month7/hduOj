#include <stdio.h>
#include <iostream>
using namespace std;
int judge(int a[],int n) {
	int flag = 1;
	int res = 1;
	for (int i = 0; i < n-1; i++) {
		int left = a[i + 1] - a[i];
		if (left != 1) {
			
			res++;
		}
	}

	return res;
}
int main() {
	int n, result;
	cin >> n;
	int *a=new int [n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("%d\n", judge(a, n));
	return 0;
}