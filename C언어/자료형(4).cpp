#include <stdio.h>

int main() {
	int a, b; //형이 같으면 같이 선언가능

	scanf("%d%d", &a, &b); //&: 포인터(개념이 매우 어렵다. 많이들 포기 한다.)
	//sacnf("%d%d", a, b); 라고 하면 에러 뜬다.

	//scanf 함수는 분리되어있는 수를 인식한다. 똑똑한 함수이다. 구분만 되어있으면 인식

	int hap = a + b;
	int cha = a - b;
	int mok = a / b;
	int gop = a * b;

	printf("%d + %d = %d", a, b, hap);
	printf("%d + %d = %d", a, b, cha);
	printf("%d + %d = %d", a, b, mok);
	printf("%d + %d = %d", a, b, gop);

	float f = 3.14;

	printf("%f\n",f) // %d를 입력하면 안된다. float 함수를 사용했기 떄문에

		//scanf 즉, 사용자에게 실수를 입력받으려면 어떻게 해야할까?
		//int를 float로 변환 %d를 %f로 변환 하면 된다. 대신 소수점 6자리 까지 나온다.




}
