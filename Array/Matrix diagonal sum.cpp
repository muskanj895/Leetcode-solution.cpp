class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int secondary=0, principal=0, common=0;
        for(int i=0;i<mat.size();i++)
        {           
                    principal +=mat[i][i]; 
                   secondary += mat[i][mat.size() - i - 1];
            if(mat.size() %2==1)
            {
                int k=mat.size()/2;
                common=mat[k][k];
                
            }
        }   
                
               
       return principal+secondary-common; 
    }
};
