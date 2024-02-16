class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m1;
        for(int i = 0; i < arr.size();i++){
            m1[arr[i]]++;
        }
        vector<pair<int,int>> nums;
        map<int, int>::iterator it = m1.begin();
        while (it != m1.end()) {
            pair<int,int> p1;
            p1.first = it->second;
            p1.second = it->first;
            nums.push_back(p1);
            ++it;
        }
        sort(nums.begin(),nums.end());
        int i = 0;
        for(;i < nums.size();i++){
            if(nums[i].first <= k){
                k-=nums[i].first;
            }else{
                break;
            }
        }
        return nums.size()-(i);
    }
};