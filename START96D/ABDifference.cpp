#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int sum = a+b;
	int pro = a*b;
	int diff = abs(pro-sum) ;
	cout<<diff;
	
	return 0;
}
