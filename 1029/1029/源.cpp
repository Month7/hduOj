//#include <iostream>
//#include <stdio.h>
//#include <map>
//using namespace std;
//int main() {
//	int k;
//	map<int, int> mp;
//	map<int, int>::iterator it;
//	int n;
//	while (scanf("%d",&n)) {
//		mp.clear();
//		while (n--) {
//			scanf("%d", &k);
//			mp[k]++;
//			
//		}
//		it = mp.begin();
//		while(it!=mp.end()){
//			if (it->second >= (n + 1) / 2) {
//				printf("%d\n", it->first);
//				break;
//			}
//			it++;
//		}
//	}
//	return 0;
//}
#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n)!=EOF) {
		int count = 0;
		int result;
		int m;
		int k = (n + 1) / 2;
		while (n--) {
			scanf("%d", &m);
			if (count == 0) {
				result = m;
				count++;
			}
			else {
				if (m == result) {
					count++;
				}	
				else
					count--;
			}
			
		}
		printf("%d\n", result);
	}
	return 0;
}