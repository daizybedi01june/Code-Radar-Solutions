#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='A' || s=='B' || s=='C' || s=='D' || s=='E' || s=='F' || s=='G' || s=='H' || s=='I' || s=='J' || s=='K' || s=='L' || s=='M' || s=='N' || s=='O' || s=='P' || s== 'Q' || s=='R' || s=='T' || s=='U' || s=='V' || s=='W' || s=='X' || s=='Y' || s=='Z' || s=='S'){
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