#include<stdio.h>
#include<ctype.h>
int main()
{
	char a[100] = { 0 };//���屣�滯ѧʽ������������� 
	float m[] = { 0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00 };//��ʾԭ��������ӳ������ 
						 // 'C='65; //'H'=72;
	/*m['C']=12.01;m['H']=1.008;m['O']=16.00;m['N']=14.01;  */
	double sum = 0;                             //������
	int i = 0, j = 0;
	char k;
	printf("����ԭ��ʽ(#�Ž���)��");
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
		if (isalpha(a[i]))                       //�ж��Ƿ���Ӣ����ĸ
		{
			k = a[i];                          
			sum = sum + m[k - 'A'];            //k-65
		}
		else
		{
			j = a[i] - '0';
		
			while (isdigit(a[i + 1]))                      //�ж���һλ�Ƿ���10��������
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