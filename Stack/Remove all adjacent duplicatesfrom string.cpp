class Solution {
public:
    string removeDuplicates(string S) {
  stack<char> st;  
      
    // Store the index of str  
    int i = 0; 
      
    // Traverse the string str 
    while (i < S.length()) 
    { 
          
        // Checks if stack is empty or top of the  
        // stack is not equal to current character  
        if (st.empty() || S[i] != st.top()) 
        { 
            st.push(S[i]); 
            i++; 
        } 
              
        // If top element of the stack is  
        // equal to the current character  
        else
        { 
            st.pop();  
            i++; 
        }  
    } 
      
    // If stack is empty  
    if (st.empty()) 
    { 
        return ""; 
    } 
          
    // If stack is not Empty  
    else
    { 
        string short_string = "";  
        while (!st.empty()) 
        { 
            short_string = st.top() +  
                           short_string; 
            st.pop(); 
        } 
        return (short_string); 
    }
    }
};
