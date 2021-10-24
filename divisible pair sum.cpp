Given an array of integers and a positive integer k , determine the number of (i,j) pairs where (i<j) and ar[i] + ar[j]  is divisible by k .
  
  // example 
  // ar[]=[1,2,3,4,5,6] and k= 5
  Three pairs meet the criteria: [1,4] ,[2,3],[4,6]
  // sample input:
  6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]

// output = 5

#include<bits/stdc++.h>
using namespace std;

vector<string>split_string(string);

int divisibleSumPairs(int n, int k, vector<int> ar) {                //TC=O(N^3)    SC= O(1)
  for(int i=0;i<n;i++)
  {
    ar[i]=ar[i]%k;
    
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
      m[ar[i]]++;
    int count = 0;
    for(int i= 0;i<n;i++){
      m[ar[i]]--;
      
      int ans= k-ar[i];
      ans= (ans%k);
      
      count+=m[ans];
    }
    return count;
  }
    
