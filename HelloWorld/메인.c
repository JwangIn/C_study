#include <stdio.h>
#include "lectures.h"
#include "helloc.h"
#include "compiler.h"
#include "lecture4.h"
#include "lecture4_2.h"

/*
전처리기 :: "#"+"키워드"
기능 : 컴파일전 전처리기에 등록된 기능을 수행
예시 : #include + 파일이름

#include <파일이름> : 시스템 경로에서 해당파일이 있는지 없는지 확인
#include "파일이름" : 사용자가 만든 헤더파일을 먼저 검사하고, 없으면 시스템 경로에서 찾음.
*/

int main() 
{
	//hello();//hello.c
	//printf("\n");
	//compiler();//compiler.c
	//lecture4();
	lecture4_2();
	return 0;
}