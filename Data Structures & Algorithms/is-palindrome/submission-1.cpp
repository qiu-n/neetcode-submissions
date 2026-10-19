class Solution {
public:
    bool isPalindrome(string s) {
        string s_inv;
        string s_ori;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                s_ori.push_back(tolower(s[i]));
            }
            if(isalnum(s[s.size() - 1 - i])){
                s_inv.push_back(tolower(s[s.size() - 1 - i]));
            }
        }
        return s_inv == s_ori;
    }
};
