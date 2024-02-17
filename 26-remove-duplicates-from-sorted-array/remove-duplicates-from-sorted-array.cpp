class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s1;
        for(int i:nums)
            s1.insert(i);
        nums.clear();

        for(int i:s1)
            nums.push_back(i);
        return s1.size();    
    }
};