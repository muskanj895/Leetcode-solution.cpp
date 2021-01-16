class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> k;
        int sum=0;
        int l=ops.size();
        for(auto x: ops)
        {
            if(x == "C" && !k.empty())
            {
                k.pop();
            }
            else if(x == "D" && !k.empty())
            {
                
                
                k.push(2*k.top());
            }
            else if(x == "+" && !k.empty())
            {
                int j =k.top();
                k.pop();
                int m=k.top();
                k.push(j);
                k.push(j+m);
            }
            else
            {
                k.push(stoi(x) );
            }
        }
        while( !k.empty())
        {
           sum += k.top();
            k.pop();
        }
        return sum;
    }
};
