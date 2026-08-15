class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        vector<int> ans(nums.size());
            int k=nums.size()-1;
        while(left<=right){
            if( abs(nums[left]) < abs(nums[right]) ) {
                ans[k]=nums[right]*nums[right];
                k--;
                right--;
            }
            else{
                ans[k]=nums[left]*nums[left];
                k--;
                left++;
            }
        }
        return ans;
    }
};