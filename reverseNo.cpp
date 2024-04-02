#include<iostream>
using namespace std;
int revno(int n,int rev){
	if(n==0) return rev;
	int a = n%10;
	
	rev=(rev*10)+a;
	n=n/10;
	revno(n, rev);
}
int main(){
	int n;
	cout<<"enter no.:";
	cin>>n;
	int rev=0;
	cout<<"reverse no: "<<revno(n, rev);
	
}