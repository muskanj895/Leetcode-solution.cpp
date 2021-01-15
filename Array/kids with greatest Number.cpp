class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest=0;
        for(int i=0;i<candies.size();i++)
        {
            greatest=max(greatest,candies[i]);
        }
        vector<bool> k;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= greatest)
                k.push_back(true);
            else
                k.push_back(false);
        }
        return k;
        
    }
};
