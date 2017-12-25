//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define ll long long
//#define PI 3.14159
//int t;
//int n, k;
//struct node
//{
//	int x, y;
//}a[10000];
//int cmp(node a, node b)
//{
//	return a.x<b.x; //体积小的先放
//	return a.y>b.y; //扩容大的先放
//}
//int f = 1;
//int main()
//{
//	scanf("%d", &t);
//	while (t--)
//	{
//		f = 1;
//		scanf("%d%d", &n, &k);
//		for (int i = 0; i<n; i++)
//		{
//			scanf("%d%d", &a[i].x, &a[i].y);
//		}
//		sort(a, a + n, cmp);
//		for (int i = 0; i<n; i++)
//		{
//			if (a[i].x>k || k<0)
//			{
//				f = 0;
//			}
//			else
//			{
//				k = k - a[i].x + a[i].y;
//			}
//		}
//		if (f) printf("yes\n");
//		else printf("no");
//	}
//	return 0;
//}
//
/////*
////n v    //n个礼物 体积为v的背包
////ai bi  //每个礼物的体积ai 背包对这件礼物的喜爱程度bi(物体放到背包会扩大的体积)
////能不能所有礼物都放到背包
////【初始体积k=2】
////2 k= 2-1+2=3
////3 k= 3-2+3=4
////1 k= 4-2+1=3
////1 k= 3-3+1=1
////a升序
////b降序
////*/
////#include <stdio.h>
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////struct MyStruct
////{
////	int ai;
////	int bi;
////};
////vector<MyStruct> a;
////bool cmp(MyStruct a, MyStruct b) {
////	if (a.ai < b.ai)
////		return a.ai;
////	if (a.bi > b.bi) {
////		return a.bi;
////	}
////}
////int main() {
////	int T, n, v, flag;
////	scanf("%d", &T);
////	while (T--) {
////		flag = 1;
////		a.clear();
////		scanf("%d %d", &n, &v);
////		for (int i = 0; i < n; i++) {
////			scanf("%d %d", &a[i].ai, &a[i].bi);
////		}
////		sort(a.begin(), a.end(), cmp);
////		for (int i = 0; i < n; i++) {
////			if (a[i].ai > v) {
////				flag = 0;
////				break;
////			}
////			else {
////				v += a[i].bi;
////			}
////		}
////		if (flag)
////			printf("yes\n");
////		else {
////			printf("no\n");
////		}
////	}
////	return 0;
////}
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
bool cmp1(int x, int y) {
	return x > y;
}
int main() {
	long long T, n, v, ai, bi;
	scanf("%lld", &T);
	while (T--) {
		int flag = 1;
		scanf("%lld %lld", &n, &v);
		long *arr1 = new long[n];
		long *arr2 = new long[n];
		for (int i = 0; i < n; i++) {
			scanf("%lld %lld", &ai, &bi);
			arr1[i] = ai;
			arr2[i] = bi;
		}
		sort(arr1, arr1 + n);
		sort(arr2, arr2 + n,cmp1);
		
		for (int i = 0; i <n; i++) {
			
			if (arr1[i] > v) {
				printf("no\n");
				flag = 0;
				break;
			}
			v += (arr2[i]-arr1[i]);
		}
		if (flag == 1)
			printf("yes\n");
	}
	return 0;
}

class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		for (int i = 0; i < length; i++) {
			int index = numbers[i]; //index
			if (index >= length) {
				index -= length;
			}
			numbers[index] += length;
			if (numbers[index] >= length) {
				*duplication = numbers[index];
				return true;
			}
		}
		return false;
	}
};
/*
	index=2 numbers[2]=8;
	index=1 numbers[1]=6;
	index=3 numbers[3]=6;

*/