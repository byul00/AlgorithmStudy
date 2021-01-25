///*
//프로그램 : 이진 검색 (비교 횟수 평균값 : log n)
//	-대상이 정렬(sort)되어 있음을 가정
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
////요소의 개수가 n인 배열 a에서 key와 일치하는 요소를 이진 검색
//int bin_search(const int a[], int n, int key)
//{
//	int pl = 0;
//	int pr = n - 1;
//	int pc;
//
//	do {
//		pc = (pl + pr) / 2;
//		if (a[pc] == key)	//검색 성공!
//			return pc;
//		else if (a[pc] < key)
//			pl = pc + 1;
//		else
//			pr = pc - 1;
//	} while (pl <= pr);
//	return -1;	//검색 실패!
//}
//
//int main(void)
//{
//	int i, nx, sn, idx;		
//	int* x;
//
//	puts("이진 검색");
//	printf("요소 개수 : ");
//	scanf_s("%d", &nx);
//
//	x = calloc(nx, sizeof(int));
//	if (x == NULL)		//널포인터 체크
//		exit(1);
//
//	printf("오른차순으로 입력하세요\n");
//	printf("x[0] : ");
//	scanf_s("%d", &x[0]);
//	for (i = 1; i < nx; i++) {
//		do {
//			printf("x[%d] : ", i);
//			scanf_s("%d", &x[i]);
//		} while (x[i] < x[i - 1]);	//오름차순이 되도록
//	}
//
//	printf("검색값 : ");
//	scanf_s("%d", &sn);
//
//	idx = bin_search(x, nx, sn);
//	if (idx == -1)
//		puts("검색 실패!");
//	else
//		printf("%d는(은) x[%d]에 있습니다.\n", sn, idx);
//	free(x);
//
//	return 0;
//}