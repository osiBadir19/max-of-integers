#include <stdio.h>

// 12
int main(){
    int a, b, c, max;
    printf("please enter value for (a): ");
    scanf("%d", &a);

    printf("please enter value for (b)): ");
    scanf("%d", &b);

    printf("please enter value for (c): ");
    scanf("%d", &c);

    // Finding the maximum value among a, b, and c
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    printf("the max is: %d\n", max);

    // end code
    return 0;
}
