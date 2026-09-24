class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> grupuri;

        for (string s : strs) {
            string cheie = s;
            sort(cheie.begin(), cheie.end());
            grupuri[cheie].push_back(s);
        }

        vector<vector<string>> v;
        for(auto& [cheie, grup] : grupuri)
        {
            v.push_back(grup);
        }
        return v;
    }
};
