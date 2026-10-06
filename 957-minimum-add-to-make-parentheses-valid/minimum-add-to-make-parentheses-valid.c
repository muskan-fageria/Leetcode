int minAddToMakeValid(char* s) {
    size_t len=strlen(s); 
    int c=0, n=0;   
    for(int i=0; i<len; i++){
        if (s[i]=='('){
            c=c+1;
        }else{
            c=c-1;
        }

        if(c<0){
            n=n+1;
            c=0;
        }
    }
    n=n+c;
    return n;
}