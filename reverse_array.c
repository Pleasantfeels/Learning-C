#include <stdio.h>

int nums[] = {23, 7, 91, 4, 56, 91, 12};
int count = sizeof(nums)/sizeof(nums[0]);
int temp;

int main(void){
    int i;
    int j;

    for (i = 0; i < count/2; i++){
        temp = nums[i];
        nums[i] = nums[count - 1 - i];
        nums[count - 1 - i] = temp;
    };

    for (int i = 0; i <= count-1; i++) {
        printf("%d ", nums[i]);
    };
};

