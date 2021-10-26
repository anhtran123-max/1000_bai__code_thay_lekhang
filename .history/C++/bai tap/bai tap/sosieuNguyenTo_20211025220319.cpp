#include<bits/stdc++.h>
using namespace std;
int n, a[4] = { 1, 3, 7, 9 };

bool prime(int n){
	if(n<=2){
		return false;
	}
	int squareRoot= sqrt(n);
	for(int i=2;i<=squareRoot;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
bool soSieuNguyenTo(int n){
    while(n!=0){
        if(prime(n)==false) return false;
        n=n/10;
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    for(int i = 0; i <n;i++){   
        if(soSieuNguyenTo(i)) cout<<i<<" ";
    }
    return 0;
}