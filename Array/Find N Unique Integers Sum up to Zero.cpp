class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> k;
        for(int i=1;i<=n/2;i++)
        {
            k.push_back(i);
            k.push_back(-i);
        }
        if(n % 2== 1)
            k.push_back(0);
        sort(k.begin(),k.end());
        return k;
        
    }
};
