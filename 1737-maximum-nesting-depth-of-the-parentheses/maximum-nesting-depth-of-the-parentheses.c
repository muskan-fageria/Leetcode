int maxDepth(char* s) {
    int out=0,max=0;
    size_t  l=strlen(s);
    for(int i=0; i<l; i++){
        if (s[i]=='('){
            out=out+1;
        }else if(s[i]==')'){
            out=out-1;
        }
        if (max<out) max=out;
    } 
    return max;
}