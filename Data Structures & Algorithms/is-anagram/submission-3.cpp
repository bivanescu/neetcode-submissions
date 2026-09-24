class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return 0;
        int v[26]={0};
        for(char c:s) v[c-'a']++;
        for(char c:t) v[c-'a']--;
        for(int i=0;i<26;i++)
            if(v[i]!=0) return 0;
        return 1;    
    }
};
