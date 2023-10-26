//print counting USING RECURSION

#include <iostream>
using namespace std;

void count(int n)
{
    if(n == 0)
    {return ;}
    
    count(n-1);
    
    cout<< n <<endl;
    
    
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	cout<< endl;
	count(n);
	
}
