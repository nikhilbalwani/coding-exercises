#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector <int> &arr);
void insertion_sort(vector <int> &arr);
void selection_sort(vector <int> &arr);

int main() {
    int a[] = {3, 11, 7, 6, 5, 10};
    int n = sizeof(a) / sizeof(a[0]);
    vector <int> arr(a, a + n);
    
    selection_sort(arr);
    
    for (int ele: arr) {
        cout << ele << " ";
    }
    
}

void bubble_sort(vector <int> &arr) {
    for (int i = 0; i < arr.size(); ++i) {
        for (vector <int>::iterator itr = arr.begin(); itr != arr.end() - 1; ++itr) {
            vector <int>::iterator next = itr + 1;
            
            if (*itr > *next) {
                iter_swap(itr, next);
            }
        }
    }
}


void insertion_sort(vector <int> &arr) {
    for (vector <int>::iterator itr = arr.begin() + 1; itr != arr.end(); ++itr) {
        vector <int>::iterator previous = itr - 1;
        
        while (*itr < *previous) {
            iter_swap(itr, previous);
            
            itr -= 1;
            previous -= 1;
        }
    }
}

void selection_sort(vector <int> &arr) {
    for (vector <int>::iterator itr = arr.begin(); itr != arr.end(); ++itr) {
        int min = INT_MAX;
        vector <int>::iterator min_itr;
        
        for (vector <int>::iterator check_itr = itr; check_itr != arr.end(); ++check_itr) {
            if (*check_itr < min) {
                min = *check_itr;
                min_itr = check_itr;
            }
        }
        
        iter_swap(min_itr, itr);
    }
}
