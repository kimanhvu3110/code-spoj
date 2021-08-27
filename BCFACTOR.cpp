#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<iostream>
using namespace std;
bool snt(long x)
{
    if (x<2) 
        return 0;
    for (long i=2; i<=sqrt(x); i++) 
        if (x%i==0) 
            return 0;
    return 1;
}

int main()
{
   long n;
   cin >> n;  
   for(long i=2;i<=sqrt(n);i++){
   	if(n%i==0) {
   		if(snt(i)==1){
   		long dem=0;
	   while(n%i==0){
		n=n/i;
		dem++;
	}
	cout<<i<<" "<<dem<<"\n";	
	   }
   }
}
     
    if(n!=1 && snt(n)==1)
   {
   	cout << n <<" "<< "1";
   }
   return 0;
}

   


