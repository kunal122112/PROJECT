#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 8, 4, 9, 7, 6, 2, 3};
    int n = 9;

    int max[9], min[9];

    max[0] = arr[0];
    min[0] = arr[0];

    for (int i = 1; i < n; i++) {
        max[i] = max[i - 1];
        min[i] = min[i - 1];

        if (arr[i] > max[i])
            max[i] = arr[i];

        if (arr[i] < min[i])
            min[i] = arr[i];
    }

    cout << "Maximum = " << max[n - 1] << endl;
    cout << "Minimum = " << min[n - 1] << endl;

    return 0;
}