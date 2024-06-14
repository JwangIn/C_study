#include <stdio.h> //standardinputoutput

//main함수는 시작과 끝을 알리는 함수.반드시 1개만 존재
//소스파일>우클릭 속성>빌드에서 제외기능으로 원하는 파일만 빌드 가능

//작성자 정재욱
//20240612
//학습주제 변수(variable)

//명령하고 그 내용을 저장하기 위해 변수 사용

//선언: 컴파일러에게 변수가 무엇을 저장하고 얼만큼 저장해야하는지 알려주는 것
//int > 정수 (4byte저장)
//float > 실수
//방법 : int a;

//할당 : 선언한 변수에 데이터를 넣는 것 (int a = 10;)
//언어에서 =는 "같다"는 뜻이 아닌 "할당"의 뜻

//초기화 : 변수에 처음으로 데이터를 저장하는 것
//printf의 f는 format의 줄임말



int hello()
{
	/*int a;
	a = 4 + 7;
	a = 1 + 3;
	printf("%d\n", a);
	float b = 3.2 + 6.9;
	printf("%f", b);*/

	//문제1
	//변수width,height,length라는 정수를 담을 수 있는 변수 선언 각각 12 10 8 부피변수 volume
	//int width = 12, height = 10, length = 8;
	//float volume = width * height * length;
	//volume = volume / 165;
	//printf("문제의 답은 : %.2f", volume);
	//volume= (volume+164) / 165;
	//printf("문제의 답은 : %f", volume);

	float c = 1;
	float f;
	f = (9.0 / 5.0) * c + 32;//왜 9와 5로 하면 안되나? 왜냐하면 컴퓨터는 9,5를 정수로 받아들이기 때문에 1이 나오는 것 따라서 9.0,5.0을 해야 실수로 받아들임.
	printf("섭씨 to 화씨 : %.2f", f);

	return 0;
}
