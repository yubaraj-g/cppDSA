#include <bits/stdc++.h>
using namespace std;

vector<int> revArray(int size, vector<int> &nums) {
    int endPos = size - 1;
    int startPos = nums.size() - size;
    // cout << endPos << " " << startPos << endl;
    
    if (startPos < nums.size()/2) {
        // swap(nums[startPos], nums[endPos]);
        int x = nums[endPos];
        nums[endPos] = nums[startPos];
        nums[startPos] = x;
        
        // cout << nums[startPos] << " " << nums[endPos] << endl;
        
        revArray(endPos, nums);   
    }
    
    return nums;
}

int main() {
    // Write C++ code here
    int n = 7;

    vector<int> arr;
    // for(int i = 1; i<=n; i++) arr.push_back(i);
    arr = {3, 1, 1, 7, 4, 2, 6};

    vector<int> newArr = revArray(n, arr);

    for (auto  el: newArr) cout << el << " ";

    return 0;
}