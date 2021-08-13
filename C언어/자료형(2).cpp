#include <stdio.h>
/*
int main() {
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	int a; char b; float c; double d;
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));

}
// sizeof(x): X의 크기를 알려줌
// x: 형 (int, float, ...)
//        변수이름


int main() {
	int a = 3.14;
	double b = 10;

	printf("%d %f\n", a, b);
}
//실수를 정수형 변수에 담을 수 없다. > 에러가 뜨진 않는다.
//정수를 실수형 변수에 담을 수 있다.
*/

//형변환: 자료형을 다른 자료형으로 바꾸는 작업

#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = sum / 3;

	printf("%f\n", avg); // 93.666667 이지만 결과는 93.000000 이 나온다.

	// 정수 / 정수 = 정수
	// 실수 / 정수 = 실수
	// 정수/ 실수 = 이런건 할일이 없다.
	// 실수 / 실수 = 실수

	//정수보다 실수에 더 다양한 값을 저장할 수 있다. 
	// 큰쪽의 자유형이 된다.

	// 따라서 avg = sum / 3; 에서는 sum 과 3 모두 정수이기 때문에 avg도 정수가 나온다.
	// 이걸 해결하려면

	double avge = (double)sum / 3;
	printf("%f\n", avge);
	//으로 해주면 sum 이 잠시 실수로 변한다.

	int a = 5 / 3;

	//정수 + 정수 = 정수
	//정수 + 실수 = 실수
	//실수 + 실수 = 실수

}