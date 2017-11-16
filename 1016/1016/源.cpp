#include <stdio.h>
#include <math.h>
int main() {
	int n;
	int a;
	scanf("%d", &n);
	while (n--)
	{
		double sum = 0;
		scanf("%d", &a);
		for (double i = a; i > 1; i--) {
			sum += log10(i);
		}
		printf("%d\n", (int)sum+1);
	}
	return 0;
}