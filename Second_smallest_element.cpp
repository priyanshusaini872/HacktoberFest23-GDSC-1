#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "At least two elements are required for finding the second smallest element." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstMin = INT_MAX;
    int secondMin = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
        }
    }

    if (secondMin == INT_MAX) {
        cout << "There is no second smallest element in the array." << endl;
    } else {
        cout << "The second smallest element in the array is: " << secondMin << endl;
    }

    return 0;
}
