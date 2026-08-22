class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector <int> c;
        int maxi = arr[n - 1];
        c.push_back(-1);
        for(int i = n - 2;i >= 0;i--) {
           c.push_back(maxi);
           maxi = max(arr[i],maxi);
            
        }
        reverse(c.begin(),c.end());
        return c;
    }
};