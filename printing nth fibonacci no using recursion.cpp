//print nth fibonacci numb USING RECURSION

#include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
    {return 0;}
    
    if(n == 1)
    {return 1;}
    
    int ans = fib(n-1) + fib(n-2);
    
    return ans;
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	int ans;
	ans = fib(n);
	
	cout << ans << endl;
	
}
