#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100] = { 0 };//定义保存化学式分子种类的数组 
	float m[] = { 0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00 };//表示原子质量的映射数组 
						 // 'C='65; //'H'=72;
	/*m['C']=12.01;m['H']=1.008;m['O']=16.00;m['N']=14.01;  */
	double sum = 0;                             //分子量
	int i = 0, j = 0;
	char k;
	printf("输入原子式(#号结束)：");
	while (1)
	{
		scanf("%c", &a[i]);
		if (a[i] == '#')
			break;
		i++;
	}
	/*puts(a);*/
	for (i = 0; a[i] != '#'; ++i)
	{
		if (isalpha(a[i]))                       //判断是否是英文字母
		{
			k = a[i];                          
			sum = sum + m[k - 'A'];            //k-65
		}
		else
		{
			j = a[i] - '0';
		
			while (isdigit(a[i + 1]))                      //判断下一位是否是10进制数字
			{
				j = j * 10 + (a[i + 1] - '0');
				i++;
			}
			sum = sum + ((j - 1)*m[k - 'A']);
		}
	}
	printf("%.3f", sum);
	return 0;
}