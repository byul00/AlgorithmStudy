///*
//���α׷� : ���� �˻�(���ʹ�)
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////����� ������ n�� �迭a���� key�� ��ġ�ϴ� ��Ҹ� �����˻�(���ʹ�)
//int search(int a[], int n, int key)
//{
//	int i=0;
//	a[n] = key;	//���ʸ� �߰�
//	while (1) {
//		if (a[i] == key)
//			break;
//		i++;
//	}return i == n ? -1 : i;	//������ ��� -1����
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;
//	int* x;
//	puts("���� �˻�(���ʹ�)");
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx+1, sizeof(int));	//ũ�Ⱑ n+1�� int�� �迭 ����
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	printf("�˻��� : ");
//	scanf_s("%d", &sn);
//	x[nx] = sn;	//����
//
//	idx = search(x, nx, sn);
//	if (idx == -1)
//		puts("�˻��� �����߽��ϴ�.");
//	else
//		printf("%d�� x[%d]�� �ֽ��ϴ�.\n", sn,idx);
//	free(x);
//
//
//	return 0;
//}