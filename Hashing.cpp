#include<bits/stdc++.h>
using namespace std;
void freq_counter_numbers();
void freq_counter_string();
void freq_counter_numbers_map();
int main(){
    freq_counter_numbers_map();
    return 0;
}
void freq_counter_numbers(){
    int *arr, size;
    cin>>size;
    arr=new int(size);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int freq[size+1]={0};
    for(int j=0; j<size; j++){
        freq[arr[j]]+=1;
    }
    for(int i=0; i<size; i++){
        cout<<freq[i]<<" ";
    }
}
void freq_counter_string(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    //pre compute
    int hash[27]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;
    while(q--){
        char querie;
        cin>>querie;
        //fetch
        cout<<hash[querie-'a']<<endl;
    }
}

void freq_counter_numbers_map(){
    unordered_map<int, int> map;
    int *arr, size;
    cin>>size;
    arr=new int(size);
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i++){
        map[arr[i]]++;
    }
    for(auto m:map){
        cout<<m.first<<" : "<<m.second<<endl;
    }
}