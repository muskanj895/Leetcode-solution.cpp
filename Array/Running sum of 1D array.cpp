class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> k;    
        int sum=0;
            for(int j=0;j<nums.size();j++)
            {
                sum += nums[j];
                k.push_back(sum);    
            }
        return k;
    }
};
