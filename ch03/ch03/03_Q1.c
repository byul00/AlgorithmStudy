///*
// ���α׷� : ���� �˻��� ��ĳ�� ���� ���� ǥ���ϴ� ���α׷�. ���� �˻��ϴ� ��� ���� * ��ȣ ǥ��
//*/
//#include <stdio.h>
//#include <stdlib.h>
// //���� �˻�
//int search(int a[], int n, int key)
//{
//	int i;
//	printf("   |");
//	for (i = 0; i < n; i++)
//		printf("%3d", i);
//	printf("\n---+");
//	for (i = 0; i < n; i++)
//		printf("---");
//	printf("-\n");
//
//	for (i = 0; i < n; i++) {
//		int j;
//		printf("   |");
//		printf("%*s", 3 * (i - 1) + 5, "");	//%*s : 3*(i-1)+5ĭ ���� 
//		printf("*\n");
//		printf("%3d|", i);
//		for (j = 0; j < n; j++)
//			printf("%3d", a[j]);
//		putchar('\n');
//
//		if (a[i] == key)
//			return i; /* �˻� ���� */
//
//		printf("   |\n");
//	}
//	return -1;	//�˻� ����
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;
//	int* x;
//	puts("���� �˻�");
//	printf("��� ���� : ");
//	scanf_s("%d", &nx);
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)
//		exit(1);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	printf("�˻��� : ");
//	scanf_s("%d", &sn);
//
//	idx = search(x, nx, sn);
//	if (idx == -1)
//		puts("�˻� ����!");
//	else
//		printf("%d�� x[%d]�� �����մϴ�.\n", sn, idx);
//	free(x);
//
//	
//	return 0;
//}