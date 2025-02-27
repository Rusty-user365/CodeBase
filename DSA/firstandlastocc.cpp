#include <iostream>
#include <vector>
using namespace std;

vector<int> FirstAndLastOcc(vector<int> arr, int key) {
    vector<int> result{-1, -1}; // Initialize result vector with -1 for both first and last occurrence

    // Find the first occurrence
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            result[0] = i;
            break;
        }
    }

    // Find the last occurrence
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] == key) {
            result[1] = i;
            break;
        }
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 2, 4, 5, 5, 6, 8, 9, 10, 2};
    int k = 2;

    vector<int> result = FirstAndLastOcc(a, k);

    cout << "First Occurrence: " << result[0] << endl;
    cout << "Last Occurrence: " << result[1] << endl;

    return 0;
}
