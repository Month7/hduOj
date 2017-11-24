#include <stdio.h>
int main() {
	int num;
	int i, j, k;
	while(scanf("%d",&num)!=EOF){
		
		for (i = 1; i < 100; i++) {
			for (j = 1; j < 100; j++) {
				for (k = 1; k < 100; k++) {
					if ((i*i + j*j + k*k) == num) {
							printf("%d %d %d\n", i, j, k);
							goto end;	
					}
				}
			}
		}
	end: {}
	}
	return 0;
}