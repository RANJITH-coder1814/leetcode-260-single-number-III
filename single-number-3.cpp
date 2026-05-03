class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;
        
        // Step 1: XOR all elements
        for (int num : nums) {
            xr ^= num;
        }
        
        // Step 2: Find rightmost set bit
        int diff = xr & (-xr);
        
        int a = 0, b = 0;
        
        // Step 3: Divide into two groups
        for (int num : nums) {
            if (num & diff)
                a ^= num;
            else
                b ^= num;
        }
        
        return {a, b};
    }
};
