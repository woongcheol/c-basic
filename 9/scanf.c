/*
복기
- scanf 함수의 개념은 "입력 버퍼(stdin)에서 format에서 지정한 대로 읽어들인다" 
- scanf에서 '\n'은 개행을 의미하는 것이 아닌 하나의 문자 혹은 공백문자로 인식한다.
- format에서 공백 문자가 끝에 올 경우, 공백문자(white-space) + 공백 문자가 아닌 문자(non-white-space)가 다음으로 와야한다.
- 단, 다음 입력을 받을 때 입력버퍼에 남아 있기 때문에 의도치 않은 문제가 발생한다.

출처 : https://electro-don.tistory.com/entry/scanf-n-%EA%B4%80%EB%A0%A8
*/

#include <stdio.h>
 
int main(void)
{
    int a, b;
 
    printf("\n>>");
 
 
    scanf("%d %d\n", &a, &b); 
    printf("[%d,%d]\n>>", a, b);
 
    scanf("%d %d\n", &a, &b);
    printf("[%d,%d]\n>>", a, b);
    return 0;
}