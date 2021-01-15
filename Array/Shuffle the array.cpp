class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> k;
       int i=0;
        int j=n;
        while(i<n)
        {
            k.push_back(nums[i]);
            i++;
            k.push_back(nums[j]);
            j++;
        }
        return k;
    }     
};
