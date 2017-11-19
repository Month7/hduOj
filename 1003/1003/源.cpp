#include <stdio.h>
int main() {
	int t;
	scanf("%d", &t);
	for (int j = 1; j<=t; j++) {
		int sum = 0;
		int max = -1000;
		int n;
		int m = 0;
		int begin = 1;
		int end = 1;
		int i;
		int temp = 1;
		scanf("%d", &n);
		for (i = 0; i<n; i++) {
			scanf("%d", &m);
			sum += m;
			if (sum>max) {
				max = sum;
				end = i + 1;
				begin = temp;
			}
			if (sum<0) {
				temp = i + 2;
				sum = 0;
			}
		}

		printf("Case %d:\n", j);
		printf("%d %d %d\n", max, begin, end);
		if (j != t) {
			printf("\n");
		}
	}
	return 0;
}

