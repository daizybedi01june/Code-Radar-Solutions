#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='A' || s=='K'){
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