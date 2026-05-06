class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int size=digits.size();
        int last_digit=digits[size-1];
        int carry =(last_digit+1)/10;
        ans.push_back((last_digit+1)%10);
        for(int i=size-2;i>=0;i--)
        {
            int num = digits[i]+carry;
            ans.push_back(num%10);
            carry =num/10;
        }
        if(carry ==1)
        {
            ans.push_back(1);
        }
        reverse(ans.begin(),ans.end());
        return ans ;
    }
};