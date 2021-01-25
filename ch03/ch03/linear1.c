///*
//선형 검색
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 선형 검색
//int search(const int a[], int n, int key)
//{
//	int i = 0;
//	while (1) {
//		if (i == n)
//			return  -1; //검색 실패
//		if (a[i] == key)
//			return i;	//검색 성공
//		i++;
//	}
//}
////2번째 버전(for문 이용)
//int search2(const int a[], int n, int key)
//{
//	int i;
//	for (i = 0; i < n; i++) {
//		if (a[i] == key)
//			return i;	//검색 성공
//	}return -1;//검색 실패
//}
//int main(void)
//{
//	int i, nx, sn, idx;
//	int *x;
//	puts("선형 검색");
//	printf("요소 개수 : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)		//널포인터 체크
//		exit(1);
//
//	for (i = 0; i < nx; i++) {
//		printf("x[%d] = " , i);
//		scanf_s("%d", &x[i]);	////경고인 이유?? -> 널포인터 체크 해줘야됨
//	}
//	printf("검색값 : ");
//	scanf_s("%d", &sn);
//
//	idx = search2(x, nx, sn);
//	if (idx == -1)
//		puts("검색에 실패했습니다.");
//	else
//		printf("%d은(는) x[%d]에 있습니다.\n", sn, idx);
//	free(x);	//배열 해제
//
//	return 0;
//}