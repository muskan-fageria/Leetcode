/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int size= candiesSize;
    bool* res=(bool*)malloc(size*sizeof(bool));
    *returnSize=size;
    
    int s=0;
    for(int i=0; i< candiesSize; i++){
        s=candies[i]+extraCandies;
        for(int j=0; j< candiesSize; j++){
            if(candies[j]>s) s=candies[j];
        }
        if((candies[i]+ extraCandies)==s){
             res[i]=true;
        }else{
            res[i]=false;
        }
    }
    return res;
}