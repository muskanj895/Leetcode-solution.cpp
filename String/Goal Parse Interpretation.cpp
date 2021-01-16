class Solution {
public:
    string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();)
        {
            if(command[i] == '(' && command[i+1] == ')'){
                s += "o";
                i+=2;
            }
                else if(command[i] == '(' && command[i+1] =='a' &&  command[i+2] =='l' && command[i+3] == ')')
                { s += "al";
                 i+=4;}
            else
            {s += command[i];
             i++;}
        }
        return s;
    }
};
