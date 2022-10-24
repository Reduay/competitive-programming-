class Solution {
    void flip(vector<int>& arr,int idx){
        for(int i=0;i<=idx/2;i++){
int tmp=arr[i];
            arr[i]=arr[idx-i];
            arr[idx-i]=tmp;
        }
}
public:
    vector<int> pancakeSort(vector<int>& arr) {
        
        vector<int>result;
        for(int i=arr.size()-1;i>0;i--){ 
            for(int j=1;j<=i;j++){
                if (arr[j]==i+1){
                    flip(arr,j);
                    result.push_back(j+1);
                    break;
                    }
            }
                flip(arr,i);
                result.push_back(i+1);
}
            return result;
}
};
        
    
