//캐릭터형을 줄여서 char  라고 쓴다.
// char : 1qkdlxm wjdtngud (int: 4바이트)
// character: 문자
//문자를 저장할때 가장 좋은 변수이다.
//반각문자를 뜻함 ::ABabc1234_+/\이런것들
//안되는것들 한글 한자 일본어 등 정각문자에 해당하는 숫자들이 따로 있다. 
//정각문자의 절반 크기이다.

#include <stdio.h>

int main() {
	char a = 67;

	printf("%c\n", a);

	// printf("%c\n", 'a'); 로 할 경우 a가 그대로 프린트 된다. (문자형태)
	//printf("%c\n", a); 로 할 경우 C 가 뜬다. 대문자  C (문자 형태)
	// C가 문자형태로 출력이 되었다. 

	printf("%d\n", a);
	//이렇게 %d 로 써주면 67이 프린트 된다.
	//아스키 코드표!! 미국에서 정한 표준이다. american standard
	//모든 기기에서는 아스키표 를 따르고 있다.
}