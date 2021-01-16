class Solution {
public:
    void reverseString(vector<char>& s) {
        int l =s.size();
        int j=0;
        int k=l-1;
        for(int i=0;i<l;i++)
        {
            while(j<k)
            {
                swap(s[j],s[k]);
                j++;
                k--;
            }
        }
        
    }
};
