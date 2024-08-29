class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int num1=getfst(nums,target);
        int num2=getlast(nums,target);
        return {num1,num2};
    }
private:
    int getfst(vector<int>& nums, int target){
        int first=-1;
        int right=nums.size()-1;
        int left=0;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                first=mid;
                right=mid-1;

            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }

        return first;
    }
    int getlast(vector<int>& nums, int target){
        int first=-1;
        int right=nums.size()-1;
        int left=0;

        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                first=mid;
                left=mid+1;

            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else {
                left=mid+1;
            }
        }

        return first;
    }

};