void copy_string(char *target, const char *source) {
    while (*source != '\0') {
        *target = *source; 
        source++;
        target++;
    }
    *target = '\0';
}
char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0 || strs == NULL || strlen(strs[0]) == 0 ){
    char* empty = (char*)malloc(1* sizeof(char));
    empty[0] = '\0';printf("0");
    ;}
    
    int max=strlen(strs[0]),i;
    char *c=(char*)malloc(max+10*sizeof(char));
    copy_string(c,strs[0]);
    char *st=c;
    for(i=1;i<strsSize;i++)
        {
            c=st;
            char *ptr=strs[i];
            while(*c!='\0'){
                if(*c==*ptr){
                    *c++;
                    *ptr++;
                }
                else{
                    *c++='\0';
                    break;
                }
            }
        }
    
    //c[i]='\0';
    return st;
}