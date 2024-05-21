#include<bits/stdc++.h>
using namespace std;
int total=0;
int n=1;
void gcd();
void recurr1();
void recurr2(int );
void recurr3(int );
void recurr4(int , int );
void n_sum(int );
int n_sum_func(int );
int factorial(int );
void rev_arr(int arr[],int l,int r);
void rev_arr_single_ptr(int *, int ,int );
bool is_palindrome(string ,int );
int fibbo(int );
int main(){
    cout<<fibbo(6)<<endl;;
    return 0;
}
void gcd(){
    int a=52, b=10;
    while(a && b){
        if(a>b){
            a%=b;
        }else{
            b%=a;
        }
    }
    if(a==0){
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }
}

void recurr1(){
    if(n==5){
        return;
    }
    cout<<"Subhash"<<endl;
    n++;
    recurr1();
}

void recurr2(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    recurr2(n-1);
}

void recurr3(int n){
    if(n<1){
        return;
    }
    recurr3(n-1);
    cout<<n<<endl;
}

void recurr4(int i, int n){
    if(i>n){
        return;
    }
    recurr4(i+1, n);
    cout<<i<<endl;
}

void n_sum(int n){
    if(n<1){
        cout<<total<<endl;
        return;
    }
    total+=n;
    n_sum(n-1);
}

int n_sum_func(int n){
    if(n<1){
        return 0;
    }
    return n+n_sum_func(n-1);
}

int factorial(int n){
    if(n<1){
        return 1;
    }
    return n*factorial(n-1);
}

void rev_arr(int arr[], int l, int r){
    if(l>r){
        return;
    }
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
    rev_arr(arr, l+1, r-1);
}

void rev_arr_single_ptr(int arr[], int i, int size){
    if(i>size){
        return;
    }
    int temp=arr[i];
    arr[i]=arr[size-i-1];
    arr[size-i-1]=temp;
    return rev_arr_single_ptr(arr, i+1, size);
}

bool is_palindrome(string s, int i){
    if(i>=(s.size()/2)){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return is_palindrome(s, i+1);
}
int fibbo(int n){
    if(n<=1) return n;
    return fibbo(n-2)+fibbo(n-1);
}