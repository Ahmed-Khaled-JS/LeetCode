class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        vector<pair<int,int>> vp(n);
        int m = 0;
        for(int i: nums){
            vp[m].first = i;
            vp[m].second = m;
            m++;
        }
        sort(vp.begin(),vp.end());
        int l = 0,r = n-1;
        while(l < r){
            if(vp[r].first + vp[l].first == target){
                ans.push_back(vp[l].second);
                ans.push_back(vp[r].second);
                break;
            }else if(vp[r].first + vp[l].first > target){
                r--;
            }else{
                l++;
            }
        }
        return ans;
    }
};