#include <stdio.h>

void countDown(int n) {
    if (n > 0) {
        printf("%d\n", n);
        countDown(n - 1); // Recursive call
    }
}

int main() {
    countDown(1000);
    return 0;
}
