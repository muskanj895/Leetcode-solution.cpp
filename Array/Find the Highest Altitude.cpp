class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> res;
        int maxi=0;
        res.push_back(0);
        for(int i =0;i<gain.size();i++)
        {
            res.push_back(res[i]+gain[i]);
            maxi= max(res[i+1],maxi);
            
        }
        return maxi;
    }
};
