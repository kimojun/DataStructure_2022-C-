#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(){
    char *s1 = malloc(sizeof(char) * 10);
    char *s2 = malloc(sizeof(char) * 10);
    int len = 0, len1, len2;
    int i;
    scanf("%s", s1);
    scanf("%s", s2);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if(len1 >= len2)
        len = len1;
    else if(len1 < len2)
        len = len2;
    
    for(i=0;i<len;i++){
        if(*(s1+i)==*(s2+i))
            printf("O");
        else
            printf("X");
    }    

    return 0;
}
