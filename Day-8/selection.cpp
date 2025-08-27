#include<iostream>
using namespace std;

// Function to print the array
void print(int arr[], int n) {
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
     cout<<"successfull!!!!!";
}

// Selection Sort Function
void selection(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int minidx = i;
        
        // Find the minimum element in unsorted part
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minidx]) {
                minidx = j;  // <-- FIXED: Added semicolon
            }
        }
        swap(arr[i], arr[minidx]);//built in function
    }
    print(arr, n);  // <-- FIXED: Added correct print function
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selection(arr, n);
   
    return 0;
}
