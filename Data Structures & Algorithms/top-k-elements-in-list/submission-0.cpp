class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
                m[nums[i]]++;
        while(k)
        {
            int max=-1,val_max;
            
            for(auto [val,freq] : m)
            {
                if(max<freq){
                    val_max=val;
                    max=freq;
                }
                    
            }
            v.push_back(val_max);
            m.erase(val_max);
            k--;
        } 
        return v;       
    }
};
