#include <iostream>

using namespace std;

void simon(int n);
int main(void)
{
//	using namespace std;

	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	
	return 0;

}

void simon(int n)
{
//	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}