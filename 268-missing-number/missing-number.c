int missingNumber(int* nums, int numsSize) {
    int sum=0;
    int sum1=0;
    for(int i=0; i<=numsSize; i++){
        sum=sum+i;
        if (i==numsSize) continue;
        sum1=sum1+nums[i];
    }
    return sum-sum1;
}