int reed_line(char str[], int n){
    int i = 0,ch;
    
    while((ch = getchar()) != '\n'){
        if (i< n){
            str[i++]= ch;
        }
    str[i]= '\0';     /*  array of str has \0  */
    }
    return i;         /*  number of characters stored*/
}