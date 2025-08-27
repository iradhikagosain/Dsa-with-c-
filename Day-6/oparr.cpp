// optimized brute force
#include<iostream>
#include<climits>
using namespace std;

int subarr(int *arr, int n) {
    int maxsum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int currsum = 0;
        for (int end = start; end < n; end++) {
            currsum += arr[end];//adding values in currsum directly rather running a separate loop
            maxsum = max(maxsum, currsum);
        }
        cout<<endl;
    }

    cout << "\nMaximum subarray sum = " << maxsum << endl;
    return maxsum;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n]; // Variable Length Array (VLA) - works in GCC

    cout << "Enter elements in array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    subarr(arr, n);
    return 0;
}
