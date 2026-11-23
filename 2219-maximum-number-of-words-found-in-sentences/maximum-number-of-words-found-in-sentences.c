int mostWordsFound(char** sentences, int sentencesSize) {
    int spaceCt=0, maxSpCt=0;
    for(int i=0; sentencesSize>i; i++){
        for(int j=0; sentences[i][j]!=0; j++){
            if (sentences[i][j]==' ') spaceCt++;
        }
        if ( spaceCt > maxSpCt ){
            maxSpCt = spaceCt;
        }
        spaceCt=0;
    }
    return maxSpCt+1;
}