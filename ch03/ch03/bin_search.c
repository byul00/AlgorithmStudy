///*
//���α׷� : ���� �˻� (�� Ƚ�� ��հ� : log n)
//	-����� ����(sort)�Ǿ� ������ ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
//int bin_search(const int a[], int n, int key)
//{
//	int pl = 0;
//	int pr = n - 1;
//	int pc;
//
//	do {
//		pc = (pl + pr) / 2;
//		if (a[pc] == key)	//�˻� ����!
//			return pc;
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);
//	return -1;	//�˻� ����!
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;		
//	int* x;
//
//	puts("���� �˻�");
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)		//�������� üũ
//		exit(1);
//
//	printf("������������ �Է��ϼ���\n");
//	printf("x[0] : ");
//	scanf_s("%d", &x[0]);
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf_s("%d", &x[i]);
//		} while (x[i] < x[i - 1]);	//���������� �ǵ���
//	}
//
//	printf("�˻��� : ");
//	scanf_s("%d", &sn);
//
//	idx = bin_search(x, nx, sn);
//	if (idx == -1)
//		puts("�˻� ����!");
//	else
//		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", sn, idx);
//	free(x);
//
//	return 0;
//}