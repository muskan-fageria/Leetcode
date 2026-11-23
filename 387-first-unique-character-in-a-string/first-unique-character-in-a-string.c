int firstUniqChar(char* s) {
    for(int i=0; s[i]!= '\0'; i++){
        for(int j=0; s[j]!=0; j++){
            if (s[i]==s[j] && i!=j){
                break;
            }

            if(s[j+1]=='\0') return i;
        }
    }
    return -1;
}