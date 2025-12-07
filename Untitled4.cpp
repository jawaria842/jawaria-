#include <stdio.h>

int main() {

    int n;
    int i;
    float p;
    float sum;
    int ct;

    sum = 0;
    ct = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    i = 1;
    while(i <= n) {

        printf("Enter price: ");
        scanf("%f", &p);

        sum = sum + p;

        if(p > 900) {
            printf("Costly Medicine\n");
            ct = ct + 1;
        }

        i = i + 1;
    }

    printf("Total = %.2f\n", sum);
    printf("Costly = %d\n", ct);

    return 0;
}
