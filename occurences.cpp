#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,5,8,3,2,1,4,3,6,3,3,2,1,7,2};
    int x, count = 0;

    cout << "Enter element: ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    cout << "Occurrence of " << x << " = " << count;

    return 0;
}