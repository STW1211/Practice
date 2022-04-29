// 두 수의 순서를 뒤바꾸는 swapping 기능 구현

/* 동양미래대학교 컴퓨터공학부
   "C애플리케이션구현" 과목
	2022학년 1학기 9주차 실습과제 제출결과

	작성자 : PB반 "노승준" (학번 : 20202701)
	- (주의) 여기서 "작성자 이름"과 "학번"은 실습과제 작성(제출)자 본인의 이름과 학번을 적을 것

   (실습과제 문제) 교재 477 페이지의 Lab 11-2의 내용을 아래와 같이 swap( ) 함수로 구현할 수 있도록,
   아래의 소스코드의 swap( ) 함수의 내용을 작성하시오.

	작성 및 제출기한 : 2022년 5월 2일(월) 23시 25분 59초 전까지
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void swap(int*, int*);

int main(void)
{
	int x, y;
	
	printf("임의의 두 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	int* px = &x;
	int* py = &y;

	printf("\nswap 함수를 호출하기 이전의\n", x, y);
	printf("첫번째 입력 정수 = %d, 두번째 입력 정수 = %d\n", x, y);

	swap(&x, &y);

	printf("\nswap 함수를 호출한 이후의\n", x, y);
	printf("첫번째 입력 정수 = %d, 두번째 입력 정수 = %d\n\n", x, y);

	return 0;
}


// 아래에 swap 함수의 내용을 작성할 것
// swap 함수의 매개변수는 2개를 이용하고,
// 첫번째 매개변수의 이름은 px로, 두번째 매개변수의 이름은 py라고 할 것.
void swap(int *px, int *py)
{
	int dummy;
	int* pd = &dummy;
	*pd = *px;
	*px = *py;
	*py = *pd;

}