#include <iostream>
using namespace std;

bool uniqueOccurrence(int arr[], int size) {
    int count[size];
    int key = 0;

    for (int i = 0; i < size; ++i) {
        count[i] = 0; // Initialize count for each element

        for (int j = 0; j < size; ++j) {
            if (i != j && arr[i] == arr[j]) {
                // If there is a matching element, increment count
                count[i]++;
            }
        }

        // Check if the current element has a unique occurrence
        if (count[i] > 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num[6] = {1, 2, 2, 1, 1, 3};
    int arr[2] = {1, 2};

    int size_num = sizeof(num) / sizeof(num[0]);
    int size_arr = sizeof(arr) / sizeof(arr[0]);

    cout << "Are all elements in num unique? " << (uniqueOccurrence(num, size_num) ? "Yes" : "No") << endl;
    cout << "Are all elements in arr unique? " << (uniqueOccurrence(arr, size_arr) ? "Yes" : "No") << endl;

    return 0;
}
