int sumOddLengthSubarrays(int* arr, int arrSize) {
    int sum=0;
    for(int i=1;  i<=arrSize; i=i+2){
        for(int j=0; j<=(arrSize-i) ; j++ ){
            for(int k=j; k<=(j+i-1); k++){
                sum=sum+arr[k];
            }
        }
    }
    return sum;
}