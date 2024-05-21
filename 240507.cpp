// 함수
#include <iostream>
using namespace std;

#pragma region 함수 형태
// // C에서 함수는 전역에서 선언해야
// // parameter? argument? 매개변수? 인자?
// // parameter == 매개변수 : 함수 정의할 때
// // argument == 인자 : 함수 사용할 때
// void Void_Void(void) // Header
// { // Body
//     cout << "Func: Void_Void" << endl;
// }
// void Void_Int(int argName)
// {
//     cout << "Argument is : " << argName << endl;
// }
// int Int_Void(void)
// {
//     return 10;
// }
// int Int_IntInt(int arg0, int arg1)
// {
//     return arg0 + arg1;
// }

// // def myprint():
// //     print("Hello World")

// // def square(number):
// //     return number ** 2

// // myprint()
// // print(square(4))

#pragma endregion 함수 형태

#pragma region 함수 전방 선언
int Return_Something(); // 전방선언 할때는 세미콜론
#pragma endregion 함수 전방 선언

#pragma region 함수 오버로딩
// 함수는 변수와 마찬가지로 이름이 중복되면 안됨
// parameter의 변형으로 중복 구현 가능
// 그러나 반환 형태(void, int 등)는 같아야 함
void Print_Number(void)
{
    cout << "Print_Number: " << 1 << endl;
}
void Print_Number(int arg)
{
    cout << "Print_Number: " << arg << endl;
}
// int Print_Number(int arg)
// {
//     // Error
//     return -1;
// }
#pragma endregion 함수 오버로딩

#pragma region 메모리
// 스택 메모리 영역: 지역, 혹은 함수가 끝나면 해제됨
// Data 영역: static 변수, 전역 변수 저장. 프로그램 실행 시 생성, 종료 시에 해제
// 그 외 코드 영역, 힙 영역
// int g_data = 0; // 전역 변수
// int Print_Data(int arg/*인자, 스택 메모리에 저장*/)
// {
//     // int data = 0; // 지역 변수, 스택 메모리에 저장
//     // data += 1;
//     // return data;

//     // g_data += 1;
//     // return g_data;
//     static int static_data = 0; // static(정적) 변수
//     static_data += 1;
//     return static_data;
// }

// Print_Data를 여러번 실행하면?
// int Print_GlobalData()
// {
//     g_data += 1;
//     return g_data;
// }
#pragma endregion 메모리

#pragma region 디폴트 인자값
int Foo(int arg = 1)
{
    return arg;
}
#pragma endregion 디폴트 인자값

int main()
{

    // Void_Void();
    // Void_Int(5);
    // cout << Int_Void();
    // cout << Int_IntInt(1, 2);

    // cout << Return_Something(); // 전방 선언
    // 컴파일러는 "이런 함수가 있구나" 하고 넘어감
    // 컴파일 이후 "링커"라는 것이 구현부와 링킹함

#pragma region 배열 인트로
    int a = 1;

    int arrName[4] = {1,2,3,4}; // 배열 선언
    
    
    cout << arrName[3] << endl; // 배열 인덱스 접근, 인덱스는 0부터
#pragma endregion 배열 인트로
    return 0;
}


int Return_Something()
{
    return 11;
}