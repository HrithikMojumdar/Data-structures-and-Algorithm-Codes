#include<stdio.h>

void checkPalindrome(char *arr, int i, int j) {
    if (i >= j) {
        printf("palindrome");
        return;
    }
    if (arr[i] != arr[j]){
        printf("not palindrome");
        return;
    }
    checkPalindrome(arr, i + 1, j - 1);
}

int main() {
    char arr[10000], ch;
    int n = 0;
    while (scanf("%c", &ch) && ch != '\n')
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            arr[n++] = ch;
    checkPalindrome(arr, 0, n - 1);
}