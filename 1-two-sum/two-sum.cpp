class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
        int rem;
        for(int i = 0;i < nums.size();i++) {
            int a = nums[i];
            rem = target - a;
            if(mpp.find(rem) != mpp.end()) {
                return{mpp[rem],i};
            }
            mpp[a] = i;
        }
        return {};
    }
};