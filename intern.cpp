#include<bits/stdc++.h>
using namespace std;

vector<vector<string>>find_anagram(vector<string>&str){
     int n=str.size();
     vector<vector<string>>result;
     for(int i=0;i<n;i++){
         unordered_map<char,int>um;
         int len=str[i].length();
         for(int j=0;j<len;j++){
             um[str[i][j]]++;
         }
         result[i].push_back(str[i]);
         int count_len=um.size();
         for(int k=i+1;k<n;k++){
             int p=str[k].length();
             int s=0;
             while(p>0){
                if(um.find(str[k][s])!=um.end()){
                    count_len--;
                }else{
                    break;
                }
             }
        if(count_len==0){
            result[i].push_back(str[k]);
        }
        count_len=um.size();
             
         }

     }
     return result;

}

int main(){
    int n;
    cin>>n;
    //taking array of colors
    vector<string>Keys(n);
    for(int i=0;i<n;i++){
        cin>>Keys[i];
    }
    vector<vector<string>>result;
    result=find_anagram(Keys);
    for(int i=0;i<n;i++){

    }

    
}

