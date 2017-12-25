#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	//vector<int> guess;
	//string s, c;
	//cin >> s;
	//c = s;
	//int rCount, gCount;
	//rCount = gCount = 0;
	//int result = 0;
	//for (int i = 0; i < s.length(); i++) {    //统计 红绿方块个数
	//	if (s[i] == 'R')
	//		rCount++;
	//	if (s[i] == 'G')
	//		gCount++;
	//}
	//int flag = 1;
	//for (int i = rCount; i < s.length(); i++) {
	//	if (s[i] == 'R') {
	//		flag = 0;
	//		break;
	//	}
	//}
	//for (int j = 1; j < s.length(); j++) {
	//	result = 0;
	//	for (int i = 0; i < j; i++) {
	//		if (s[i] == 'G'&&s[i + 1] == 'R') {
	//			/*s[i + 1] = 'G';*/
	//			s[i] = 'R';
	//			result++;
	//		}
	//	}
	//	for (int i = j; i < s.length(); i++) {
	//		if (s[i] == 'G'&&s[i + 1] == 'R') {
	//			s[i + 1] = 'G';
	//			result++;
	//		}
	//	}
	//	s = c;
	//	guess.push_back(result);
	//	printf("result=%d\n", result);
	//}
	//int minR = 10000;
	//for (int i = 0; i < guess.size(); i++) {
	//	printf("%d ", guess[i]);
	//}
	//for (int i = 0; i < guess.size(); i++) {
	//	if (guess[i] < minR&&guess[i]!=0) {
	//		minR = guess[i];
	//	}
	//}
	//if (flag==0) {
	//	for (int i = 0; i < s.length(); i++) {
	//		printf("%c", s[i]);
	//	}
	//	printf("%d\n", minR);
	//}
	//else {
	//	printf("0\n");
	//}
	vector <int> array;
	vector <int> result;
	array = { 58,24,0,67 };
	for (int i = array.size()-1; i > -1; i--) {
		result.push_back(array[i]);
	}
	for (int i = 0; i < result.size(); i++) {
		printf("%d ", result[i]);
	}
	return 0;
}

//GGGRRRRGRGRRRGRRRRGRGGGRGRRRRRRGGRGRGRGGRRRRGRGGGR R=29 G=21
//RRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGG 
//123    4 5   6    7 89a b    cd  e f g  hijk 1   2
//GGGRRRRGRGRRRGRRRRGRGGGRGRRRRRRGGRGRGRGGRRRRGRGGGR
//RRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGGGGGGGG
//123    4 5   6    7 89a b123456  1 2 3  1234 5   6    
//GGGRRRRGRGRRRGRRRRGRGGGRGRRRRRRGGRGRGRGGRRRRGRGGGR
//RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRGGGGGGGGGGGGGGGGGGG
//123    4 5   6    7 891 2        5 6 7  1234 5   1
//RRRGR
/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
