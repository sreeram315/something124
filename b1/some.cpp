#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool is_prime(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < arr.size(); i++)
        cin >> arr[i];
    
    int maxi = -99999999;
    int mini = 999999999;
    
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 1) continue;
        if(is_prime(arr[i])){
            if( maxi < arr[i])
                maxi = arr[i];
            if( mini > arr[i])
                mini = arr[i];
        }
    }
    
    cout << maxi - mini;
    
    return 0;
}
