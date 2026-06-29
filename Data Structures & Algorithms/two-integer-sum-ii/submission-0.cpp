class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> m;


        for(int i=0;i<numbers.size();i++){

int com = target-numbers[i];
if(m.find(com)!=m.end()){
    
  return {m[com]+1,i+1};


}
m[numbers[i]] = i;
        }

        return {};

        
    }
};
