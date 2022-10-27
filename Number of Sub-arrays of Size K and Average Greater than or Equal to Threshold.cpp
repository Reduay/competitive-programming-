class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,count=0;
        float averg=0;
        int i,j;
        
        for( i=0;i<k;i++){
            sum+=arr[i]; 
            
}
        if(sum/k>=threshold) 
              count++;
        
        while(i<arr.size()){
           
              sum-=arr[j];
              sum+=arr[i];
             if(sum/k>=threshold) 
              count++;
              j++;
              i++;
          
}     return count;
        
    }
};
