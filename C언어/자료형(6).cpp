#include <stdio.h>

int main() {
	//char a;

	//scanf("%c", &a);
	//printf("당신이 입력한 숫자는 %c입니다.\n", a);

	/*
	scanf의 %c라는 형태로 입력을 받는다.
	즉, 문자를 입력을 받는다.
	R을 입력하면 %c가 R을 입력 받는다. 그러면 &a에 대입이 된다.
	그러면 R에 해당하는 아스키값 82가 a에 저장이 된다.
	그러면 printf에서 %c니까 82가 다시 문자로 변환되어 R이라는 결괏값이 나온다.
    */

	//printf("문자입력 : ");
	//scanf("%c\n", &a);
	//printf("%c의 ASCII 값 : %d\n", a, a);

	int b;

	printf("숫자입력 : ");
	scanf("%d\n", &b);
	printf("%d의 ASCII 값 : %c\n", b, b);
	
}  