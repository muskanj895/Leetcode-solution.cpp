class Solution {
public:
    bool isValid(string s) {
        int length=s.length();
        if(length == 0)
            return true;
       
        stack<char> k;
        for(int i=0;i<length;i++){
            if(s[i] == '(' || s[i]=='{' || s[i] == '['){
                k.push(s[i]);
                continue;
            }
         if(s[i] == ')' || s[i]=='}' || s[i] == ']'){
             if(k.empty())
                 return false;
             char temp=k.top();
             k.pop();
                 
             if((temp =='(' && s[i] == ')') ||(temp =='{' && s[i] == '}') ||(temp =='[' && s[i] == ']') )
             {
                 continue;
             }
             else
                 return false;
             
         }}
       if(k.empty())
           return true;
        else
            return false;
        
    }
};
