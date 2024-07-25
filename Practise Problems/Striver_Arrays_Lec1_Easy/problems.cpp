#include<bits/stdc++.h>
using namespace std;
void noAppearsOnes();
void maxCountOfOnes();
void longestConsecutiveSumEqualToKApproach1( int );
void longestConsecutiveSumEqualToKApproach2( int );
void longestConsecutiveSumEqualToKApproach3( int );
int main(){
    longestConsecutiveSumEqualToKApproach3(6);
    return 0;
}
void longestConsecutiveSumEqualToKApproach3(int k){
    vector<int> arr={1,2,3,1,1,1,1,3,3};
    int k=4;
    int i=0, j=0, sum=arr[0], max_len=0;
    while(i<arr.size() && j<arr.size()){
        while(i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
        if(sum==k){
            max_len=max(max_len, j-i+1);
        }
        j++;
        if(j<arr.size()){
            sum+=arr[j];
        }
    }
    cout<<max_len<<endl;
}
void longestConsecutiveSumEqualToKApproach2(int k){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    map<int, int> preSumMap;
    int max_len=0, sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
        if(sum==k){
            max_len=max(max_len, i+1);
        }
        int rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            max_len=max(max_len, i-preSumMap[rem]);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    cout<<max_len<<endl;
}
void longestConsecutiveSumEqualToKApproach1(int k){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    int sum=0, max_len=0;
    for(int i=0; i<arr.size(); i++){
        sum=0;
        for(int j=i; j<arr.size(); j++){
            sum+=arr[j];
            if(sum==k){
                max_len=max(max_len, j-i+1);
                cout<<sum<<" , "<<max_len<<endl;
            }
        }
    }
    cout<<max_len<<endl;
}
void noAppearsOnes(){
    vector<int> arr={3,3,5,7,4,7,5,8,6,8,6};
    int xor1=0;
    for(int i=0; i<arr.size(); i++){
        xor1^=arr[i];
    }
    cout<<xor1<<endl;
}
void maxCountOfOnes(){
    vector<int> arr={1,0,1,1,0,1};
    int left=0, maxi=0;
    while(left<arr.size()){
        int count=0;
        while(left<arr.size() && arr[left]==0){
            left++;
        }
        while(left<arr.size() && arr[left]==1){
            count++;
            left++;
        }
        maxi=max(count, maxi);
    }
    cout<<maxi<<endl;
}