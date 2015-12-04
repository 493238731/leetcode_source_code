class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> hash(256,0);
        int cnt=0;
        int answer=0;
        int i=0,j=0,len=s.size();
        while(i<len){
            if(hash[s[i]]!=0){
                answer=max(answer,i-j);
                while(hash[s[i]]!=0&&j<i){
                    hash[s[j]]--;
                    j++;
                }//end while
            }//end if
            hash[s[i]]++;
            i++;
        }//end while
        answer=max(answer,i-j);
        return answer;
    }
};
