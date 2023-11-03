/*
복기
- 64비트 부호 있는 정수 (signed long long) 데이터 유형의 최대값을 나타낸다.
- 이 이상을 넘어갈 경우, 오차 값이나 의도치 않은 값이 입력되어 오류가 발생할 수 있다.
*/

#include <stdio.h>

int main(void)
{
    long long int a = 0;
    a = 9223372036854775807LL;
    printf("%lld\n", a);
    return 0;
}