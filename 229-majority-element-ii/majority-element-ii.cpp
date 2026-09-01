class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        vector <int>c;
        for(int i = 0;i < nums.size();i++) {
            mpp[nums[i]]++;
            if(mpp[nums[i]] > nums.size()/3) {
                if(find(c.begin(), c.end(), nums[i]) == c.end()) {
                c.push_back(nums[i]);
            }
            }
        }
        return c;
    }
};