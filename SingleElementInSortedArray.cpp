class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int l=0;
       int r=nums.size()-1; 
       while (l < r) {
            const int m = l + (r - l) / 2;
            int n = m % 2 == 0 ? m + 1 : m - 1;
            if (nums[m] == nums[n])
                l = m + 1;
            else
                r = m;
        }
        return nums[l];
    }
};
