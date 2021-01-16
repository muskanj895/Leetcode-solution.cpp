class Solution {
public:
    int minOperations(vector<string>& logs) {
        int sum=0;
        stack<int> k;
       
        for(auto x : logs)
        {
            if(x == "../" && !k.empty()  )
            {
               
                k.pop();}
            else if((x=="./") || x=="../" && k.empty()) {  
                continue;
            }
            else
            {
                k.push(1);
            }
                
        }
        
        while(!k.empty())
        {
            cout<<k.top()<<" ";
            sum+=k.top();
            k.pop();
        }
        return sum > 0 ? sum : 0;
        
    }
};
