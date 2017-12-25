#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
	int a, b, c, result;
	int temp = 0;
	result = 0;
	cin >> a;
	cin >> b;
	cin >> c;
	int array[3];
	array[0] = a;
	array[1] = b;
	array[2] = c;
	for (int i = 0; i<3; i++) {
		for (int j = i + 1; j<3; j++) {
			if (array[i] >= array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
				
		}
	}
	while (array[0] + array[1] <= array[2]) {
		
		array[2]--;
		
	}
	for (int i = 0; i < 3; i++) {
		result += array[i];
	}
	printf("%d\n", result);
	return 0;
}