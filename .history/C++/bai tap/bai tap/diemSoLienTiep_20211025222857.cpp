#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>Arr;
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> a[i];
        Arr.insert(a[i]);  
    }

    imt count=0;
    set<int, greater<int> >::iterator itr;
     for (itr = Arr.begin(); itr != Arr.end(); itr++)
    {
        if(a[itr]-a[itr-1]==1) count++;
    }
    cout<<count;
    return 0;
}