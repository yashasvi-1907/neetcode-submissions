class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>m;
        for(auto &s:strs)
        {
            vector<int> fr(255,0);
            for(auto c:s) fr[(int)c]++;
            string key;
            key.reserve(511);
            for(auto count:fr)
            {
            key+=char(count);
            key+=",";
        }
        m[key].push_back(s);
    }
    vector<vector<string>> grps(m.size());
    int idx=0;
    for(auto pr:m)
    {
        grps[idx]=move(pr.second);
        idx++;
    }
    return grps;
    }
};
