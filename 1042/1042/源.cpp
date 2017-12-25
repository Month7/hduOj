//#include <stdio.h>
//int main() {
//	int n;
//	int i;
//	int a[10000];
//	int j;
//	int temp, digit;
//	while (~scanf("%d", &n)) {                              //5 4 3 2 1
//		digit = 1;
//		a[0] = 1;
//		int num;
//		for (i = 2; i <= n; i++) {
//			num = 0;
//			for (j = 0; j < digit; j++) {
//				temp = a[j] * i + num;
//				a[j] = temp % 10;
//				num = temp / 10;
//			}
//			while (num) {
//				a[digit] = num % 10;
//				num = num / 10;
//				digit++;
//			}
//		}
//		for (i = digit - 1; i >= 0; i--)//倒序输出每一位   
//			printf("%4.4d", a[i]);
//		printf("\n");
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int a[10000];
	int i, j, c, m, n;    //m是否进位
	while (scanf("%d", &n)!=EOF) {
		a[0] = 1;
		m = 0;
		for (i = 1; i <= n; i++) {
			c = 0;
			for (j = 0; j <= m; j++) {
				a[j] = a[j] * i + c;
				c = a[j] / 10000;         //当c>10000时再用数组，否则浪费时间
				a[j] = a[j] % 10000;
			}
			if (c > 0) {
				m++;
				a[m] = c;
			}
		}
		printf("%d", a[m]);
		for (i = m - 1; i >= 0; i--) {
			printf("%4.4d", a[i]);
		}
		printf("\n");
	}
	return 0;
}



/*
	m=1
*/
//24 
// a[0]=1; c=0; a[j]=1 j=0
// a[0]=1*2 c=0 a[j]=2 j=0
// a[0]=1*2*3 c=0 a[j]=6 j=0
// a[0]=1*2*3*4 c=2 a[j]=4 j=0 m=1 a[1]=2
// a[0]=1*2*3*4*5 c=12 a[j]=0 j=0
// a[1]=2*5 c=0 a[1]=2                j=1
/* a[2]=
	
*/
