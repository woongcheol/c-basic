#include <stdio.h>
#include <string.h>

int main(void) {

    int age = 0;
    char name[32] = {0};

    printf("나이를 입력하세요: ");

    scanf("%d%*c", &age);

    printf("이름을 입력하세요: ");

    fgets(name, sizeof(name), stdin); // fgets는 개행문자도 입력으로 받는다.
    name[strcspn(name, "\n")] = '\0';

    printf("당신의 나이는 %d살이고 이름을 '%s' 입니다.", age, name);

    return 0;
}