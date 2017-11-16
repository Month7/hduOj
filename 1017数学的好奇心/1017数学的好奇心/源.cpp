#include <stdio.h>
int main() {
	int N, n, m, a, b;
	scanf("%d", &N);
	while (N--) {
		int i = 1;
		while (true)
		{
			int sum = 0;
			scanf("%d%d", &n, &m);
			if (n == 0 && m == 0)
				break;
			for (a = 1; a < n; a++) {
				for (b = a + 1; b < n; b++) {
					if ((a*a + b*b + m) % (a*b) == 0) {
						sum++;
					}
				}
			}
			printf("Case %d: %d\n", i, sum);
			/*scanf("%d%d", &n, &m);*/
			scanf(" ");
			i++;
		}
		if (N>0) {
			printf("\n");
		}
	}
	return 0;
}