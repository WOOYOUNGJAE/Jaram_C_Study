#include <iostream>
#include <bitset>

using namespace std;

int main(void)
{
#pragma region Swap
    // int a = 10;
    // int b = 20;
	// int temp = 0;

	// temp = a; // temp == 10
	// a = b; // temp == 10, a == 20, b == 20
	// b = temp; // a == 20; b == 10; 


    // // a 에는 20이, b에는 10이 되도록 맞바꾸기
    // // a = 20; b = 10; X

    // cout << "a: " << a << " b:  " << b << endl;
#pragma endregion Swap
	//int		iData = 10;

	//cout << bitset<8>(iData) << endl;
	//cout << bitset<8>(~iData) << endl;

	//cout << (~iData) << endl;
		
	//cout << (~1) << endl;	    // 1의 보수
	//cout << (~1) + 1 << endl; // 2의 보수

#pragma region 비트 단위 쉬프트 연산자

	// <<(왼쪽 쉬프트 연산자), >>(오른쪽 쉬프트 연산자) : 입력 값만큼 전체 비트를 이동시키는 연산자

	// int		iData = 10;
	// cout << "bitset : " << bitset<8>(iData) << " | Decimal: " << iData <<  endl;
	
    // iData = (iData << 1);
	// cout << "bitset : " << bitset<8>(iData) << " | Decimal: " << iData <<  endl;

	// int	iTemp = 13;

	// // cout << (iTemp / 2) << endl;
	// // cout << (iTemp * 0.5f) << endl;
	// cout << "bitset : " << bitset<8>(iTemp) << " | Decimal: " << iTemp <<  endl;
	// cout << (iTemp >> 1) << endl;
	
#pragma endregion 비트 단위 쉬프트 연산자

#pragma region 형 변환

	// 명시적 형 변환
	// int		iTest = (int)3.14f;
	// cout << iTest << endl;

	// // 묵시적 형 변환
	// int	iTemp = 13;
	// cout << iTemp * 0.5f << endl;
#pragma endregion 형 변환

#pragma region 축약 연산자

	// +=, -=, *=, /=, %=, <<=, >>=


	// int		iTemp = 100;
	// int		iNum = 10;

	// // iTemp = iTemp - iNum;

	// iTemp -= iNum;
	// cout << iTemp << endl;

#pragma endregion 축약 연산자

#pragma region 증감 연산자

	// ++, --

	// int	iData = 10;

	// ++iData;	// 전위 연산 : 선 연산, 후 대입
	// iData++;	// 후위 연산 : 선 대입 후 연산

	// cout << iData++ << endl;
#pragma endregion 증감 연산자


//-------------------------------------------------------

	// 분기문

	// if, switch, goto

// 	goto		Home;

// 	cout << 1 << endl;

// Home:

// 	cout << 2 << endl;


#pragma region if문

	// int	iA = 10, iB = 20;

	// if (iA++)
	// {
	// 	cout << "Hello" << endl;
	// }
	// else
	// {
	// 	cout << "world" << endl;
	// }

	// if (iA > iB)
	// {
	// 	cout << "hello" << endl;
	// } 
    // else if (iA == iB)
	// {
	// 	cout << "happy" << endl;
	// }
    // else
	// {
	// 	cout << "world" << endl;
	// }

	// cout << iA << endl;

#pragma endregion if문

#pragma region 입력

	// int		iData = 0, iTest = 0;

	// cout << "enter : ";
	// cin >> iData >> iTest;

	// cout << iData << '\t' << iTest << endl;

#pragma endregion 입력

#pragma region if과 연산자
	// int		iA = 200, iB = 220, iC = 30;

	// if ((iA = 300) && (iA < iB))
	// {
	// 	cout << iA << endl;
	// 	cout << "Hello" << endl;
	// }	
	// else
	// {
	// 	cout << iA << endl;
	// 	cout << "World" << endl;
	// }

	// if ( (iA < iB) || (iA = 200))
	// 	cout << iA << endl;
#pragma endregion if과 연산자
	
#pragma region switch

	// int	iOne = 1;

	// // switch : 상수 값으로 분기하며, 상수 조건 분기문이라고도 함, 상수, 정수만 취급하며, 실수로 분기할 수 없다.

	// int iInput = 4;

	// cout << "Select Button (1. Coke 2. Sprite 3. Fanta : ";
	// cin >> iInput;
	
	// switch (iInput)
	// {	
    //     case 1:
    //         {
    //             cout << "Coke" << endl;
    //             int		iData = 10;
    //             iData = 20;
    //             cout << iData << endl;
    //         }
    //         break;			// 현재 프로그램을 흐름을 중단하는 키워드
        
    //     case 2:
    //     {
    //         cout << "Sprite" << endl;
    //         int		iData = 10;
    //         iData = 30;
    //         cout << iData << endl;
    //     }
    //         break;
    //     case 3:
    //     {
    //         cout << "Fanta" << endl;
    //         int iData = 40;
    //         cout << iData << endl;
    //         break;
    //     }

    //     default:
    //         cout << "Wrong Input" << endl;
	// }
	
#pragma endregion switch

#pragma region 삼항 연산자

	// - (조건식) ? (참일 때 실행하는 코드) : (거짓일 때 실행하는 코드)
	// : 단순한 비교에 의한 값 반환 시 사용할 수 있으나 가독성이 떨어지는 단점을 지니고 있다.

	// int		iNumber1 = 10, iNumber2 = 20;
	// // int		iMax = 0;

	// // iMax = (iNumber1 > iNumber2) ? iNumber1 : iNumber2;

	// int a = 11; int b = 22;
	// (iNumber1 > iNumber2) ? a = 100 : b = 200;

	// cout << "a : " << a << "b : " << b << endl;
	// // cout << iMax << endl;

#pragma endregion 삼항 연산자

#pragma region while
	// 반복문 : while, do while, for


	// while (iCount > 0)
	// {
	// 	cout << 100 << endl;
	// 	iCount--;
	// }

	// int iCount = 3;
	// while (true)
	// {
	// 	// if (0 = iCount)
	// 	if (iCount == 0)
	// 	{
	// 		break;
	// 	}

	// 	cout << 100 << endl;
	// 	--iCount;
	// }



	/*int		i = 1;

	while (10 > i)
	{
		cout << 2 << " * " << i << " = " << 2 * i << endl;
		i++;
	}*/
#pragma endregion while

#pragma region do while

	// int		iSum = 0, iInput = 0;
		
	// do 
	// {
	// 	cout << "숫자를 입력 : ";
	// 	cin >> iInput;

	// 	if(0 != iInput % 2)
	// 		continue;

	// 	iSum += iInput;

	// } while (-1 != iInput);

	// cout << "누계 : " << iSum << endl;


#pragma endregion do while

#pragma region for

	/*for (초기화식	; 조건식; 증감식)
	{
		cout << 1 << endl;
	}*/

	// for (int i = 0; i < 3; i++)
	// {
	// 	int b = 100;
	// }

	// int a = 10;
	// int b = 10;
	// while (true)
	// {
	// 	--a;
	// 	--b;
	// 	if (a == 0)
	// 	{
	// 		break;
	// 	}
	// 	if (b > 5)
	// 	{
	// 		continue;
	// 	}
	// 	--a;
	// 	--b;
	// 	cout << "Hello World" << endl;
	// }
	

	// cout << i << endl;


	// for (int i = 0; i < 2; ++i)
	// {
	// 	cout << 1 << endl;

	// 	for (int j = 0; j < 3; ++j)
	// 	{
	// 		cout << 2 << endl;
	// 	}

	// 	cout << 3 << endl;
	// }
	

#pragma endregion for



    return 0;
}
