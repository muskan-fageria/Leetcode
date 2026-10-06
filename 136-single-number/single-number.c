int singleNumber(int* nums, int numsSize) {
    int dup=0;
    for(int i=0; i<numsSize; i++){
        dup=dup^nums[i];
    }    
    return dup;
}