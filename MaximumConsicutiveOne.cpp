class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0,onecount=0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i]==0){
                onecount=0;
            }
            else{
                onecount++;
                maxcount=max(maxcount,onecount);
            }
            
        }
      
    return maxcount;
    }
};
