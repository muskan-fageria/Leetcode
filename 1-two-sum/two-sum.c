/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int size=2;
    int* res=(int*)malloc(size*sizeof(int));
    *returnSize=size;
    for(int i=0; i<numsSize; i++){
        int x= target-nums[i];
        for(int j=i+1; j<numsSize ; j++){
            if (x==nums[j]){
                res[0]=i;
                res[1]=j;
            }
        }
    }    
    return res;
}