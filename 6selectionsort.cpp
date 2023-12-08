#include <iostream>

using namespace std;

template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1;  i++) {
        int min = i;
        
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i)
         {
            swap(arr[i], arr[min])
        }
    }
}

template <typename T>
void printArray(const T arr[], int n) {
    for (int i = 0; i < n;  i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
     int size ;
     cout<<"enter the size of arr:"<<endl;
     cin>>size;
    int intArr[size];
    double doubleArr[size];

    cout << "Enter " << size << " integer values: ";
    for (int i = 0; i < size;  i++) {
        cin >> intArr[i];
    }

    cout << "Enter " << size << " double values: ";
    for (int i = 0; i < size; i++) {
        cin >> doubleArr[i];
    }

    cout << "Original Integer Array: ";
    printArray(intArr, size);

    selectionSort(intArr, size);

    cout << "Sorted Integer Array: ";
    printArray(intArr, size);

   cout << "Original Double Array: ";
    printArray(doubleArr, size);

    selectionSort(doubleArr, size);

    cout << "Sorted Double Array: ";
    printArray(doubleArr, size);

    return 0;
}