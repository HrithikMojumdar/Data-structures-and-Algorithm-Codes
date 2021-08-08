#include<stdio.h>

void printChar(){
    char ch;
    scanf("%c",&ch);
    if(ch=='\n')
        return;
    printChar();
    printf("%c",ch);
}

int main() {
    printChar();
}