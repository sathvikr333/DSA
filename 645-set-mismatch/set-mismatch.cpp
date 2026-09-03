class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long n = nums.size();
        long long SN = (n*(n+1))/2;
        long long S2N =(n * (n + 1)* (2*n+1))/6;
        long long S = 0;
        long long S2 = 0;
        for(int i = 0;i < nums.size();i++) {
            S += nums[i];
            S2 += (long long)nums[i] * (long long)nums[i];
        }
        long long val_1 = S - SN;
        long long val_2 = S2 - S2N;
        val_2 = val_2/val_1;
        long long  x = (val_1 + val_2)/2;
        long long  y = x - val_1;
        return{(int)x,(int)y};

           
    }
};