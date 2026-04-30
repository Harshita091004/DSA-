class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n =nums.size();
      int natural = n*(n+1)/2;
      int sum_arr=0;
      for(int i:nums) 
      {
        sum_arr+=i;
      }
      return natural - sum_arr;  
    }
};