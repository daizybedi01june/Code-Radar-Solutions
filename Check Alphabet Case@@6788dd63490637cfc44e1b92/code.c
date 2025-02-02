#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='A' || s=='B'){
        printf("Uppercase");
    }
    else if (s=='a' || s=='b'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}