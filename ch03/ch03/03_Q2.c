/*
���α׷� :�˻��ϴ� key�� ��ġ�ϴ� ��� ����� �ε��� 
*/
#include <stdio.h>
#include <stdlib.h>
//�˻��ϴ� key�� ��ġ�ϴ� ����� �ε����� idx[]�� �����ϰ�, ���� ��ȯ
int search_idx(const int a[], int n, int key, int idx[])
{
	int i;	
	int count = 0;
	for (int i = 0; i < n; i++) {	
		if (a[i] == key)
			idx[count++] = i;
	}return count;	//���� count==0�̸� Ž������!
}
int main(void)
{
	int i, nx, sn, count;
	int* idx;
	int* x;
	puts("���� �˻�");
	printf("��� ���� : ");
	scanf_s("%d", &nx);

	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));

	if (x == NULL || idx == NULL)		//�������� üũ
		exit(1);

	for (i = 0; i < nx; i++) {
		printf("x[%d] = ", i);
		scanf_s("%d", &x[i]);	
	}
	printf("�˻��� : ");
	scanf_s("%d", &sn);

	count = search_idx(x, nx, sn, idx);
	if (count == 0)
		puts("��ġ�ϴ� ��Ұ� �������� �ʽ��ϴ�.");
	else {
		printf("��ġ�� ����� ������ %d�� �Դϴ�.\n", count);
	}
	free(x);	//�迭 ����
	free(idx);


	return 0;
}