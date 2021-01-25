/* Int형 큐 IntQueue(헤더) */
#ifndef ___IntQueue
#define ___IntQueue
/* ---큐를 구현하는 구조체---*/
typedef struct {
	int max;	//큐의 최대 용량
	int num;	//현재 요소 개수
	int front;	
	int rear;
	int* que;	//큐의 맨 앞 요소에 대한 포인터
}IntQueue;

//큐 초기화
int Initialize(IntQueue* q, int max);

int IsFull(const IntQueue* q);

int Search(const IntQueue* q, int x);

//큐에 데이터를 인큐
int Enque(IntQueue* q, int x);

//큐에 데이터를 디큐
int Deque(IntQueue* q, int* x);

//큐에서 데이터를 피크
int Peek(const IntQueue* q, int* x);

//모든 데이터 삭제
void Clear(IntQueue* q);

//큐의 최대 용량
int Capacity(const IntQueue* q);

//큐에 저장된 데이터 개수
int Size(IntQueue* q);

int IsEmpty(const IntQueue* q);

void Print(const IntQueue* q);

void Terminate(IntQueue* q);

#endif