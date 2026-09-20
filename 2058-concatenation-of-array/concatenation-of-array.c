/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int size=2*numsSize;
    int* ans=(int*)malloc(size*sizeof(int));
    *returnSize=size;
    for(int i=0; i<size; i++){
        if(i<numsSize) ans[i]=nums[i];
        else ans[i]=nums[i-numsSize];
    }    
    return ans;
}