//THAYCACAC
#include <stdio.h>
#include <math.h>
//ham ktr fibnacci
 int F(int n)
{
	if(n=1)
	return 1;
	if (n=2)
	return 1;
	if (n>=3)
	return F(n-1)+F(n-2);
}

//HAM KIEM TRA SO NGUYEN TO
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
//HAM KIEM TRA SO CHINH PHUONG
int isSquare(int n){
	if(n<2) return 0;
	if(sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}
//HAM KIEM TRA SO HOAN HAO
int isPerfect(int n){
	int s=0;
	for(int i=1; i<n; i++){
		if(n%i==0)	s+=i;
	}
	if(n==s)	return 1;
	else	return 0;
}
//HAM KIEM TRA SO PALINDROME
int isPalindrome(int n){
	int sum=0,r;
	int check=n;
	while (n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	if(sum==check) return 1;
	else return 0;
}
//HAM KIEM TRA SO CHIA HET CHO MOT SO X (VI DU CHIA HET CHO 7)
int isDivisible(int n){
	if(n%7==0) return 1;
	else return 0;
}
//HAM KIEM TRA 1/(2*N+1)<=C
void check1(double c){
	int n=0;
	while(1){
		if(1.0/(2*n+1)<=c)	break;
		n++;
	}
	printf("%d\n",n);
}
//HAM KIEM TRA |X^N/N!<=C|
void check2(double c){
	int n=1;
	double t=1;
	double x=2;
	while(1){
		t*=x/n;
		if(fabs(t)<=c)	break;
		n++;
	}
	printf("%d\n",n);
}
//HAM KIEM TRA |X^(2*N+1)/(2*N+1)!<=C|
void check3(double c){
	int n=3;
	double x=2;
	double t=x;
	while(1){
		if(fabs(t)<=c)	break;
		t*=x*x/(n*(n-1));
		n+=2;
	}
	printf("%d\n",(n-1)/2);
}
*******
//KIEM TRA SO AMSTRONG
//int CountDigit(int n)
//{
//    int count = 0;
//    while (n > 0)
//    {
//        n /= 10;
//        ++count;
//    }
//    return count;
//}
//bool IsArmstrong(int n)
//{
//    int numDigit = CountDigit(n);
//    int tmp = n, sum = 0, last;
//    while (tmp > 0)
//    {
//        last = tmp % 10; // l?y ch? s? cu?i cùng
//        tmp /= 10;       // b? ch? s? cu?i cùng
//        sum += pow(last, numDigit);
//    }
//    if (sum == n)
//        return true;
//    return false;
//}
// 
//int main()
//{
//    int n;
//    printf("\nNhap n = ");
//    scanf("%d", &n);
// 
//    if (IsArmstrong(n) == true)
//    {
//        printf("\n%d la so armstrong!", n);
//    }else{
//        printf("\n%d khong la so armstrong!", n);
//    }
//} 
*******
//1!+4!+5!=145
#include <stdio.h>

int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;

    /* Input a number from user */
    printf("Enter any number to check Strong number: ");
    scanf("%d", &num);

    /* Copy the value of num to a temporary variable */
    originalNum = num;

    sum = 0;

    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get last digit of num */
        lastDigit = num % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        num = num / 10;
    }

    /* Check Strong number condition */
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}
************
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
//	for(int i=0; i<=n; i++){
//		if(isPrime(i)==1)	printf("%5d",i);
//	}

//	for(int i=0; i<=n; i++){
//		if(isSquare(i)==1)	printf("%5d",i);
//	}

//	for(int i=0; i<=n; i++){
//		if(isPalindrome(i)==1)	printf("%7d",i);
//	}	

	if(isPerfect(n)==1)	printf("True");
	else	printf("False");

//	for(int i=0; i<=n; i++){
//		if(isDivisible(i)==1)	printf("%7d",i);
//	}	
//	double c=0.00001;
//	check1(c);
//	check2(c);
//	check3(c);
}
