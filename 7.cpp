#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//값에 의한 호출함수부분
void modify(int value) {
	value = 99;
}
//참조에 의한 호출함수부분
void modif(int* ptr) {
	*ptr = 99;
}
//거듭제곱 연산함수부분
void ipower(int nn, int kk) {
	int res = 1;
	while (true) {
		printf("%d\n", res);
		res *= nn;
		kk--;
		if (kk == -1) {
			break;
		}
	}
}
int main(void) {
	//주소
	int i = 10;
	char ch = 69;
	float f = 12.3;
	printf("i의 주소 : %u\n", &i);
	printf("ch의 주소 : %u\n", &ch);
	printf("f의 주소 : %u\n", &f);
	//포인터
	int j = 10;
	int* p;
	p = &j;
	printf("%d\n", &j);
	printf("%d\n", j);
	printf("%d\n", p);
	printf("%d\n", *p);
	//증가연산
	char* pc;
	int* pi;
	double* pd;
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf("증가 전 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	pc++;
	pi++;
	pd++;
	printf("증가 후 pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	//값에 의한 호출
	int number_one = 1;
	modify(number_one);
	printf("number : %d\n", number_one);
	//참조에 의한 호출
	int number_two = 1;
	modif(&number_two);
	printf("number : %d\n", number_two);
	//포인터의 배열 활용
	int aar[] = { 10, 20, 30, 40, 50 };
	printf("배열의 이름 : %u\n", aar);
	printf("첫번째 원소주소 : %u\n", &aar[0]);
	//예제(1)
	ipower(3, 5);

	return 0;
}