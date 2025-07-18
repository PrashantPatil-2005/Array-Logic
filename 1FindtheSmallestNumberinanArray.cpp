#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> arr) {
    int minVal = arr[0];
    for (int val : arr)
        minVal = min(minVal, val);
    return minVal;
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7};
    cout << "Minimum element: " << findMin(arr) << endl;
    return 0;
}
