/*
프로그램 : 날짜 구조체 (미완성)
*/
#include <stdio.h>
//skfWK rnwhcp
typedef struct {
	int y;
	int m;
	int d;
}Date;

//각 달의 날 수
int mdays[][12] = {
	{31,28,31,30,31,30,31,31,30,31,30,31},
	{31,29,31,30,31,30,31,31,30,31,30,31}
};
//윤년 판별
int isleap(int year)
{
	return year % 4 == 0 && year % 100 != 100 || year % 400 == 0;
}
//y년 m월 n일을 나타내는 구조체를 반환하는 함수
Date Dateof(int y, int m, int d)
{
	Date date;
	date.y = y;
	date.m = m;
	date.d = d;
	return date;
}

//y년 m월 n일의 그 해 지난 날 수 구하는 함수
int dayofyear(int y, int m, int d)
{
	while (--m) {
		d += mdays[isleap(y)][m];
	}
	return d;
}

//날짜 x의 n일 뒤의 날짜를 반환하는 함수
Date After(Date x, int n)
{
	x.d += n;
}
//날짜 x의 n일 앞의 날짜를 반환하는 함수
Date Before(Date x, int n)
{

}
int main(void)
{


	return 0;
}