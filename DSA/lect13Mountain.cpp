#include <iostream>
#include <vector>

class Solution 
{
public:
    int peakIndexMountainArray(std::vector<int>& arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        
        while (s < e)
        {
            int mid = s + (e - s) / 2;
            
            if (arr[mid] < arr[mid + 1])
            {
                // Peak is on the right side
                s = mid + 1;
            }
            else
            {
                // Peak is on the left side (or mid is the peak)
                e = mid;
            }
        }

        // At this point, 's' or 'e' is the peak index
        return s;
    }
};

int main()
{
    Solution sol;

    // Test with a mountain array
    std::vector<int> mountainArray = {1, 3, 5, 7, 10, 5, 3, 2, 1};
    int peakIndex = sol.peakIndexMountainArray(mountainArray);

    std::cout << "Peak index in the mountain array: " << peakIndex << std::endl;

    return 0;
}
