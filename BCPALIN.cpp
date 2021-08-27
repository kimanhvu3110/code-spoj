#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std; 
bool daonguoc(long n){
	long s=0;
	long a=n;
	while(a>0){
		s=s*10 + a%10;
		a=a/10;
	}
	if(s==n) return 1;
	else return 0;
}
int main()
{
	long n;
	cin >> n;
	long a[n];
	for(long i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(long i=0;i<n;i++){
		if(daonguoc(a[i])==1) cout << "YES" << "\n";
		else cout<< "NO"<<"\n";
	}
}


