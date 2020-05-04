class Solution {
public:
    int findComplement(int num) {
        
        int  count_of_bits = (int)log2(num) + 1;
        return pow(2,count_of_bits) - num -1;
    }
};
