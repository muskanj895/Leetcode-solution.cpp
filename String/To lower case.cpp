class Solution {
public:
    string toLowerCase(string str) {
        string s="";
        for(int i=0;i<str.length();i++)
        {
            s += tolower(str[i]);
        }
        return s;
    }
};
