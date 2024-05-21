#include <iostream>

using namespace std;

int main()
{
	// 주석 : 컴파일 단계에서 주석에 해당하는 코드라인은 번역하지 않고 무시

	/* 
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;	
	*/

#pragma region 상수
	// 상수 : 고정 불변의 수
#pragma endregion 상수

#pragma region 변수 설명
	/*변수 : 프로그램의 흐름에 따라 본래 가지고 있는 값이 변하게 되는 숫자 체계
	
	정수형 변수 : short, int, long, long long
	실수형 변수 : float, double, (long double)

	문자   변수 : char
	논리형 변수 : bool , c++에만 존재
	*/

	// 같은 이름의 변수 -> 한 지역에는 불가능

	// int		Data;	// int형 변수를 선언하다
	// int		Data = 10;  // int형 변수를 선언과 동시에 초기화하다.

	// cout << Data << endl;

	// Data = 20;
	
	// cout << Data << endl;

	{
		// int	Data = 20;
		// // int Data = 30;
		// int x = 1;
		// cout << Data << endl;
	}


#pragma endregion 변수 설명

#pragma region 정수 자료형의 특성

	// unsigned : 정수 자료형 앞에 붙이는 키워드로 0부터 최대 범위까지 양수 값만 표현하고자 할 때 삽입
	unsigned short	Dest = 65535;		// 0 ~ 65536개 (-32768 ~ 32767)

#pragma endregion 정수 자료형의 특성

#pragma region 실수 자료형

	// float 4byte, double 8byte, (long double)

	// float		Aver = 10.17f;

	// cout << Aver << endl;

#pragma endregion 실수 자료형

#pragma region char자료형
	// char : 아스키 코드 한 글자를 저장하기 위한 자료형, 정확하게는 1바이트 문자 하나를 저장하는 용도
	// char c = 'a';
	char	Test = 65;
	// cout << Test << endl;

	Test = 'B';
	// cout << Test  << endl;
	// cout << short(Test)  << endl;
	
#pragma endregion char자료형

#pragma region 변수 선언 규칙
	// 1. 변수 명은 알파벳과 숫자로 구성할 수 있다. 단, 숫자가 변수 이름으로 먼저 올 수 없다.
	//  - 숫자는 알파벳 한 개 이상 입력 후에 기입할 수 있다.
	
	// 2. 변수 명은 대소문자를 확실히 구분한다.

	// 3. 프로그래밍에서 제공하는 기본 키워드로 이름을 지을 수 없다.
	// (ex) int	float; (안 됨)

	// 4. 변수 명은 공백 또는 특수 문자가 올 수 없다. 단, _는 허용
	
	// 5. 같은 공간 안에서 같은 이름의 변수로 재선언 할 수 없다.
	
#pragma endregion 변수 선언 규칙

//-----------------------------------------------------------------------------------------------	

#pragma region 기본 연산자

	// +, -, *, /, %(나머지 연산자)
	
	// int		iData = 10;
	// int		iTemp = 3;	// 프로그래밍에서는 0 나누기를 수행할 수 없고, 만약 의도치 않게 0나누기를 한 경우, Nan이란 메세지를 확인할 수 있다.

	// cout << (iData / iTemp) << endl;
	// cout << (iData % iTemp) << endl;
	// cout << (iData / aa) << endl;

#pragma endregion 기본 연산자

#pragma region sizeof와 대입 연산자

	// sizeof : 자료형의 크기를 계산해주는 연산자

	// cout << sizeof(char) << endl;
	// cout << sizeof(short) << endl;
	// cout << sizeof(float) << endl;
	// cout << sizeof(double) << endl;
	// cout << sizeof(long double) << endl;

	// char		cTest = '0';
	// char		cSrc = '0';

	// cout << sizeof(cTest + cSrc) << endl;

	// 대입 연산자 
	
	// 1. 오른쪽에서 왼쪽으로 대입을 수행함
	// 2. 좌항과 우항의 자료형이 항상 같아야 함

	// int		iData = 20;

	// int iA = 10, iB = 20, iC = 30;
	// iA = iB = iC = 200;
	// cout << iA << endl;

	// L-Value 와 R-Value

	// L-Value : 연산자를 기준으로 좌항, 우항 모두 위치할 수 있는 데이터 상태
	// R - Value : 연산자를 기준으로 우항에만 위치할 수 있는 데이터 상태

	// int		iData = 20;
	// int		iTemp = iData;

	// cout << iTemp << endl;

#pragma endregion sizeof와 대입 연산자

#pragma region 관계 연산자

 // 관계 연산자 : 두 항의 대소 관계를 비교하여 참 또는 거짓을 반환하는 연산자
 // <, >, <=, >=, ==(같다), !=(같지 않다)


int	iTemp = 10, iSour = 20;

// cout << (iTemp < iSour) << endl;		// 1
// cout << (iTemp > iSour) << endl;		// 0
// cout << (iTemp <= iSour) << endl;		// 1
// cout << (iTemp >= iSour) << endl;		// 0
// cout << (iTemp == iSour) << endl;		// 0
// cout << (iTemp != iSour) << endl;		// 1

#pragma endregion 관계 연산자

#pragma region 논리 연산자

// 논리 연산자 : 조건에 의해서 참 또는 거짓을 도출해내는 연산자
// &&(and 연산자), ||(or 연산자), !(not 연산자)

// and 연산자 : 연산자를 기준으로 좌항의 조건과 우항의 조건 모두 참인 경우에 참을 반환

// cout << (false && false) << endl; // 0
// cout << (true && false) << endl;  // 0
// cout << (false && true) << endl; // 0
// cout << (true && true) << endl; // 1

// or 연산자 : 연산자를 기준으로 좌항의 조건과 우항의 조건 중 하나라도 참인 경우에 참을 반환


//  cout << (false || false) << endl;
//  cout << (true || false) << endl;
//  cout << (false || true) << endl;
//  cout << (true || true) << endl;


// not 연산자 : 참을 거짓으로 거짓을 참으로 변환시키는 연산자

// bool		bStart = true;
// cout << (!bStart) << endl;

#pragma endregion 논리 연산자

#pragma region 비트 단위 연산자

// 비트 단위 연산자 : 2진수 상태에서 같은 위치에 비트들끼리 연산하는 연산자

// &(and), |(or), ~(not), ^(xor)

// int		iTemp = 10;
// int		iSrc  = 13;

// cout << bitset<비트수>(2진수로 출력할 대상) << endl;
// cout << bitset<8>(iTemp) << endl;
// cout << bitset<8>(iSrc) << endl;
/*
cout << "===========&===========" << endl;
cout << bitset<8>(iTemp & iSrc) << endl;
cout << (iTemp & iSrc) << endl;*/

/*
cout << "===========|===========" << endl;
cout << bitset<8>(iTemp | iSrc) << endl;
cout << (iTemp | iSrc) << endl;*/

/*
cout << "===========^===========" << endl;
cout << bitset<8>(iTemp ^ iSrc) << endl;
cout << (iTemp ^ iSrc) << endl;*/

// cout << "===========~===========" << endl;
// cout << bitset<8>(~iTemp) << endl;
// cout << (~iTemp) << endl;


#pragma endregion 비트 단위 연산자



}