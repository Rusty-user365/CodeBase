#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int> arr)
{
    int e = arr.size() - 1;
    int s = 0;
    int mid = s + (e - s) / 2;
    int pivot_element = 0;

    while (s < e) {
       

        if (arr[mid] < arr[mid + 1]) {
            e = mid;
        } else if (arr[mid] < arr[mid - 1]) {
            s = mid;
        } else {
            pivot_element = arr[mid];
            break;
        }
         mid = s + (e - s) / 2;

        pivot_element = arr[mid];
    }

    return pivot_element;
}

int main()
{
    vector<int> arr = {1, 2, 3, 7, 9};
    vector<int> rev = {7, 9, 1, 2, 3};
    cout << pivotElement(arr) << endl;
        cout << pivotElement(rev) << endl;

    return 0;
}
