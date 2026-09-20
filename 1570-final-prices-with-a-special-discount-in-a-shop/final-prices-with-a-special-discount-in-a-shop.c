/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int* res=(int*)malloc(pricesSize*sizeof(int));
    *returnSize= pricesSize;
    int fp;
    for(int i=0; i<pricesSize; i++){
        for(int j=i+1; j<pricesSize; j++){
            if (prices[i]>=prices[j]){
                fp=prices[i]-prices[j];
                res[i]=fp;
                break;
            }else{
                res[i]=prices[i];
            }
        }
    }
    res[pricesSize-1]=prices[pricesSize-1];
    return res;
}