#include <stdio.h>
#include <stdlib.h>


void Get(int number, int digit[]) {
    if (number != 0) {
        digit[number % 10]++;
        Get(number / 10, digit);
    }
}

int MaxNum(int num) {
    int digit[10] = {0};
    int n = sizeof(digit) / sizeof(*digit);
    int result = 0;
    Get(num, digit);

    while (n--) {
        while (digit[n]--) {
            result = result * 10 + n;
        }
    }

    return result;
}


int main() {

    int num;
    scanf("%d", &num);
    printf("%u\n", MaxNum(num));

    return 0;
}
