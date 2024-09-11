//1.별표를 n개를 출력한다.
//2.1부터 n까지 홀수를 출력한다.
//3.1부터 n까지 자연수를 모두 더한다.




    
#include <stdio.h>
//for 문
int main()
{
    int n;

    printf("n을 입력하시오: ");
    scanf_s("%d", &n);

    //(1)
    for (int i = 1; i <= n; i++)
        printf("+");
    printf("\n");

    //(2)
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");

    //(3)
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
}