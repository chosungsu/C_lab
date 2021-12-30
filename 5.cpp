#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//while문(1)
	int i = 0;
	while (i < 10) {
		printf("i = %d ", i);
		i++;
	}
	//while문(2)
	int j = 5;
	long fac = 1;
	while (j >= 1) {
		fac *= j;
		j--;
	}
	printf("\n");
	printf("%d\n", fac);
	//while문(3)
	int n;
	int k = 1;
	printf("구구단 출력 단 : ");
	scanf("%d", &n);
	while (k <= 9) {
		printf("%d * %d = %d\n", n, k, n * k);
		k++;
	}
	//do-while VS while차이
	//do-while은 while 돌기 전에 무조건 한번은 실행됨
	int l = 0;
	while (l > 0) {
		printf("while일 때 : %d\n", l);
		l = l - 3;
	}
	int m = 0;
	do {
		printf("do-while일 때 : %d\n", m);
		m = m - 3;
	} while (m > 0);
	//중첩 반복문(1)
	int q, w;
	for (w = 0; w < 5; w++) {
		for (q = 0; q < 10; q++) {
			printf("*");
		}
		printf("\n");
	}
	//중첩 반복문(2)
	int e, r;
	for (r = 1; r <= 3; r++) {
		for (e = 1; e <= 9; e++) {
			printf("%d X %d = %d\n", r, e, e * r);
		}
	}
	//continue문
	int t;
	for (t = 0; t < 10; t++) {
		if (t % 2 == 0) {
			continue;
		}
		printf("정수 : %d\n", t);
	}
	//break문
	int ans;
	printf("산수 자동 출제...\n");
	while (true) {
		int d = rand() % 100;
		int f = rand() % 100;
		printf("%d + %d = ", d, f);
		scanf("%d", &ans);
		if (d + f == ans) {
			printf("정답\n");
			break;
		}
		else {
			printf("실패\n");
		}
	}
	//예제(1)
	int cnt_count_down = 60;
	while (cnt_count_down != -1) {
		printf("%d ", cnt_count_down);
		cnt_count_down--;
	}
	printf("\n");
	printf("발사\n");
	//예제(2)
	int cnt_plus_num = 0;
	int sum_nums = 0;
	while (true) {
		printf("정수를 입력하시오 : ");
		scanf(" %d", &cnt_plus_num);
		if (cnt_plus_num != 0) {
			sum_nums += cnt_plus_num;
		}
		else {
			break;
		}
	}
	printf("합계 = %d\n", sum_nums);
	//예제(3)
	int cnt_seven = 1;
	while (true) {
		if (cnt_seven != 8) {
			for (int mm = 1; mm <= cnt_seven; mm++) {
				printf("%d", mm);
			}
			for (int nn = 7 - cnt_seven; nn > 0; nn--) {
				printf("*");
			}
			printf("\n");
			++cnt_seven;
		}
		else {
			break;
		}
	}
	//예제(4)
	int cnt_double, result = 0;
	printf("n의 값을 입력하시오 : ");
	scanf(" %d", &cnt_double);
	while (true) {
		for (int ll = 1; ll <= cnt_double; ll++) {
			result += ll * ll;
		}
		printf("계산값은 %d입니다.\n", result);
		break;
	}
	return 0;
}