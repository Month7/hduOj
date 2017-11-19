#include <stdio.h>
int main() {
	int a, b, n;
	while (true) {
		scanf("%d %d %d", &a, &b, &n);
		if (a == 0 && b == 0 && n == 0) {
			break;
		}
		int fn[200];
		fn[1] = 1;
		fn[2] = 1;
		int i;
		for (i = 3; i <= 52; i++) {                               //最大周期49
			fn[i] = (a*fn[i - 1] + b*fn[i - 2]) % 7;
			if (fn[i - 1] == 1 && fn[i] == 1) {                //找到周期了 
				break;
			}
		}
		i = i - 2;                 //周期是i-2
		n = n % i;
		fn[0] = fn[i];
		printf("%d\n", fn[n]);
		//for (int i = 1; i < 49; i++) {
		//	printf("fn[%d]=%d\n", i,fn[i]);
		//}
	}
	return 0;
}
