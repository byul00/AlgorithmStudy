///*
//프로그램 : 선형 검색(보초법)
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////요소의 개수가 n인 배열a에서 key와 일치하는 요소를 선형검색(보초법)
//int search(int a[], int n, int key)
//{
//	int i=0;
//	a[n] = key;	//보초를 추가
//	while (1) {
//		if (a[i] == key)
//			break;
//		i++;
//	}return i == n ? -1 : i;	//보초일 경우 -1리턴
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;
//	int* x;
//	puts("선형 검색(보초법)");
//	printf("요소 개수 : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx+1, sizeof(int));	//크기가 n+1인 int형 배열 생성
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] : ", i);
//		scanf_s("%d", &x[i]);
//	}
//	printf("검색값 : ");
//	scanf_s("%d", &sn);
//	x[nx] = sn;	//보초
//
//	idx = search(x, nx, sn);
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d는 x[%d]에 있습니다.\n", sn,idx);
//	free(x);
//
//
//	return 0;
//}