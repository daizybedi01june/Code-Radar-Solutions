#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='A' || s=='B' || s=='C' || s=='D' || s=='E' || s=='F' || s=='G' || s=='H' || s=='I' || s=='J' || s=='K' || s=='L' || s=='M' || s=='N' || s=='O' || s=='P' || s== 'Q' || s=='R' || s=='T' || s=='U' || s=='V' || s=='W' || s=='X' || s=='Y' || s=='Z' || s=='S'){
        printf("Uppercase");
    }
    else if (s=='z' || s=='b' || s=='a' || s=='c' || s=='d' || s=='e' || s=='f' || s=='g' || s=='h' || s=='i' || s=='j' || s=='k' || s=='l' || s=='m' || s=='n' || s=='o' || s=='p' || s=='q' || s=='r' || s=='s' || s=='t' || s=='u' || s=='v' || s=='w' || s=='x' || s=='y'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}