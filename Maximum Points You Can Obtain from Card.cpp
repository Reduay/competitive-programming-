class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
       
        int n = cp.size();
        int i = n-k, cursum = 0, tots = 0,j = 0;
        
        for(int j=0; j<i; j++){
            cursum+=cp[j];
            tots+=cp[j];
        } 
        int mnsum = cursum;
        
        for(int l = i; l<n; l++){
            tots+=cp[l];
            
            cursum-=cp[j++];
            cursum+=cp[l];
            
            mnsum = min(mnsum, cursum);
        }
        
        return tots-mnsum;
    }
    
};