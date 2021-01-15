class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        int k=0;;
        for(int i =0;i<n;i++)
        {
            arr[i] = start + 2*i;
            k=k^arr[i];
            
        }
        
        return k;
    }
};
