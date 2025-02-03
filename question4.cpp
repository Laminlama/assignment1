#include <iostream>
using namespace std;


void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - 1 - i]);
    }
}


bool isSorted(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}


void findMaxMin(int arr[], int size, int &max, int &min) {
    max = arr[0];
    min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int choice;

  
    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu:\n";
        cout << "1. Display Original Array\n";
        cout << "2. Reverse and Display Array\n";
        cout << "3. Check if Array is Sorted\n";
        cout << "4. Find Maximum and Minimum Elements\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayArray(arr, SIZE);
                break;
            case 2: {
                int tempArr[SIZE];
                copy(arr, arr + SIZE, tempArr);
                reverseArray(tempArr, SIZE);
                cout << "Reversed ";
                displayArray(tempArr, SIZE);
                break;
            }
            case 3:
                if (isSorted(arr, SIZE))
                    cout << "The array is sorted in ascending order.\n";
                else
                    cout << "The array is NOT sorted in ascending order.\n";
                break;
            case 4: {
                int max, min;
                findMaxMin(arr, SIZE, max, min);
                cout << "Maximum Element: " << max << "\n";
                cout << "Minimum Element: " << min << "\n";
                break;
            }
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
