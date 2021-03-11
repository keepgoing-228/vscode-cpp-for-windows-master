int count_spaces(const char s[]){        /* 計算字串中有多少個space */
    int count = 0, i ;
    for (i = 0; s[i] != '\0' ; i ++){    /* 只要不是空的就繼續      */
        if (s[i] == ' '){
            count++;
        }
    }
    return count; 
}


/* use pointer to write the count_spaces function*/

int count_spaces(const char *s_pointer){
    int count = 0;                       /* 有指標了就不用i當計數器*/
    for(;*s_pointer != '\0'; s_pointer ++){
        if (*s_pointer == ' '){
            count ++;
        }
    }
    return count;
}
