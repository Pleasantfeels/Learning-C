#include <stdio.h>
const char *star = "* ";

int main(void){
    int i;
    int j;
    int k = 0;

    
    for (i = 5; i >= 0; i--){
        printf("%.*s", i, "                 ");
        for (j = 0; j <= k; j++){
            printf(star);
        }
        printf("\n");
        k = k+1;
    }

}