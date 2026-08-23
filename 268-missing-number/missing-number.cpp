class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int sum = (n *(n + 1))/2;
        int arr_sum = 0;
        for(int i = 0;i < n;i++) {
            arr_sum += arr[i];
        }
        return sum - arr_sum;
    }
};