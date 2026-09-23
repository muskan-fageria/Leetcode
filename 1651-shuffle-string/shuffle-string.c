char* restoreString(char* s, int* indices, int indicesSize) {
    char *str =malloc((indicesSize+1)*sizeof(char));
    str[indicesSize]='\0';
    for(int i=0; i<indicesSize; i++){
        str[indices[i]]=s[i];
    }    
    return str;
}