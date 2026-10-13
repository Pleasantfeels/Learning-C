#include <stdio.h>

int nums[] = {23, 7, 91, 4, 56, 91, 12};
int count = sizeof(nums)/sizeof(nums[0]);

int main(void){
    int i;
    int big = -99999;

    for (i = 0; i <= count; i++){
        if (nums[i] > big){
            big = nums[i];

        };

    };
    printf("%d", big);
};