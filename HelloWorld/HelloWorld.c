#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int score = 0;

    printf("=== 간단한 퀴즈 게임 ===\n\n");

    printf("1. 우리 태양계에서 가장 큰 행성은?\n");
    printf("   a) 지구\n");
    printf("   b) 목성\n");
    printf("   c) 해왕성\n");
    char answer1;
    printf("정답을 선택하세요 (a/b/c): ");
    scanf(" %c", &answer1);
    if (answer1 == 'b') {
        printf("정답입니다!\n");
        score++;
    }
    else {
        printf("틀렸습니다!\n");
    }

    printf("\n2. 2의 제곱은?\n");
    printf("   a) 2\n");
    printf("   b) 4\n");
    printf("   c) 8\n");
    char answer2;
    printf("정답을 선택하세요 (a/b/c): ");
    scanf(" %c", &answer2);
    if (answer2 == 'b') {
        printf("정답입니다!\n");
        score++;
    }
    else {
        printf("틀렸습니다!\n");
    }

    printf("\n3. '컴퓨터'라는 단어의 영어로는?\n");
    printf("   a) Computer\n");
    printf("   b) Calculate\n");
    printf("   c) Commute\n");
    char answer3;
    printf("정답을 선택하세요 (a/b/c): ");
    scanf(" %c", &answer3);
    if (answer3 == 'a') {
        printf("정답입니다!\n");
        score++;
    }
    else {
        printf("틀렸습니다!\n");
    }

    printf("\n퀴즈 종료! 당신의 점수는 %d입니다.\n", score);

    return 0;
}
