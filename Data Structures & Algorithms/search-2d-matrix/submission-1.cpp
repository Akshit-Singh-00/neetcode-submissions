class Solution {
public:
   bool binary_search(vector<int> arr,int target){
        int left=0;
        int right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                return true;
            }
            else if(arr[mid]<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
            
            
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][0]<=target && target <=matrix[i][m-1]){
                    return binary_search(matrix[i],target);
                }
            }
        }
        return false;
    }
};
