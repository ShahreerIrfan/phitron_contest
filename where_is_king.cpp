#include <iostream>
#include <vector>

using namespace std;

int findKingIndex(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return 0;  
    }

    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum) {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;  
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> nums(N);
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }

        int kingIndex = findKingIndex(nums);
        cout << kingIndex << endl;
    }

    return 0;
}