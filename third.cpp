#include <bits/stdc++.h>
using namespace std;

void primeFactors(long long n)
{
int max;
	while (n % 2 == 0)
	{
	     max=2;
		n = n/2;
	}


	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{      max=i;
		
			n = n/i;
		}
	}

	if (n > 2){
	
   max=n;
	}
cout<<max;
    
}


int main()
{
	long long n = 600851475143;
	primeFactors(n);
	return 0;
}
sol-6857