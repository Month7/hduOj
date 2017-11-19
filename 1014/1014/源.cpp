#include <stdio.h>
int fn(int a, int b) {
	int maxx = a > b ? a : b;
	int minx = a > b ? b : a;
	int left = 1;
	while (left) {
		left = maxx%minx;
		maxx = minx;
		minx = left;
	}
	return maxx;
}
int main() {
	int step, mod;
	while (scanf("%d %d",&step,&mod)==2) {
		
		if (fn(step, mod) == 1) {
			printf("%10d%10d    Good Choice\n\n", step, mod);
		}
		else {
			printf("%10d%10d    Bad Choice\n\n", step, mod);
		}
	}
	
	return 0;
}


