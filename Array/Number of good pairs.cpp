//brute force solution 
//Its the o(n^2)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i;j<nums.size();j++)
                {
                    if(nums[i]==nums[j] && i<j)
                        ans++;
                }
        }
        return ans;
    }
};
