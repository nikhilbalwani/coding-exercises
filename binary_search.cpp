#include <bits/stdc++.h>

using namespace std;

int binary_search(vector <int> arr, int ele, int beg, int last);

int main() {
    int a[] = {1, 3, 5, 6, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    vector <int> arr(a, a + n);
    
    cout << binary_search(arr, 5, 0, n - 1);
}

int binary_search(vector <int> arr, int ele, int beg, int last) {
    int mid = (beg + last) / 2;
    
    if (beg > last) {
        return -1;
    }
    
    else if (arr[mid] == ele) {
        return mid;
    }
    
    else if (ele < arr[mid]) {
        return binary_search(arr, ele, beg, mid - 1);
    }
    
    else {
        return binary_search(arr, ele, mid + 1, last);
    }
}
