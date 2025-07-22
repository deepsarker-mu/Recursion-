#include <bits/stdc++.h>
using namespace std;

int digit(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + digit(n / 10);
}

int main() {
    int num;
    cin >> num;


if (num == 0) {
cout << "The number has 1 digit." << endl;
}
else {
cout << "The number has " << digit(num) << " digits." << endl;
}

return 0;
}
