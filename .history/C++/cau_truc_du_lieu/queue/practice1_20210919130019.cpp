#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> arr;
    int sum=0, n=arr.size(),temp;
    cin >> n;
    for(int i=0;i<arr.size();i++){
        cin>> temp;
        arr.push(temp);
    }
    cin.clear();
    cin.ignore();
    for(int i= arr.front(); i<= arr.back(); i++)
    {
        sum =(temp%2 != 0 && temp % 3 ==0) ? (sum+temp): sum;
    }
    cout << sum << endl;
    return 0;

}