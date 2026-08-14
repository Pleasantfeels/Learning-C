#include <stdio.h>

int main(void) {
    int n = 6;  // width; height is n - 1

    for (int i = 1; i < n; i++) {          
        for (int j = 1; j <= n; j++) {     
            if (j >= n - i + 1)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}