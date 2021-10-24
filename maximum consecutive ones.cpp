Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
  
  // we wil declare two variables count =0 and max=0 
  // we will check the array values one by one and if the element has 1 the count will be increased one by one and simulataneously max will also be updated and if array element will be 0 the again the count will automatically assigned to 0.
  
  class solution{
    public:
     int find Max Consecutive Ones(vector<int>&nums){
       int count=0;
       int maxi=0;
       for(int i=0;i<nums.size();i++){
         if(nums[i]==1)
         {
           count++;                   // TC= O(N)  SC= O(1)
         }
         else{
           count=0;
         }
         maxi=max(maxi,count);
       }
       return maxi;
     }
  };
