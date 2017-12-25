//#include <stdio.h>
//#include <math.h>
//#include<iostream>
//using namespace std;
//int main() {
//	int n, j;
//	int k = 1;
//	int p = 0;
//	while (scanf("%d", &n) && n>1) {
//		if (p) {
//			printf("\n");
//		}
//		int m = n;
//		printf("Case %d.\n", k++);
//		if (n == 1) {
//			printf("1\n\n");
//		}
//
//		for (int i = 2; i <= m; i++) {
//			j = 0;
//			while (n%i == 0) {
//				n = n / i;
//				j++;
//			}
//			if (j != 0) {
//				cout << i << " " << j << " ";
//			}
//		}
//		printf("\n");
//		p = 1;
//	}
//	return 0;
//}
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	int n, j;                                     //j¼ÇÂ¼ÃÝ
	int k = 1;
	int p = 0;
	while (scanf("%d", &n) && n > 1) {              
		if (p) {
			printf("\n");     
		}
		int m = n;                         //m±£´æn
		printf("Case %d.\n", k++);
		//if (n == 1) {
		//	printf("1\n\n");
		//}
		for (int i = 2; i <= m; i++) {                     //13 i=13 i=3
 			j = 0;                                      //12%2 0 n=6 j=1 6%2 j=2 3 
			while (n % i == 0) {                          //12= 2^2*3^1
				n = n / i;
				j++;                                    //ÃÝ´Î+1
			}
			if (j != 0) {
				cout << i << " " << j << " ";               //2 2 3 1
			}
		}
		printf("\n");
		p = 1;
	}
	return 0;
}
