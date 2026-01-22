#include <stdio.h>
#include <stdbool.h>

#define len(arr) sizeof(arr)/sizeof(*arr);

bool isPowerOfTwo(int n) {
    if(n == 1){
        return true;
    }
    if(n % 2 == 0){
        return true;
    }
    return false;
}
int removeElement(int* nums, int numsSize) {
    int k = 0;
    for(int i = 0; i < numsSize;i++){
        if(nums[i] == nums[i+1]){
            printf("{%d} %d\n",i,nums[i]);
            k = i;
            break;
        }
    }
    int a = 0;
    for(int i = k; i < numsSize - 1;i++){
        nums[i] = nums[i+1];
    }
    for(int i = 0; i < numsSize;i++){
        printf("%d ",nums[i]);
    }


    return 0;
}




int main(void){
    int arr[] = {1,2,42,12,45,6,3,5,8,21,22,53,22,22};

    size_t lern = len(arr);

    for(int i = 0; i < lern;i++){
        for (size_t j = 0; j < lern; j++)
        {
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < lern;i++){
        printf("%d ",arr[i]);
    }

    putchar('\n');
    putchar('\n');
    bool res = isPowerOfTwo(16);

    printf("%d",res);
    
    printf("%d",removeElement(arr,lern));

    return 0;
}