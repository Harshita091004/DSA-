class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
for(int i=0;i<nums.size();i++)
{
    mp[nums[i]]++;
}
int size=nums.size();
for(auto m:mp)
{
    if(m.second>size/2)
    {
        return m.first;
    }
}
return 0;
    }
};