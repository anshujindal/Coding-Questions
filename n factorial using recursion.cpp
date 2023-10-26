//FINDING FACTORIAL OF N USING RECURSION

#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 0)
    {return 1;}
    
    int b = n*fact(n-1);
    
    return b;
    
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int ans = fact(n);
	
	cout<< ans<< endl;
	
}
