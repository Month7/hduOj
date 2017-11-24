#include <stdio.h>
int main() {
	int n;
	int i;
	int a[10000];
	int j;
	int temp, digit;
	while (~scanf("%d", &n)) {                              //5 4 3 2 1
		digit = 1;
		a[0] = 1;
		int num;
		for (i = 2; i <= n; i++) {
			num = 0;
			for (j = 0; j < digit; j++) {
				temp = a[j] * i + num;
				a[j] = temp % 10;
				num = temp / 10;
			}
			while (num) {
				a[digit] = num % 10;
				num = num / 10;
				digit++;
			}
		}
		for (i = digit - 1; i >= 0; i--)//倒序输出每一位   
			printf("%4.4d", a[i]);
		printf("\n");
	}
	return 0;
}