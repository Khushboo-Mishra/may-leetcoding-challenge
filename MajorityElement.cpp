class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 1;
        for(int i=1; i< nums.size(); i++)
        {
            if(nums[i]==nums[candidate])
            {
                count ++;
            }
            else{
                count --;
            }
            if(count == 0)
            {
                candidate = i;
                count = 1;
            }
        }
        int candidate_frequency = 0;
        for(int i =0; i<nums.size();i++)
        {
            if(nums[i]==nums[candidate])
            {
                candidate_frequency ++;
            }
        }
        if(candidate_frequency > nums.size()/2)
            return nums[candidate];
        else
            return -1;
    }
};
