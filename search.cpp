#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 6, 7, 9, 2, 4, 8};
    int x;

    cout << "Enter element to search: ";
    cin >> x;

    for (int i = 0; i < 8; i++) {
        if (arr[i] == x) {
            cout << "Element found at index: " << i;
            return 0;
        }
    }

    cout << "Element not found";

    return 0;
}