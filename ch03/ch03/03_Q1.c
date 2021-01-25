///*
// 프로그램 : 선형 검색의 스캐님 과정 상세히 표현하는 프로그램. 현재 검색하는 요소 위에 * 기호 표시
//*/
//#include <stdio.h>
//#include <stdlib.h>
// //선형 검색
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
//		printf("%*s", 3 * (i - 1) + 5, "");	//%*s : 3*(i-1)+5칸 공백 
//		printf("*\n");
//		printf("%3d|", i);
//		for (j = 0; j < n; j++)
//			printf("%3d", a[j]);
//		putchar('\n');
//
//		if (a[i] == key)
//			return i; /* 검색 성공 */
//
//		printf("   |\n");
//	}
//	return -1;	//검색 실패
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;
//	int* x;
//	puts("선형 검색");
//	printf("요소 개수 : ");
//	scanf_s("%d", &nx);
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)
//		exit(1);
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	printf("검색값 : ");
//	scanf_s("%d", &sn);
//
//	idx = search(x, nx, sn);
//	if (idx == -1)
//		puts("검색 실패!");
//	else
//		printf("%d은 x[%d]에 존재합니다.\n", sn, idx);
//	free(x);
//
//	
//	return 0;
//}