#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> arr) {
    int maxVal = arr[0];
    for (int val : arr)
        maxVal = max(maxVal, val);
    return maxVal;
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 7};
    cout << "Maximum element: " << findMax(arr) << endl;
    return 0;
}
