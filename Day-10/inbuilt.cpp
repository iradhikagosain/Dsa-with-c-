//INBUILT SORT
#include<iostream>
#include <algorithm>
using namespace std;



void print(int arr[], int n) {
    cout << "\nSorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Successful!!!!!";
}


int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    sort(arr+2,arr+5);//+8 is the index as long as we want to sort
    sort(arr,arr+8,greater<int>());
    print(arr,8);
    return 0;
}

//default builtin sort works according to ascending order
//sort(start,end,greater<int>())-----descending