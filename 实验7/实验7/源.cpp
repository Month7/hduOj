#include <stdio.h>
#include <string.h>
int fun1(int a, int b) {
	return a + b;
}
int fun2(int a, int b) {
	return a*b;
}
int x = 10, y, z = 20;             //x,y,zȫ�ֱ���
int main(int argc, char* argv[]) {  // argc���������ܵĲ�������  argv[]��argc�����������е�0�������ǳ����ȫ�����Ժ�Ĳ��� �����к�������û�����Ĳ���
	char buff[64];
	int a = 5, b, c = 6;
	char *p3 = "123456"; // p3��ջ��;   "123456\0" �ڳ������� 
	//printf("��������ַ%p\n", p3);
	//printf("(.stack) of  argv[0] = %p\n", argv[0]);
	//printf("(.stack) of  argv[0] = %d\n", argv[0]);
	printf("(.text)address of \n\t fun1 = %p\n\t fun2 = %p\n\t main = %p\n", fun1, fun2, main);//%p��16�������ָ��ֵ
	//printf(" (.data initiated)address of \n\t x(inited) = %p\n\t z(inited) = %p\n", &x, &z);
	//printf("(.bss initiated)address of \n\t y(uninited) = %p\n", &y);
	/*printf("(.stack) of \n\t argc = %p\n\t argv = %p\n\t argv[0] = %p\n", &argc, &argv, argv[0]);
	printf("(Local variable) of \n\t buff[64] = %p\n", buff);
	printf("(Local variable) of a \n\t a(inited) = %p\n\t b(uninited) = %p\n\t c(inited) = %p\n", &a, &b, &c);*/
	return 0;
}
/*
	x,z ȫ�ֳ�ʼ����
	y ȫ��δ��ʼ����
	b ջ��

*/