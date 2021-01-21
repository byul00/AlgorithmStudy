///*
//프로그램 : 구조체를 이용하여 신체검사 데이터 출력
//*/
//#include <stdio.h>
//#define VMAX 21 //시력의 최댓값 2.1*10
//
////신체검사 데이터형
//typedef struct {
//	char name[20];
//	int height;
//	double vision;
//}PhysCheck;
//
////키의 평균값 구하는 함수
//double avg_height(const PhysCheck dat[], int n)
//{
//	int i;
//	double sum = 0;
//	for (i = 0; i < n; i++) {
//		sum += dat[i].height;
//	}return sum / n;
//}
//
////시력 분포를 구하는 함수
//void dist_vision(const PhysCheck dat[], int n, int dist[])
//{
//	int i;
//	for (i = 0; i < VMAX; i++)
//		dist[i] = 0;	//시력 분포 저장하는 배열
//	for (i = 0; i < n; i++) {
//		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
//			dist[(int)(dat[i].vision * 10)]++;
//	}
//}
//int main(void)
//{
//	int i;
//	PhysCheck x[] = {
//		{"박현규", 162,0.3},
//		{"함진아", 173,0.7},
//		{"최윤미", 175,2.0},
//		{"홍연의", 171,1.5},
//		{"이수진", 168,0.4},
//		{"김영준", 174,1.2},
//		{"박용규", 169,0.8},
//	};
//	int nx = sizeof(x) / sizeof(x[0]);	//사람 수
//	int vdist[VMAX];	//시력 분포
//	puts("<<<신체검사 표>>>");
//	puts("이름		키  시력	");
//	puts("--------------------------");
//	for (i = 0; i < nx; i++) {
//		printf("%-15.18s%3d%6.1f\n", x[i].name, x[i].height, x[i].vision);
//	}
//	printf("평균 키 : %5.1f\n", avg_height(x, nx));
//	dist_vision(x, nx, vdist);
//	printf("시력 분포\n");
//	for (i = 0; i < VMAX; i++) {
//		printf("%3.1f ~ : ", i/10.0);
//		for (int j = 0; j < vdist[i]; j++)
//			putchar('*');	//사람 수 만큼 * 출력
//		putchar('\n');
//	}
//
//	return 0;
//}