#include<bits/stdc++.h>
using namespace std;
void freq_counter_numbers();
void freq_counter_string();
void freq_counter_numbers_map();
void max_min_freq();
int main(){
    max_min_freq();
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
void max_min_freq(){
    int arr[]={10,5,10,15,10,5};
    unordered_map<int, int> unord_map;
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        unord_map[arr[i]]+=1;
    }
    unordered_map<int, int>::iterator it;
    // it=unord_map.begin();
    // while (it!=unord_map.end()){
    //     cout<<it->first<<" : "<<it->second<<endl;
    //     it++;
    // }
    pair<int, int> max_ele={0,0};
    pair<int, int> min_ele={0,100};
    for(auto x: unord_map){
        if(min_ele.second>x.second){
            min_ele.first=x.first;
            min_ele.second=x.second;
        }
        if(max_ele.second<x.second){
            max_ele.first=x.first;
            max_ele.second=x.second;
        }
    }
    cout<<"Mininum times repeated element is "<<min_ele.first<<" for "<<min_ele.second<<" times"<<endl;
    cout<<"Max Repeated element is "<<max_ele.first<<" for "<<max_ele.second<<" times";
}