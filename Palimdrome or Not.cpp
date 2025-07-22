#include<bits/stdc++.h>
using namespace std;


int isPalindrome(char str[], int begin, int end) {
    if (begin >= end)
        return 1;
    if (str[begin] != str[end])
        return 0;
    return isPalindrome(str, begin + 1, end - 1);
}

int main() {
    char str[1000];
    cin >> str;

    int res = isPalindrome(str, 0, strlen(str) - 1);
    if (res == 1)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}
