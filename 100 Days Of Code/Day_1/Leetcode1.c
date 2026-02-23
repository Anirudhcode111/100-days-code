// Two Sum Problem

#include<stdlib.h>

int* TwoSum(int numsSize, int target , int* returnSize , int* nums){
        // Outer Loop 
        for(int i = 0 ; i < numsSize - 1 ; i++){
            // Inner Loop
            for(int j = i + 1 ; j < numsSize ; j++){

                // Condition Block
                if (nums[i] + nums[j] == target){

                    // Result Block
                    *returnSize = 2;
                    int* result = (int*)malloc(2 * sizeof(int));
                    result[0] = i;
                    result[1] = j;
                    return result;

                }
            }
        }

        *returnSize = 0;
        return NULL;
        
}
