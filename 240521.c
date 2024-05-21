#include <stdio.h>
#include <string.h>

void Change_Element(char* srcArr, int index, char c)
{
    srcArr[index] = c;
}

void Print_String(char* pSrcArr, int numElements)
{
    for (int i = 0; i < numElements; ++i)
    {
        printf("%c", pSrcArr[i]); // char 한개 출력
    }
    printf("\n");
}

void Print_Int(int* arr, int numElements);

int main(int argc, char const *argv[])
{
#pragma region 문자열 기본
    // 문자열
    // 문자열은 char 배열
    // char arr0[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}; // \0 : null 문자, 문자열의 끝 표시하는 기능
    // char arr1[] = "Hello World";

    // printf 출력 방법
    // printf("%c\n", arr0[0]); // char 한개 출력
    // printf("%s\n", arr0); // 문자열 출력

    // for (int i = 0; i < sizeof(arr1)/sizeof(char); ++i) //    배열전체크기 / 배열 하나 단위 크기?
    // {
    //     printf("%c", arr1[i]); // char 한개 출력
    // }

    // 함수, 포인터 활용
    // Print_String(arr1, sizeof(arr1)/sizeof(char));
    // Change_Element(arr1, 0, 'K');
    // Print_String(arr1, sizeof(arr1)/sizeof(char));
#pragma endregion 문자열 기본

#pragma region 상수와 포인터
    int a = 10;
    // const int* p = &a; // 상수를 가리키는 포인터
    // *p = 10; // 오류 : 가리키는 것을 상수라고 선언했기 때문에 역참조 통한 갑 변경 불가능

    // int* const p = &a; // 상수 포인터
    // int b = 10;
    // p = &b; // 오류 : 포인터 자체가 상수이기 때문에 다른 값 가리키지 못함
#pragma endregion 상수와 포인터

#pragma region 문자열 전용 함수
    //char arr[] = "Hello World";

    // 문자 개수
    // printf("%d\n", strlen(arr)); // strlen : 문자열의 null문자를 제외한 문자 개수 반환

    // 문자열 복사
    // 문자 배열의 내용을 다른 문자열로 바꾸고 싶을 때
    // arr = "Hello"; // 오류: 문자열 변수는 상수 포인터이기 때문에 다른 문자열을 못 가리킴
    // strcpy(arr, "World Hello"); // strcpy(StringCopy) : 두 번째 인자를 첫 번째 인자로 붙여넣기, Src to Dst
    // Print_String(arr, sizeof(arr)/sizeof(char));

    // 문자열 비교
    // printf("%d\n", strcmp(arr, "World Hello")); // strcmp(StringCompare) : 같으면 0, 사전순으로 작으면(앞서면) -1, 크면 1 반환
    // printf("%d\n", strcmp(arr, "Hello World")); // 0

    // 문자열 합치기
    // strcat(arr, "!!!"); // strcat(StringConcatenation): 첫번째 인자 뒤에 두번째 인자를 붙임
    // printf("%s\n", arr);
#pragma endregion 문자열 전용 함수

#pragma region 메모리 함수
    // int arr[] = {1,2,3,4,5};
    
    // memset(arr, 0, sizeof(arr)); // memset(MemorySet): 첫번째 인자 포인터부터 두번째 인자로 쭉 채우겠다. 세번째 인자 사이즈만큼
    // Print_Int(arr, sizeof(arr)/sizeof(int));

    // int arr2[] = {6,7,8,9,10};
    // memcpy(arr, arr2, sizeof(arr)); // memcpy(MemoryCopy): strcpy처럼 src를 dst에 붙여넣기, 지정한 사이즈만큼
    // Print_Int(arr, sizeof(arr)/sizeof(int));

    // printf("%d\n", memcmp (arr, arr2, sizeof(arr))); //memcmp(MemoryCompare) 같으면 0
#pragma endregion 메모리 함수

#pragma region 구조체 기본
    // 사용자 정의 타입
    // 사용자가 C언어의 기본 타입을 가지고 새롭게 정의할 수 있는 구조화된 데이터
    // 구조체 정의
    // struct Student0 // typedef 없이 -> 사용할 때마다 struct 표기해야
    // { 
    //     int id; // 멤버 변수
    //     char grade;
    //     char* name;
    // };
    // // 구조체 정의
    // typedef struct Student1 // typedef로
    // { 
    //     int id;
    //     char grade;
    //     char* name;
    // }STUDENT1; // 사용할 때 별도의 struct표기 없이 STUDENT1 s; 처럼 사용 가능
    // struct Student0 you;
    // STUDENT1 me = {2018, 'F', "NoName"}; // STUDENT1 이 타입

    // printf("ID: %d\n", me.id);
    // printf("Grade: %c\n", me.grade);
    // printf("Name: %s\n", me.name);
    
    // me.id = 2024; // 구조체의 멤버 변수에 접근할 때는 . 사용
    // me.grade = 'A';
    // me.name = "Jaram";

    // printf("ID: %d\n", me.id);
    // printf("Grade: %c\n", me.grade);
    // printf("Name: %s\n", me.name);

    // STUDENT1* p = NULL; // 구조체도 다른 타입들과 마찬가지로 포인터 사용 가능
    // p = &me;
    // p->id = 2025; // 포인터를 통해 구조체의 멤버변수에 접근할 때는 -> 사용
    // p->grade = 'B';
    // p->name = "NewName";

    // printf("ID: %d\n", me.id);
    // printf("Grade: %c\n", me.grade);
    // printf("Name: %s\n", me.name);
#pragma endregion 구조체 기본

#pragma region 구조체 정렬과 패딩
// typedef struct Student
// {
//     char c0; // 1 바이트
//     char c1; // 1 바이트
//     int i; // 4 바이트
// }STUDENT;
// // 구조체의 멤버 변수 중 가장 큰 타입의 크기 단위로 블록을 형성
// // 한 블록 안에 빈 공간이 생기면 새 블록이 시작되기 전까지 비워둠 (padding)
// // |char(0)|char(0)|    padding(2)    |               int(4)                |
// // 구조체의 크기 총 8바이트
// typedef struct Student2
// {
//     char c0; // 1 바이트
//     int i; // 4 바이트
//     char c1; // 1 바이트
// }STUDENT2;
// // |char(0)|        padding(3)        |               int(4)                |char(0)|        padding(3)        |
// // 총 12 바이트, 비효율적인 선언
#pragma endregion 구조체 정렬과 패딩

    return 0;
}

void Print_Int(int *arr, int numElements)
{
    for (int i = 0; i < numElements; ++i)
    {
        printf("%d", arr[i]); // char 한개 출력
    }
    printf("\n");
}
