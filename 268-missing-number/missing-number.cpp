class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int ans = n;
        for(int i = 0;i < n;i++) {
            ans = ans ^ i;
            ans = ans ^ arr[i];
        }
        return ans;
    }
};