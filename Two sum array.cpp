Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].


// 1st approach  brute force  
  // two loops i and j and i will be the starting index of the array and j will be i+1 and each time target will be subtracted from i and if target-i = j then the pair would be taken else i will move to next index .
  
  class solution{
    public:
    vector<int>twosum(vector<int>&nums,int target){
      vector<int>out;
      for(int i =0;i<nums.size-1;i++){                          // TC = O(N2)   SC= O(1)
        for (int j=i+1;j<nums.size;j++){
          if(nums[i]+nums[j] == target)
          {
            out.push_back(i);
            out.push_back(j);
            return out;
          }
        }
      }
      return out;
    }
  };

//2nd approach using hash map
// we will take a hash table and subtract each index i from target and if the ans is not in the right part of the array then it is put in the hash table along with its index number and the index i is move further and the process continues until we get the pair and the ans is returned as (index,pointer).

class solution{
  public:
  vector<int>twosum(vector<int>&nums,int target){
  vector<int>ans;
    unordered_map<int,int>map;                     TC= O(N)  SC=O(N)    
    for(int i= 0;i<nums.size();i++){
      if(map.find(target = nums[i])!=map.end()){
        ans.push_back(map[target-num[i]]);
        ans.push_back(i);
        return ans;
      }
      map[nums[i]]=i;
    }
    return ans;
  }
};
          
