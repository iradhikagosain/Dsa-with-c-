#include<iostream>
#include<climits>
using namespace std;

void print(int arr[], int n) {
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Successful!!!!!";
}

void countSort(int arr[], int n)
{
    int freq[10000] = {0}; 
    int minVal = INT_MAX, maxVal = INT_MIN;

    // 1st step: Count frequency & find min/max
    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++; 
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step: Reconstruct the sorted array
    for(int i = minVal, j = 0; i <= maxVal; i++)
    {
        while(freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    print(arr, n);
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countSort(arr, 8);
    return 0;
}
