#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,i;
	char b;

	cout<<"Mencetak Kode ASCII\n";

	for (i=1; i<256; i++)
	{
		a=i;
		b=i;
		cout << a << " = " << b << endl;
	}
	getch();
	return 0;
}
