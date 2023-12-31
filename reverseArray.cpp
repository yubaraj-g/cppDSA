#include <bits/stdc++.h>
using namespace std;

vector<int> revArray(int size, vector<int> &nums) {

    for (int i=0; i<=size/2; i++) {
      int x = nums[i];
      nums[i] = nums[size-i-1];
      nums[size-i-1] = x;
      // swap(nums[i], nums[size - i - 1]);
    }
    
    return nums;
}

int main() {
    // Write C++ code here
    int n = 5;

    vector<int> arr;
    for(int i = 1; i<=n; i++) arr.push_back(i);

    vector<int> newArr = revArray(n, arr);

    for (auto  el: newArr) cout << el << " ";

    return 0;
}
