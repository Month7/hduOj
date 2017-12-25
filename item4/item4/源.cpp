#include <stdio.h>
int main() {
	int i, j, k, n, m = 0, l = 0, a[20], t1, t2, t;
	scanf("%d", &n);
	/*printf("\n");*/
	while (l < n) {
		scanf("%d", &a[l]);
		l++;
		printf("l=%d\n", l);
	}
	/*for (int w = 0; w < n ; w++) {
		printf("%d\n\n\n", a[w]);
	}*/
	printf("%d\n\n\n", a[4]);
	//printf("\n");
	for (int i = 0; i < n; i++) {
		for (j = 0; j < n&&j != i; j++) 
			for (k = 0; k < n&&k != i&&k !=j ; k++)
				if (a[i] >= a[j] && a[j] >= a[k]) {
					m++;
					/*printf("i=%d j=%d k=%d\n", i, j, k);*/
				}
					
		
	}
	printf("%d\n", m);
	return 0;
}