//say digits USING RECURSION

#include <iostream>
using namespace std;

void digits(int n,string arr[])
{
    if(n == 0)
    {return;}
    
    int digit = n%10;
    n = n/10;
    
    digits(n, arr);
    
    string ans = arr[digit];
    cout << ans << endl;
}


int main() {
	// your code goes here
	int n;
	cin>>n;
	string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	
	digits(n, arr);
	
}
