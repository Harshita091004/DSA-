class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx = nums[0];
        int mn = nums[0];
        for (int i = 0; i < nums.size(); i++) {

            if (mx < nums[i])
                mx = nums[i];
            if (mn > nums[i])
                mn = nums[i];
        }
        //int gcd = 1;
        // (int i = 1; i <= mn; i++) {
            //if (mn % i== 0 && mx % i == 0)
             //   gcd = i;
    //    }
    
    //return gcd;
    int rem = mx % mn;
    while(rem !=0)
    {
        mx = mx/mn;
        mx =mn ;
        mn = rem;
        rem = mx%mn;
    }
    return mn ;
    }

};