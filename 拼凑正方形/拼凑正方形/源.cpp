#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector <int> res;
	int a, b, c, d, e, result;
	int guess = 100000000;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a == b&&b == c&&c == d) {
		printf("0\n");
	}
	else {
		int sss[4];
		sss[0] = a;
		sss[1] = b;
		sss[2] = c;
		sss[3] = d;
		sort(sss, sss + 4);
		for (e = sss[0]; e < sss[3]; e++) {
			result = 0;
			if (a > e) {
				result += (a - e);
			}
			if (a < e) {
				result += (e - a);
			}
			if (b > e) {
				result += (b - e);
			}
			if (b < e) {
				result += (e - b);
			}
			if (c > e) {
				result += (c - e);
			}
			if (c < e) {
				result += (e - c);
			}
			if (d > e) {
				result += (d - e);
			}
			if (d < e) {
				result += (e - d);
			}
			res.push_back(result);

		}
		for (int i = 0; i < res.size(); i++) {
			if (res[i] < guess) {
				guess = res[i];
			}
		}
		printf("%d\n", guess);
	}
	
	return 0;
}