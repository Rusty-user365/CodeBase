#include<iostream>
using namespace std;

bool valid(char ch) {
    if ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return true;
    }
    return false;
}

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length() - 1;
    while (s <= e) {
        if (a[s] != a[e]) {
            cout << a[s] << " " << a[e] << endl;
            return false;
        } else {
            s++;
            e--;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    // Remove invalid characters
    string temp = "";
    for (int j = 0; j < s.length(); j++) {
        if (valid(s[j])) {
            temp.push_back(s[j]);
        }
    }

    // Convert to lowercase
    for (int j = 0; j < temp.length(); j++) {
        temp[j] = toLowerCase(temp[j]);
    }

    // Check for palindrome
    if (checkPalindrome(temp)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
