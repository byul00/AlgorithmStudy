///*
//���� �˻�
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////����� ������ n�� �迭 a���� key�� ��ġ�ϴ� ��Ҹ� ���� �˻�
//int search(const int a[], int n, int key)
//{
//	int i = 0;
//	while (1) {
//		if (i == n)
//			return  -1; //�˻� ����
//		if (a[i] == key)
//			return i;	//�˻� ����
//		i++;
//	}
//}
////2��° ����(for�� �̿�)
//int search2(const int a[], int n, int key)
//{
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == key)
//			return i;	//�˻� ����
//	}return -1;//�˻� ����
//}
//int main(void)
//{
//	int i, nx, sn, idx;
//	int *x;
//	puts("���� �˻�");
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)		//�������� üũ
//		exit(1);
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] = " , i);
//		scanf_s("%d", &x[i]);	////����� ����?? -> �������� üũ ����ߵ�
//	}
//	printf("�˻��� : ");
//	scanf_s("%d", &sn);
//
//	idx = search2(x, nx, sn);
//	if (idx == -1)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d��(��) x[%d]�� �ֽ��ϴ�.\n", sn, idx);
//	free(x);	//�迭 ����
//
//	return 0;
//}