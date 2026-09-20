int removeDuplicates(int* nums, int numsSize) {
    int a=0, ch=nums[0];
    for(int i=1 ; i<numsSize;i++){
        if (nums[i]!=ch){
            a=a+1;
            nums[a]=nums[i];
            ch=nums[i];
        }
    }    
    return a+1;

}