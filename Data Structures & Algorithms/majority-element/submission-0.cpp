class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int ans;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                ans=nums[i];
            }
            else if(ans==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans){
                count1++;
            }
        }
        if(count1>nums.size()/2){
            return ans;
        }
        return -1;
    }
};