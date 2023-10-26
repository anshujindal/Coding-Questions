//2^N USING RECURSION

#include <iostream>
using namespace std;

int power(int n)
{
    if(n == 0)
    {return 1;}
    
    int b = 2*power(n-1);
    
    return b;
    
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int ans = power(n);
	
	cout<< ans<< endl;
	
}
