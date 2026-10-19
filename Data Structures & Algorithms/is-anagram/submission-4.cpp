class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> umap;
        unordered_map<char, int> umap2;
        for(int i = 0; i < s.size(); i++){
            umap[s[i]] += 1;
            umap2[t[i]] += 1;
        }
        return umap == umap2;
    }
};
