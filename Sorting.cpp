#include<bits/stdc++.h>
using namespace std;
void selection_sort();
void bubble_sort();
void insertion_sort();
void merge_sort(int *, int , int );
void merge(int *, int, int, int);
void recurr_bubble_sort(int *, int );
void recurr_insertion_sort(int *, int, int);
void quick_sort(int *, int, int);

int arr[]={8,3,7,2,9,8,3,7,4,5,8,0,9};

int main(){
    // int nums[]={4,3,6,2,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // recurr_insertion_sort(arr, 0, n);
    quick_sort(arr, 0, n-1);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}

void selection_sort(){
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int min=i;
        // while(j<n){
        //     if(arr[min]>arr[j]){
        //         min=j;
        //     }
        //     j++;
        // }
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }
}
void bubble_sort(){
    int n=sizeof(arr)/sizeof(arr[0]);
    bool isSwapped=false;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSwapped=true;
            }
        }
        if(!isSwapped){
            break;
        }
        cout<<"run"<<endl;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void insertion_sort(){
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void merge_sort(int nums[], int low, int high){
    if(low>=high){
        return;
    }
    int mid=low+(high-low)/2;
    merge_sort(nums, low, mid);
    merge_sort(nums, mid+1, high);
    merge(nums, low, high, mid);
}

void merge(int nums[], int low, int high, int mid){
    int left=low, right=mid+1, j=0;
    int temp[low+(high-low)];
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp[j]=nums[left];
            left++;
        }else{
            temp[j]=nums[right];
            right++;
        }
        j++;
    }
    while(left<=mid){
        temp[j]=nums[left];
        j++;
        left++;
    }
    while(right<=high){
        temp[j]=nums[right];
        j++;
        right++;
    }
    for(int x=low; x<=high; x++){
        nums[x]=temp[x-low];
    }
}

void recurr_bubble_sort(int arr[], int n){
    if(n==1){
        return;
    }
    bool isSwapped=false;
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            isSwapped=true;
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    if(isSwapped) recurr_bubble_sort(arr, n-1);
    else return;
}

void recurr_insertion_sort(int arr[], int i, int n){
    if(i>=n){
        return;
    }
    int j=i;
    while(j>0 && arr[j]<arr[j-1]){
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
        j--;
    }
    recurr_insertion_sort(arr, i+1, n);
}

void quick_sort(int arr[], int low, int high){
    int i=low+1, j=high, pivot=low;
    if(low>=high){
        return;
    }
    while(i<j){
        while(i<=high && arr[i]<=arr[pivot]){
            i++;
        }
        while(j>low && arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[pivot]);
    quick_sort(arr, low, j-1);
    quick_sort(arr, j+1, high);
}