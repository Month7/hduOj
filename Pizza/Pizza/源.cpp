#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main() {
	int T, n;
	long long k;
	scanf("%d", &T);
	while (T--) {
		scanf("%d %lld", &n, &k);
		printf("%lld\n", k);
	}
	return 0;
}
class Solution {
public:
	vector<int> twoSum(vector<int> &numbers, int target) {
		map<int, int>m;
		vector<int> res;
		int len = numbers.size();
		for (int i = 0; i < len; i++) {
			m[numbers[i]] = i;
		}
		//find()��������һ��������ָ���ֵΪkey��Ԫ�أ����û�ҵ��ͷ���ָ��mapβ���ĵ�����
		for (int i = 0; i < len; i++) {
			int jud = target - numbers[i];
			if (m.find(jud) != m.end() && m[jud] > i) {
				res.push_back(i + 1);
				res.push_back(m[jud] + 1);
			}
		}
		return res;
	}
};
/*  
    [3,1,5] 6
	map m
	3 0  key value
	1 1
	5 2
	jud=5 
*/