class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int input=1;
        for(int i=0;i<target.size();)
        {
            if(input == target[i])
            {
                s.push_back("Push");
                input++;
                i++;
            }
            else
            {
                s.push_back("Push");
                s.push_back("Pop");
                input++;
            }
        }
        
        return s;
    }
};
