/*
chap2 배열 연습문제 : 2진수 변환 과정 출력
*/
#include <stdio.h>
//type형 x와 y값을 교환
#define swap(type, x, y) do{type t=x;x=y;y=t;}while(0)

//기수 변환(배열의 맨 앞쪽에 윗자리 저장)함수
int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; //변환후 자리수
	int i, r;
	if (x == 0)
		d[digits++] = dchar[0];
	else {
		while (x) {
			r = x % n;
			printf("%d |\t%d ... %d\n", n, x, r);
			printf("  +----------\n");
			d[digits++] = dchar[r];
			x /= n;
		}
	}
	for (i = 0; i < digits / 2; i++)	//배열의 맨 앞쪽에 윗자리 저장하기
		swap(int, d[i], d[digits - i - 1]);
	return digits;
}

int main(void)
{
	int i;
	unsigned no; //변환하는 정수
	int cd;	//기수
	int dno;	//변환 후 자릿수
	char cno[512];	//변환한 값의 각 자리 숫자를 저장하는 문자배열
	int retry;	//한 번 더?
	puts("10진수를 기수 변환합니다.\n");
	do {
		printf("음이 아닌 정수 : ");
		scanf_s("%u", &no);
		do {
			printf("어떤 진수로 변환할까요? ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd>36);

		dno = card_convr(no, cd, cno);
		printf("%d진수로는", cd);
		for (i = 0; i < dno; i++) {
			printf("%c", cno[i]);
		}
		printf("입니다. \n");

		printf("한번 더 할까요? (1 : 예 / 0 : 아니오)\n");
		scanf_s("%d", &retry);

	} while (retry == 1);


	return 0;
}