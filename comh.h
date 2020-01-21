#include <bits/stdc++.h>
using namespace std;
typedef long long int lo;

lo LinearSearch(lo arr[],lo n,lo s){
    for(lo i = 0;i < n;i++){
        if(arr[i] == s) return i;
    }
    return -1;
}

lo LinearSearch(lo arr[],lo s,lo l,lo r){
    for(lo i = l;i < r;i++){
        if(arr[i] == s) return i;
    }
    return -1;
}

lo LinearSearch(vector<lo> arr,lo n,lo s){
    for(lo i = 0;i < n;i++){
        if(arr[i] == s) return i;
    }
    return -1;
}

lo LinearSearch(vector<lo> arr,lo s,lo l,lo r){
    for(lo i = l;i < r;i++){
        if(arr[i] == s) return i;
    }
    return -1;
}

