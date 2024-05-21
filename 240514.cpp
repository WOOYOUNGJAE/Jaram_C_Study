#include <iostream>

using namespace std;

void myswap(int* p0, int* p1)
{
	int tmp = *p0;
	*p0 = *p1;
	*p1 = tmp;
}
void swap2(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int arrSize(int* arr)
{
	return sizeof(arr);
}
int main(void)
{
#pragma region 포인터 기본
	// 포인터 : 주소값을 저장하기 위한 용도의 변수
	// 포인터도 자료형임
	// int	num = 10;

	// // 세 가지 표현법 모두 가능
	// int* p = NULL; // NULL: 주소값 0. C 스타일,  
	// // int *p = nullptr; // nullptr : c++ 스타일의 NULL
	// // int * p = 0; // 0으로 할당 가능하지만 C에서는 NULL, c++에서는 nullptr 권장

	// // cout << (&num) << endl; // &연산자 : 변수의 주소값 반환

	// p = &num; // int* 타입 변수에 int 변수의 주소값 저장
	
	// // cout << p << endl; // p : int* 타입, 즉 주소값 출력, 16진수로 출력됨
	// // cout << (*p) << endl; // (*포인터) : 역참조 연산자, 포인터가 가리키는 값 반환

	// // *&num = 20; // ((num의 주소값)이 가리키는 값) 을 20으로 할당. 즉 num = 20과 같음
	// *p = 20; // p 가 가리키는 값에 20을 할당하겠다.


	// // cout << num << endl;

	// int* vs float* : 주소값을 저장하는 기능은 같음
	// 역참조 연산 (*p)을 할 때 어떻게 읽을 거냐의 차이
	// 주소값도 캐스팅이 가능
	// float		fAver = 3.14f;
	// int*	p = (int*)&fAver;
	// cout << fAver << endl;
	// cout << *p << endl;

	// int a = 10;
	// printf("%d", a);
	// printf("%p", &a);
	
#pragma endregion 포인터 기본

#pragma region 포인터 자료형 크기
	// 포인터 자료형의 크기 : 어떤 타입의 포인터이든 포인터이기만 하면 4 또는 8로 고정
	// 포인터의 크기가 4인 경우 : 32비트 환경 , 8인 경우 : 64비트 환경
	// cout << sizeof(char*) << endl;
	// cout << sizeof(int*) << endl;
#pragma endregion 포인터 자료형 크기

#pragma region 다중 포인터, 포인터 연산
	// int a = 10; // a: 평범한 int 변수
	// int* p = &a; // p: int 변수 a의 주소값 저장
	// int** pp = &p; // pp : int* 변수 p의 주소값 저장
	// int*** ppp = &pp;

	// // 포인터 연산 : 현재 사용하는 포인터 자료형의 크기를 기준으로 메모리를 이동시키는 연산
	// cout << p << endl;
	// cout << ++p << endl; // 기존 p의 값이 아닌 sizeof(int) 만큼 증가
#pragma endregion 다중 포인터, 포인터 연산

#pragma region swap 함수
	// int a = 1;
	// int b = 2;
	// myswap(&a, &b);
	// // swap2(a, b);
	// cout << "a: " << a << " b : " << b << endl;
#pragma endregion swap 함수 
    
#pragma region 배열
	// 배열 : 같은 자료형의 값을 동시에 여러 개 생성하고자 할 때 사용하는 문법
	// 배열을 선언하는 시점에는 []안의 값이 반드시 상수여야 한다.
	
	// arr :  배열의 이름
	// [] : 배열 연산자, 인덱스 연산자
	// 3 : 배열의 개수(반드시 상수로 선언해야 함)

	// 1. 배열은 연속된 메모리 공간에 할당된다.
	// 블록 단위 데이터
	// int		arr[3] = {  10, 20, 30  };

	// cout << arr[0] << endl;
	// cout << arr[1] << endl;
	// cout << arr[2] << endl;

	int arr[3] = {  10, 20, 30  };
	// 2. 배열의 이름은 배열 전체의 첫 번째 원소의 주소값이다. == 포인터다
	// arr : int*
	cout << *arr << endl; // *arr = arr[0]
	cout << *(arr + 1) << endl; // 주소 연산 // *(arr + 1) = arr[1]
	cout << *(arr + 2) << endl; // 주소 연산


	// cout << sizeof(arr) << endl; // 배열의 메모리 크기 , sizeof(int) * 배열 원소 개수
	// cout << arrSize(arr) << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(int) /*원소의 개수*/; ++i)
		cout << arr[i] << endl;

	
	
#pragma endregion 배열

#pragma region 복잡한 배열

	// // 포인터 배열
	
	// int		iA = 10, iB = 20, iC = 30;
	// /*int*	pA = &iA;
	// int*	pB = &iB;
	// int*	pC = &iC;*/

	// int*	pArray[3] = { &iA, &iB, &iC };

	// // 2차원 배열

	// int	iArray[2][3] = {

	// 	{ 1, 2, 3 },	// 0
	// 	{ 4, 5, 6 }		// 1
	// 	//0  1  2

	// };

	// cout << iArray[1][1] << endl;

#pragma endregion 복잡한 배열
	
	return 0;
}

// int* arrHeap = (int*)malloc(sizeof(int*) * 3);
// arrHeap[0] = 10;
// arrHeap[0] = 20;
// arrHeap[0] = 30;
// cout << sizeof(arrHeap) << endl;
