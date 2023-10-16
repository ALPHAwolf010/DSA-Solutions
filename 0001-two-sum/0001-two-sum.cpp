class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
         vector<int>v1;
         unordered_map<int,int>m1;
       for(int i=0;i<nums.size();i++)
        {
            int val=target-nums[i];

            if(m1.find(val)!=m1.end())
             {
                 v1.push_back(m1[val]);
                 v1.push_back(i);
                 return v1;
             }
             else
               m1[nums[i]]+=i;
        } 
         return v1;
    }
};