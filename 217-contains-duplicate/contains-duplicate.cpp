class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m1;
        for(int num:nums){
            if(m1[num])
                return true;
            m1[num]++;
        }
        return false;
    }
};