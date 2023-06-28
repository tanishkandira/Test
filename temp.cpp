#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        int a;
        cin >> a;
        arr[i] = a;
    }

    sort(arr,arr+n);
    ll mid = arr[(n-1)/2];
    ll sum = 0;
    for(int i = 0;i<n;i++){
        sum+=abs(arr[i] - mid);
    }
    cout << sum;
    return 0;
}
