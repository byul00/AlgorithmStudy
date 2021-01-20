/*
chap2 �迭 �������� : 2���� ��ȯ ���� ���
*/
#include <stdio.h>
//type�� x�� y���� ��ȯ
#define swap(type, x, y) do{type t=x;x=y;y=t;}while(0)

//��� ��ȯ(�迭�� �� ���ʿ� ���ڸ� ����)�Լ�
int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0; //��ȯ�� �ڸ���
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
	for (i = 0; i < digits / 2; i++)	//�迭�� �� ���ʿ� ���ڸ� �����ϱ�
		swap(int, d[i], d[digits - i - 1]);
	return digits;
}

int main(void)
{
	int i;
	unsigned no; //��ȯ�ϴ� ����
	int cd;	//���
	int dno;	//��ȯ �� �ڸ���
	char cno[512];	//��ȯ�� ���� �� �ڸ� ���ڸ� �����ϴ� ���ڹ迭
	int retry;	//�� �� ��?
	puts("10������ ��� ��ȯ�մϴ�.\n");
	do {
		printf("���� �ƴ� ���� : ");
		scanf_s("%u", &no);
		do {
			printf("� ������ ��ȯ�ұ��? ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd>36);

		dno = card_convr(no, cd, cno);
		printf("%d�����δ�", cd);
		for (i = 0; i < dno; i++) {
			printf("%c", cno[i]);
		}
		printf("�Դϴ�. \n");

		printf("�ѹ� �� �ұ��? (1 : �� / 0 : �ƴϿ�)\n");
		scanf_s("%d", &retry);

	} while (retry == 1);


	return 0;
}