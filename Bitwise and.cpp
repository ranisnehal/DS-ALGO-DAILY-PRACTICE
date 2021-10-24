Given set S={1,2,3...N} . Find two integers, A and B (where A<B), from set S  such that the value of A&B  is the maximum possible and also less than a given integer, K. In this case,  &represents the bitwise AND operator.

Input Format

The first line contains an integer,T , the number of test cases.
Each of the T subsequent lines defines a test case as 2 space-separated integers,N  and K, respectively.
Sample Input

3
5 2
8 5
2 2
Sample Output

1
4
0

// EXPLANATION :
Bitwise and conditions:
  1 & 1 = 1, 1 & 0 = 0; 0 & 1= 0;  0 & 0 = 0;
eg= 12 = 00001100  and 25= 000110001
  then 12+25 = 00001000 ie 8 in decimal
  
  #include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if((v[i]&v[j])<k && (v[i]& v[j])>max){
                    max=(v[i]&v[j]);
                    
                }
            }
        }
        cout<<max<<endl;
        t--;
    }
}

    
