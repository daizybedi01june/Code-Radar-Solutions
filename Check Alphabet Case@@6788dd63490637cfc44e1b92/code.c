#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='A' || s=='C'){
        printf("Uppercase");
    }
    else if (s=='z' || s=='b'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}