#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;
int judge(int n) {
	int flag = 1;
	for (int i = 2; i < n - 1; i++) {
		if (n%i == 0) {
			flag = 0;
			break;
		}
	}
	char s[10000];
	sprintf(s, "%d", n);
	int lenth = strlen(s);
	for (int i = 0; i < lenth; i++) {
		if (s[i] != s[lenth-i-1]) {
			flag = 0;
			break;
		}
	}
	return flag;
}
int main() {
	int L, R;
	int result = 0;
	scanf("%d %d", &L, &R);
	if (L == R) {
		if (judge(L) && L != 1) {
			result++;
		}
	}
	else {
		for (int i = L; i < R+1; i++) {
			if (judge(i) && i != 1) {
				
				result++;
			}
		}
	}
	
	printf("%d\n", result);
	return 0;
}
//1 2 3 5 7