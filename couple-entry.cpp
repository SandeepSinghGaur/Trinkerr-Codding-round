#include<bits/stdc++.h>
using namespace std;

int total_pair_count(vector<int>&A){
     int n=A.size();
     int total_pair=0;
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(A[i]==A[j]){
                total_pair++;
             }
         }
     }
     return total_pair;
}
int main(){
    int n;
    cin>>n;
    //taking array of colors
    vector<int>colors(n);
    for(int i=0;i<n;i++){
        cin>>colors[i];
    }

    cout<<total_pair_count(colors);
}
