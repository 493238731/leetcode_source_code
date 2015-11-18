class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int,vector<int>> s;
        for(int i=0,len=nums.size();i<len;i++){
            s[nums[i]].push_back(i);
        }//end for
        for(int i=0,len=nums.size();i<len;i++){
            map<int,vector<int>>::iterator iter1=s.find(target-nums[i]);
            if(target!=2*nums[i]){
                if(iter1!=s.end()){
                    ans.push_back(i+1);
                    ans.push_back((iter1->second)[0]+1);
                    break;
                }//end if
            }//end if
            else{
                if((iter1->second).size()>1){
                    ans.push_back((iter1->second)[0]+1);
                    ans.push_back((iter1->second)[1]+1);
                    break;
                }
            }//end else
        }//end for
        return ans;
    }//end public
};
//below copy from others
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i, sum;
        vector<int> results;
        map<int, int> hmap;
        for(i=0; i<numbers.size(); i++){
            if(!hmap.count(numbers[i])){
                hmap.insert(pair<int, int>(numbers[i], i));
            }
            if(hmap.count(target-numbers[i])){
                int n=hmap[target-numbers[i]];
                if(n<i){
                    results.push_back(n+1);
                    results.push_back(i+1);
                    //cout<<n+1<<", "<<i+1<<endl;
                    return results;
                }
            }
        }
        return results;
    }
};

