#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int judge(int n) {
	if (n == 0) {
		return 0;
	}
	vector<int> a;
	for (int i = 1; i < n; i++) {
		if ((n%i) == 0) {
			a.push_back(i);
		}
	}
	int result = 0;
	for (int i = 0; i < a.size(); i++) {
		result += a[i];
	}
	if (result == n)
		return 1;
	return 0;
}
int main() {
	int n;
	int num1, num2;
	scanf("%d", &n);
	while (n--) {
		int result = 0;
		scanf("%d %d", &num1, &num2);
		int temp;
		if (num1 > num2) {
			temp = num2;
			num2 = num1;
			num1 = temp;
		}
		for (int i = num1; i <= num2; i++) {
			if (judge(i) == 1) {
				result++;
			}
		}
		printf("%d\n", result);
	}
	
	return 0;
}
