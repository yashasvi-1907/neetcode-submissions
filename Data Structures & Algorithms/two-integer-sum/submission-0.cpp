class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
      {
        unordered_map<int, int> m;
size_t sz=nums.size();
        vector<int> indexes;

        for (int i = 0; i < (int)nums.size(); ++i)
        {
            int required = target - nums[i];
            auto iter = m.find(required);
            if (iter != m.end())
            {
                indexes.push_back(iter->second);
                indexes.push_back(i);
                return indexes;
            }
            m.insert({nums[i], i});
        }
        return indexes;
    }
};
