class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.count(x))
            return true;

            else (seen.insert(x));
        }
        return false;
        
    }
};