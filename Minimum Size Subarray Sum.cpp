//O(2*n)
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


//O(n*lg n) MLT overflow
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(s==0||nums.empty())  return 0;
        int n=nums.size();
        int result=minSubArrayLen(nums,0,n-1,s);
        return result;
    }
private:
    int minSubArrayLen(vector<int> nums,int lo,int hi,int s){
        if(lo==hi)  return nums[lo]>=s?1:INT_MAX/2;
        int mid=lo+(hi-lo)/2;
        int minLen=partition(nums,lo,mid,hi,s);
        return min(min(minSubArrayLen(nums,lo,mid,s),minSubArrayLen(nums,mid+1,hi,s)),minLen);
    }
    int partition(vector<int> nums,int lo,int mid,int hi,int s){
        int sum=0;
        for(int i=lo;i<mid+1;++i)  sum+=nums[i];
        int end=mid+1,start=lo;
        int minLen=INT_MAX/2;
        while(start<=mid&&end<=hi){
            sum+=nums[end];
            if(sum>=s){
                while(start<=mid&&sum>=s)
                    sum-=nums[start++];
                minLen=min(minLen,end-start+2);
            }
            end++;
        }
        return minLen==INT_MAX/2?0:minLen;
    }
};
