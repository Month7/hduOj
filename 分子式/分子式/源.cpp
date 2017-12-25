
//19:40 : 18
//吴少港 2017 / 11 / 12 19 : 40 : 18
///*
//给出一种物质的分子式， （不带括号）求分子量，本题中的
//分子式只包含四种原子，分别是CHON原子量分别为12.01，1.008
//16.00，14.01，例如，C6H5OH的分子量为94.108g/mol
//*/
#include<stdio.h>
#include<ctype.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int FindGreatestSumOfSubArray(vector<int> array) {
	vector<int> res;
	for (int j = 0; j < array.size()-1; j++) {             //j=4 j++ i=4 i<=4 
		int count = 0;
		for (int i = j; i < array.size()-1; i++) {
			printf("i=%d\n", i);
			count += array[i];
			printf("count=%d\n", count);
			res.push_back(count);
			if (count + array[i + 1] < 0) {  //如果小于0 那么就跳过
				i++;
				count = 0;
			}
		}
		
	}
	int result = -100;
	for (int i = 0; i < res.size(); i++) {
		if (res[i] > result)
			result = res[i];
	}
	return result;
}
int main()
{
	vector<int> test = { 6,-3,-2,7,-9 };
	int x = FindGreatestSumOfSubArray(test);
	printf("x=%d\n", x);
	return 0;
}
//class Solution {
//public:
//	int FindGreatestSumOfSubArray(vector<int> array) {
//		vector<int> res;
//		for (int j = 0; j < array.size() - 1; j++) {             //j=4 j++ i=4 i<=4 
//			int count = 0;
//			for (int i = j; i <= array.size(); i++) {
//					count += array[i];
//					res.push_back(count);
//				if (count + array[i + 1] < 0) {  //如果小于0 那么就跳过
//					i++;
//					count = 0;
//				}
//			}
//			res.push_back(count);
//		}
//		int result = -100;
//		for (int i = 0; i < res.size(); i++) {
//			if (res[i] > result)
//				result = res[i];
//		}
//		return result;
//	}
//};
/*
	f(1)=1;
	f(2)=
*/
//1 1 2 3 5 8 13 21
//1 2 3 4 5 6 7  8
//f(0)=0
//f(1)=1
//f(n)=f(n-1)+f(n-2)
//第1级 1种方法
//第2级 2种方法 11 2
//第3级 1+2 +1种 1 1 1 ，1 2 ，2 1   //3
//第4级 3+2 +2+1     1111 121 112 211 22  //13 31 4
//第5级 5+3种 +6  11111 1112 1121 1211 2111 221 122 212 //14 41 5 131 113 311
//第6级               
//f(n)=f(n-1)+f(n-2)
//f(1)=1
//f(2)=f(2-1)+f(2-2) =2
//f(3)=f(3-1)+f(3-2)+f(3-3) =4
//f(4)=f(4-1)+f(4-2)+f(4-3)+1 =8
//f(5)=f(5-1)+f(5-2)+f(5-3)+f(5-4)+1=

/**
	f(n)= 1 (n=0||1)
	f(n)=f(n-1)+f(n-2)...+f(n-n);
	f(n-1)=f(n-2)+...f(n-n);
	f(n)-f(n-1)=f(n-1);
	f(n)=2*f(n-1);
*/