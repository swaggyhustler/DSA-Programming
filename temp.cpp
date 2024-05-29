#include<bits/stdc++.h>
using namespace std;

void quick_sort(int *, int, int);
int partition(int *, int, int);

int main(){
    int arr[]={5,3,6,12,24,21,9,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr, 0, n-1);
    for(int x=0; x<n; x++){
        cout<<arr[x]<<" ";
    }
    return 0;
}

void quick_sort(int arr[], int low, int high){
    if(low<high){
        int pivot=partition(arr, low, high);
        quick_sort(arr, low, pivot-1);
        quick_sort(arr, pivot+1, high);
    }
}

int partition(int arr[], int low, int high){
    int i=low, j=high, pivot=low;
    while(i<j){
        while(i<=high && arr[i]<=arr[pivot]){
            i++;
        }
        while(j>=low && arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[pivot]);
    return j;
}