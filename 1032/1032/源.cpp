#include <stdio.h>

int main() {
	int i, j;
	while (scanf("%d %d", &i, &j)==2) {
		int max = 0;
		int maxx = 0;
		int minx = 0;
		if (i < j) {
			maxx = j;
			minx = i;
		}
		else {
			maxx = i;
			minx = j;
		}
		int m;
	
		for (m = minx; m <= maxx; m++) {
			int k = m;
			int count;
			count = 1;
			while (k != 1) {
				
				if (k % 2 == 0) {
					k = k / 2;
				}
				else {
					k = 3 * k + 1;
					
				}
				count++;
				
				
			}
			if (count > max)
				max = count;
		}
		printf("%d %d %d\n", i, j, max);
	}
	return 0;
}