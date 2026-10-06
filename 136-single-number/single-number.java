class Solution {
    public int singleNumber(int[] nums) {
    int dup=0;
    for(int i=0; i<nums.length ; i++){
        dup=dup^nums[i];
    }
    return dup;
    }
}