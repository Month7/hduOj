//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main() {
//	double left;
//	double VUL, D;
//	double i;
//	while (scanf("%lf %lf", &VUL, &D) == 2) {
//		int x = left / D;
//		if (x != left / D) {
//			x += 1;
//		}
//		while () {
//
//		}
//		/*double lose = 0;
//		double time = 0;
//		double i = 1;
//		while (1) {
//			time += i;
//			
//			lose += (D*i);   
//			left = VUL - lose;    
//			i++;
//			if (left < D*i&&left>0) {
//				time++;
//				int x = left / D;
//				if (x != left / D) {
//					x += 1;
//				}
//				if (x == 0)
//					x = 1;
//				time += x;
//				goto end;
//			}
//			
//			if (lose >= VUL) {
//				break;
//			}
//			time++;	
//		}
//		end:{}
//		cout << time << endl;*/
//	}
//	return 0;
//}
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	double left;
	double VUL, D;
	double i,lose, t;
	while (scanf("%lf %lf", &VUL, &D) == 2) {
		i = 1;
		lose = 0;
		t = 0;
		int x = VUL / D;
		if (x != VUL / D) {
			x += 1;
		}
		while (lose<x) {
			lose += i;
			t++;
			i++;
		}
		cout << t +x-1<< endl;
	}
	return 0;
}

