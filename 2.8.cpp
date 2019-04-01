#include <cstdio>
#include <iostream>
using namespace std;
void fun(int a[], int n, int k){
	for(int i = 0; i < k; i++){
		int b = a [0];
		for(int j = 1; j < n; j++){
			a[j - 1] = a[j];
		}
		a[n - 1] = b;
	}
}

void print(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int a[9]={0,1,2,3,4,5,6,7,8};
	int n = 9;
	int k;
	cout << "输入k" << endl;
	cin >> k;
	fun(a,n,k);
	print(a,n);
}
