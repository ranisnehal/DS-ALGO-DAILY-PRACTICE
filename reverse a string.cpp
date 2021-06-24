You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
  
  Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
  
  ************************************************************************************************************************************************************
  
  #include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends
void swap(char &a,char &b){
    char temp=a;
    a = b;
    b = temp;
}

string reverseWord(string str){
    
  int i=0;
  int j= str.length()-1;
  
  while(i<j)
  swap(str[i++],str[j--]);
  
  return str;
}
