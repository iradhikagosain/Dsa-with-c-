#include<iostream>
using namespace std;

int linearSearch(int* arr, int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n = 5, key;
    int arr[5];
    cout << "Enter key: ";
    cin >> key;
       cout<<"enter elements:";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}

    int index = linearSearch(arr, n, key);

    if(index == -1) {
        cout << "Key not found\n";
    } else {
        cout << "Successful search\nKey is at index: " << index << endl;
    }

    return 0;
}
