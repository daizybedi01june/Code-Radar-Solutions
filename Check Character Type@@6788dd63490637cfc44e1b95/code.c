#include <stdio.h>

int main(){
    char s;
    scanf("%c",&s);
    if (s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        printf("Vowel");
    }
    else if(s=='b' || s=='c' || s=='d' || s=='f' || s=='g' || s=='h' || s=='i' || s=='j' || s=='k' || s=='l' || s=='m' || s=='n' || s=='p' || s=='q' || s=='r' || s=='s' || s=='t' || s=='u' || s=='v' || s=='w' || s=='x' || s=='y' || s=='z')
    printf("Consonant");
    else if(s=='0' || s=='1' || s=='2' || s=='3' || s=='4' || s=='5' || s=='6' || s=='7' || s=='8' || s=='9')
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}   