#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int main() {
	int a, b;
	vector <int> array;
	while ((~scanf("%d",&a)))
	{
		int sum = 0;
		for (int i = 1; i <= a; i++) {
			sum += i;
		}
		/*array.push_back(sum);*/
		printf("%d\n", sum);
		printf("\n");
	}
	/*for (int i = 0; i < array.size(); i++) {
		printf("%d\n", array[i]);
	}*/
	return 0;
}