//%d=%c+48
#include <iostream>
#include <string>
using namespace std;
int flag;                                         //判断加到最后第一位
string add(string a, string b) {
	string c;
	int len_A = a.length();
	int len_B = b.length();
	int len = len_A;
	if (len_A < len_B) {                        //比较a和b的长度，在短的前面补0，便于计算
		int n = len_B - len_A;
		while (n--)
		{
			a = "0" + a;
		}
		len = len_B;
	}
	if (len_A > len_B) {
		int n = len_A - len_B;
		while (n--)
		{
			b = "0" + b;
		}
		len = len_A;
	}
	int temp = 0;                            //相加结果
	int jw = 0;                              //进位
	int i =len-1;                       
	for (i; i >=0 ; i--) {                   //从末位开始相加
		temp = a[i] + b[i] + jw - 96;         //比如 7+8 那么结果就是5进1
		jw = temp / 10;                      
		temp = temp % 10;
		c = char(temp + 48)+c;
	}                                      //这样加出来的c并不是最终结果 
	if (jw == 1) {                         //还需要判断一下最后位数是否多了一位
		flag = 1;
	}
	if (jw == 0) {
		flag = 0;
	}
	return c;
}
void show(string c) {                                  //输出c
		if (flag) {
			printf("1");
			for (int i = 0; i < c.length(); i++) {
				printf("%c", c[i]);
			}
		}
		if (flag == 0) {
			for (int i = 0; i < c.length(); i++) {
				printf("%c", c[i]);
			}
		}
}
int main() {
	int n;
	scanf("%d", &n);
	int m = n;
	int i = 1;
	while (n--)
	{
		string a, b;
		cin >> a;
		cin >> b;
		printf("Case %d:\n", i);
		cout << a;
		printf(" ");
		cout << "+";
		printf(" ");
		cout << b;
		printf(" ");
		cout << "=";
		printf(" ");
		string c = add(a, b);
		show(c);
		printf("\n");
		i++;
		if (i != m+1) {
			printf("\n");
		}
	}
	return 0;
}