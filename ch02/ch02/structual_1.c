///*
//���α׷� : ����ü�� �̿��Ͽ� ��ü�˻� ������ ���
//*/
//#include <stdio.h>
//#define VMAX 21 //�÷��� �ִ� 2.1*10
//
////��ü�˻� ��������
//typedef struct {
//	char name[20];
//	int height;
//	double vision;
//}PhysCheck;
//
////Ű�� ��հ� ���ϴ� �Լ�
//double avg_height(const PhysCheck dat[], int n)
//{
//	int i;
//	double sum = 0;
//	for (i = 0; i < n; i++) {
//		sum += dat[i].height;
//	}return sum / n;
//}
//
////�÷� ������ ���ϴ� �Լ�
//void dist_vision(const PhysCheck dat[], int n, int dist[])
//{
//	int i;
//	for (i = 0; i < VMAX; i++)
//		dist[i] = 0;	//�÷� ���� �����ϴ� �迭
//	for (i = 0; i < n; i++) {
//		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
//			dist[(int)(dat[i].vision * 10)]++;
//	}
//}
//int main(void)
//{
//	int i;
//	PhysCheck x[] = {
//		{"������", 162,0.3},
//		{"������", 173,0.7},
//		{"������", 175,2.0},
//		{"ȫ����", 171,1.5},
//		{"�̼���", 168,0.4},
//		{"�迵��", 174,1.2},
//		{"�ڿ��", 169,0.8},
//	};
//	int nx = sizeof(x) / sizeof(x[0]);	//��� ��
//	int vdist[VMAX];	//�÷� ����
//	puts("<<<��ü�˻� ǥ>>>");
//	puts("�̸�		Ű  �÷�	");
//	puts("--------------------------");
//	for (i = 0; i < nx; i++) {
//		printf("%-15.18s%3d%6.1f\n", x[i].name, x[i].height, x[i].vision);
//	}
//	printf("��� Ű : %5.1f\n", avg_height(x, nx));
//	dist_vision(x, nx, vdist);
//	printf("�÷� ����\n");
//	for (i = 0; i < VMAX; i++) {
//		printf("%3.1f ~ : ", i/10.0);
//		for (int j = 0; j < vdist[i]; j++)
//			putchar('*');	//��� �� ��ŭ * ���
//		putchar('\n');
//	}
//
//	return 0;
//}