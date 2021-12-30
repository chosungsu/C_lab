#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	//배열 선언(1)
	int i;
	int score[5];
	score[0] = 10;
	score[1] = 20;
	score[2] = 30;
	score[3] = 40;
	score[4] = 50;
	for (i = 0; i < 5; i++) {
		printf("score[%d] = %d\n", i, score[i]);
	}
	//배열 선언(2)
	int k;
	char codes[5];
	for (k = 0; k < 5; k++) {
		codes[k] = 'a' + k;
		printf("%c ", codes[k]);
	}
	printf("\n");
	//출석부 예제
	int att_book[16] = { 0 };
	int q;
	int cnt = 0;
	for (q = 0; q < 16; q++) {
		printf("%d번째 강의에 출석하셨나요(y:1, n:0) : ", q + 1);
		scanf("%d", &att_book[q]);
	}
	for (q = 0; q < 16; q++) {
		if (att_book[q] == 0) {
			cnt++;
		}
	}
	double ratio = cnt / 16.0;
	if (ratio > 0.3) {
		printf("수업 일수 부족! 결석 퍼센트 : %f%%\n", ratio * 100.0);
	}
	else {
		printf("수업 일수 충족! 출석 퍼센트 : %f%%\n", ratio * 100.0);
	}
	//문자 탐색 예제
	int key, l;
	int list[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	printf("탐색 값 입력 : ");
	scanf("%d", &key);
	for (l = 0; l < 10; l++) {
		if (list[l] == key) {
			printf("인덱스 : %d\n", l);
			break;
		}
	}
	//정렬
	int e, r;
	int olist[5] = { 16, 7, 9, 1, 3 };
	for (e = 0; e < 5; e++) {
		for (r = 0; r < 4; r++) {
			if (olist[r] > olist[r + 1]) {
				int tmmp = olist[r];
				olist[r] = olist[r + 1];
				olist[r + 1] = tmmp;
			}
		}
	}
	for (r = 0; r < 5; r++) {
		printf("%d ", olist[r]);
	}
	//예제(1)
	printf("\n");
	int cnt_num_show;
	int aalist[5];
	for (int aa = 0; aa < 5; aa++) {
		printf("정수를 입력하시오 : ");
		scanf(" %d", &cnt_num_show);
		aalist[aa] = cnt_num_show;
	}
	for (int ee = 0; ee < 5; ee++) {
		for (int rr = 0; rr < 4; rr++) {
			if (aalist[rr] > aalist[rr + 1]) {
				int tp = aalist[rr];
				aalist[rr] = aalist[rr + 1];
				aalist[rr + 1] = tp;
			}
		}
	}
	printf("최대값 = %d 최소값 = %d\n", aalist[4], aalist[0]);
	//예제(2)
	int cnt_seat_num, sele;
	int seatlist[10] = { 0 };
	char opp;
	while (true) {
		printf("좌석을 예약하시겠습니까?(y 또는 n) : ");
		scanf(" %c", &opp);
		if (opp == 'n') {
			break;
		}
		else if (opp == 'y') {
			printf("--------------------------------\n");
			for (int qw = 1; qw <= 10; qw++) {
				printf(" %d ", qw);
			}
			printf("\n--------------------------------\n");
			for (int qe = 0; qe < 10; qe++) {
				printf(" %d ", seatlist[qe]);
			}
			printf("\n몇번째 좌석을 예약하시겠습니까 : ");
			scanf(" %d", &sele);
			if (seatlist[sele - 1] == 1) {
				printf("예약 불가!좌석 이미 찼음.\n");
			}
			else {
				printf("예약되었습니다.\n");
				seatlist[sele - 1] = 1;
			}
		}
		else {
			printf("잘못 입력하심!\n");
		}
		
	}
	
	
	return 0;
}