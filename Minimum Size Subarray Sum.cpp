class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(s==0||nums.empty())  return 0;
        int n=nums.size();
        int curSum=0,result=INT_MAX;
        for(int i=0,j=0;i<n;++i){
            curSum+=nums[i];
            if(curSum>=s){
                while(i>=j&&curSum>=s){
                    curSum-=nums[j++];
                }
                result=min(result,i-j+2);
            }
        }
        return result==INT_MAX?0:result;
    }
};
