int missingNumber(int* nums, int numsSize) {
    int sum=numsSize;
    int sum1=0;
    for(int i=0; i<numsSize; i++){
        sum=sum+i;
        sum1=sum1+nums[i];
    }
    return sum-sum1;
}