#include<bits/stdc++.h>
using namespace std;
void pair_example();
void vector_example();
void priority_queue_example();
void set_example();
void map_example();
void sorting_example();
bool comp(pair<int, int>, pair<int, int>);
void remaining();
int main(){
	remaining();
	return 0;

}
void pair_example(){
	 /*
	//Example usecase
	pair<int, int> p={1,2};
	cout<<p.first<<endl;
	cout<<p.second<<endl;
	*/
	//Initializing array of type pair is also possible
	pair<int, int> arr[]={{1,2}, {2,3}, {3,4}};
	for(int i=0; i<(sizeof(arr)/sizeof(arr[0])); i++){
		cout<<arr[i].first<<" "<<arr[i].second<<endl;
	}
}
void vector_example(){
	/*
	vector<int> v;
	v.emplace_back(1);
	v.push_back(2);
	v.emplace_back(3);
	v.push_back(4);
	for(int i: v){
		cout<<i<<" ";
	}
	*/

   	//Initialize vector with default values
   	vector<int> v;
	for(int i=0; i<5; i++){
		v.push_back(i+1);
	}
	// vector<int>::iterator it=v.begin();
	// cout<<*it<<endl;
	for(auto it=v.begin(); it!=v.end(); it++){
		cout<<*it<<" ";
	}
	// use erase to remove any number of elements from vector
	// v.erase(v.begin()+1, v.end()-2);
	// cout<<endl;
	// for(auto i : v){
	// 	cout<<i<<" ";
	// }
	v.insert(v.begin(), 2, 10);
	cout<<endl;
	for(auto i: v){
		cout<<i<<" ";
	}
}
void priority_queue_example(){
	priority_queue<int> pq;
	pq.push(10);
	pq.push(19);
	cout<<pq.top();
}
void set_example(){
	set<int> s;
	s.insert(4);
	s.insert(2);
	s.insert(10);
	for(auto i: s){
		cout<<i<<" ";
	}
}
void map_example(){
	map<int, int> m;
	m.insert({1,3});
	m.insert({2,4});
	for(auto i: m){
		cout<<i.first<<" : "<<i.second<<endl;
	}
	cout<<m[2];
}
void sorting_example(){
	// vector<int> v={4,5,3,6,1};
	// sort(v.begin(), v.end(), greater<int>());
	// for(auto i:v){
	// 	cout<<i<<" ";
	// }
	/*******Sorting the elements in my way********/
	pair<int, int> p[]={{1,2}, {2,1}, {4,1}};
	sort(p, p+3, comp);
	for(auto i:p){
		cout<<i.first<<" : "<<i.second<<" ";
	}
}
bool comp(pair<int, int> a, pair<int, int> b){
	if(a.second<b.second) return true;
	if(a.second>b.second) return false;
	if(a.first>b.first) return true;
	return false;
}
void remaining(){
	string s="321";
	sort(s.begin(), s.end());
	do{
		cout<<s<<" ";
	}while(next_permutation(s.begin(), s.end()));
	int arr[]={4,2,6,1};
	cout<<*max_element(arr, arr+(sizeof(arr)/sizeof(arr[0])));
	cout<<__builtin_popcount(2);
}