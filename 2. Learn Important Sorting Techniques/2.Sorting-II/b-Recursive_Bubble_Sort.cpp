// Recursive Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>& arr, int n) {
    if (n==1) return;
    bool swapped = false;
    for (int j = 0; j < n - 1; j++){
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            swapped = true;
        }
    }
    if (!swapped) return;
    bubble_sort(arr, n - 1);
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    cout << "Before Using Bubble Sort:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    bubble_sort(arr,0);
    cout << "After Using Bubble Sort:\n";
    for (int num : arr)cout << num << " ";
    cout << endl;
    return 0;
}