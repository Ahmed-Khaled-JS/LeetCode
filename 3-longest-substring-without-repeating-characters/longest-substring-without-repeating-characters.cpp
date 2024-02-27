class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j= 0,maxlenght = 1;
        map<char,int> m1;
        if(!s.size())
            return 0;
        m1[s[i]]++;
        while(j< s.size()-1){
            if(!m1[s[j+1]]){
                j++;
                m1[s[j]]++;
                maxlenght = max(maxlenght,(j-i+1));
            }else{
                m1[s[i]]--;
                i++;
            }
        }
        return maxlenght;
    }
};