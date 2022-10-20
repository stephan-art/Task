#include <iostream>
using namespace std;
int main()
{
	int A;
	cin >> A;
	while (A > 0)
	{
		cout << A % 10;
		A /= 10;
	}
	
}