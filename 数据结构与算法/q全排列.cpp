#include <iostream>
#include <algorithm>

using namespace std;
void swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
void Perm(int list[],  int k, int m )
{
    if(k==m){
         for (int i=0;i<=m;i++) 
     		cout<<list[i];
         cout<<endl;
    }
    else{
       for (int i=k; i<=m; i++){
           swap(list[k],list[i]);
           Perm(list,k+1,m);   
           swap(list[k],list[i]);         
         }
	}
}

int main() {
    
    int s[]={3,2,3};
    Perm(s,0,2);

    return 0;
}
