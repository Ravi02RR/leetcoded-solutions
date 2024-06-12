class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zcount=0;
        int oCount=0;
        int tcount=0;


        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zcount++;
            else if(nums[i]==1)oCount++;
            else tcount++;

        }
        for(int i=0;i<nums.size();i++){
           if(i<zcount) nums[i]=0;
           else if(i<(zcount+oCount)) nums[i]=1;
           else nums[i]=2;
       }


    }
};