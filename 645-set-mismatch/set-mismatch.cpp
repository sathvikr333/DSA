class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int duplicate;
        int missing;
        for(int i = 1;i <= nums.size();i++) {
            int count = 0;
            for(int x:nums) {
                if(x == i) {
                    count++;
                }
            }
            if(count == 2) {
              duplicate = i;
            }
            else if(count == 0) {
                missing = i;
            }
        }
        return {duplicate,missing};
           
    }
};