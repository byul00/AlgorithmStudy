/*
���α׷� : ��¥ ����ü (�̿ϼ�)
*/
#include <stdio.h>
//skfWK rnwhcp
typedef struct {
	int y;
	int m;
	int d;
}Date;

//�� ���� �� ��
int mdays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}
};
//���� �Ǻ�
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 100 || year % 400 == 0;
}
//y�� m�� n���� ��Ÿ���� ����ü�� ��ȯ�ϴ� �Լ�
Date Dateof(int y, int m, int d)
{
	Date date;
	date.y = y;
	date.m = m;
	date.d = d;
	return date;
}

//y�� m�� n���� �� �� ���� �� �� ���ϴ� �Լ�
int dayofyear(int y, int m, int d)
{
	while (--m) {
		d += mdays[isleap(y)][m];
	}
	return d;
}

//��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date After(Date x, int n)
{
	x.d += n;
}
//��¥ x�� n�� ���� ��¥�� ��ȯ�ϴ� �Լ�
Date Before(Date x, int n)
{

}
int main(void)
{


	return 0;
}