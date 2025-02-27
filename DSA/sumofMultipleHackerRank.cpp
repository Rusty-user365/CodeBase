#include <iostream>

int sumOfMultiples(int limit) {
    limit--;  // To get the sum below the limit, decrement it by 1
    int sum3 = (3 * (limit / 3) * (limit / 3 + 1)) / 2;
    int sum5 = (5 * (limit / 5) * (limit / 5 + 1)) / 2;
    int sum15 = (15 * (limit / 15) * (limit / 15 + 1)) / 2;

    return sum3 + sum5 - sum15;
}

int main() {
    // Example usage with a limit of 1000
    int limit = 1000;
    int result = sumOfMultiples(limit);
    std::cout << "Sum of multiples below " << limit << ": " << result << std::endl;

    return 0;
}
