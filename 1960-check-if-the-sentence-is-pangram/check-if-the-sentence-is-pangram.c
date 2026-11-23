bool checkIfPangram(char* sentence) {
    char str[100]={0};
    int k=0;


    for(int i=0; sentence[i]!='\0'; i++){
        int found=0;

        for(int j=0; j<=k; j++){
            if(str[j]==sentence[i]){
                found=1;
                break;
            }
        }

        if(!found){
            str[k]=sentence[i];
            k++;
        }
    }
    
    return k==26;
}