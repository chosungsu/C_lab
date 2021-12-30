#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
	//문자열(1)
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0'};
	char str3[] = "the capital city of korea.";
	printf("%s %s %s\n", str1, str2, str3);
	//문자열(2)
	char str4[] = "A barking dog never bites";
	int i = 0;
	while (str4[i] != 0) {
		i++;
	}
	printf("문자열 %s의 길이는 %d입니다.\n", str4, i);
	//문자 입출력(1)
	//getchar() : 입력받고 버퍼사용
	//putchar() : 출력
	//getch() : 입력받고 버퍼X
	//putch() : 출력
	//문자 입출력(2)
	char name[100];
	char address[100];
	printf("이름이 어떻게 되시나요? ");
	gets_s(name, 99);
	printf("어디 사시나요? ");
	gets_s(address, 99);
	printf("안녕하세요. %s에 사는 %s씨.\n", address, name);
	//문자 처리(1) - 길이 구하기
	char lang[] = "abcdefgh";
	int len = strlen(lang);
	printf("문자열 %s의 길이 : %d\n", lang, len);
	//문자 처리(2) - 복사하기
	char src[] = "Hello";
	char dst[6];
	strcpy(dst, src);
	printf("복사된 문자열 : %s\n", dst);
	//문자 처리(3) - 연결하기
	char chstr[11] = "Hello";
	strcat(chstr, "World");
	printf("%s\n", chstr);
	//문자 처리(4) - 비교하기
	char li1[80], li2[80];
	int res;
	printf("첫번째 단어 : ");
	scanf("%s", li1);
	printf("두번째 단어 : ");
	scanf("%s", li2);
	res = strcmp(li1, li2);
	if (res < 0) {
		printf("%s가 %s보다 앞임\n", li1, li2);
	}
	else if (res == 0) {
		printf("%s가 %s와 같음\n", li1, li2);
	}
	else {
		printf("%s가 %s보다 뒤임\n", li1, li2);
	}
	//문자열을 다른 형태로 변환
	int k;
	double b;
	k = atoi("100");
	printf("%d\n", k);
	b = atof("36.5");
	printf("%f\n", b);
	//문자열과 포인터의 차이
	//문자열은 인덱스값을 변경가능하다
	//포인터는 통째로 변경이 가능하다
	//예제(1)
	char key[] = "사과";
	char buf[80];
	do {
		printf("내가 제일 좋아하는 과일은?");
		gets_s(buf, 80);
	} while (strcmp(key, buf) != 0);
	//예제(2)
	int j, l;
	char fruits[6][20] = {
		"pineapple",
		"banana",
		"apple",
		"tomato",
		"pear",
		"avocado"
	};
	for (l = 0; l < 5; l++) {
		for (j = 0; j < 5; j++) {
			if (strcmp(fruits[j], fruits[j + 1]) > 0) {
				char tmp[20];
				strcpy(tmp, fruits[j]);
				strcpy(fruits[j], fruits[j + 1]);
				strcpy(fruits[j + 1], tmp);
			}
		}
	}
	for (l = 0; l < 6; l++) {
		printf("%s\n", fruits[l]);
	}

	return 0;
}