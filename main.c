#include <stdio.h>
 
int main(void) {
    int n;
    scanf("%d", &n);
 
    // n がマイナスのときは「NG」と表示
    if (n < 0) {
        printf("NG\n");
        return  0;
    }
 
    long long sum = 0; // 合計が大きくなる可能性があるため型に注意
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }
 
    printf("%lld\n", sum);
    return 0;
}
