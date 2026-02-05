#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  bool isPossible(vector<int> &stalls, int k, int minAllowedDist){
      int n=stalls.size();
      int cows=1;
      int lastStallPoss=stalls[0];
      
      for(int i=1; i<n; i++){
          if(stalls[i]-lastStallPoss>=minAllowedDist){
              cows++;
              lastStallPoss=stalls[i];
          }
          if(cows==k){
              return true;
          }
      }return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int n=stalls.size();
        int st=1, end=stalls[n-1]-stalls[0];
        int ans=-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(isPossible(stalls, k, mid)){
                ans=mid;
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};