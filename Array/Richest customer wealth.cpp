class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        if(n==0)
            return 0;
        int ans =0;
        int m= accounts[0].size();
        for(int i=0; i<n;i++)
        {
            int res=0;
            for(int j=0;j<m;j++)
            {
                res = res+accounts[i][j];
            }
            ans =max(res,ans);
        }
        return ans;
    }
};
