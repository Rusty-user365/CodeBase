#include <iostream>
using namespace std;

// Function to reverse a word and print it
void reverse(string word) {
    int e = word.length() - 1;
    while (e >= 0) {
        cout << word[e];  // Print the characters in reverse order
        e--;
    }
}

// Function to print spaces after a word
void printSpace(string question, int &s) {
    while (s < question.length() && question[s] == ' ') {
        cout << ' ';  // Print the space
        s++;          // Move to the next character
    }
}

int main() {
    string question = "Let's take LeetCode";
    cout << question << endl;

    int s = 0;
    int e = question.length();
    string temp = "";

    while (s < e) {
        // Extract a word until a space is found
        while (s < e && question[s] != ' ') {
            temp += question[s];  // Build the word
            s++;
        }

        // Reverse the word and print it
        reverse(temp);
        temp = "";  // Reset temp for the next word

        // Print any spaces after the word
        printSpace(question, s);
    }

    return 0;
}
