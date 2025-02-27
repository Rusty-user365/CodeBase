#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        // Velocities are equal, kangaroos will never meet
        return "NO";
    }

    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) >= 0) {
        // Kangaroos will meet at some point
        return "YES";
    } else {
        // Kangaroos will never meet
        return "NO";
    }
}

int main() {
    int x1 = 21;
    int v1 = 6;
    int x2 = 47;
    int v2 = 3;

    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";

    return 0;
}
