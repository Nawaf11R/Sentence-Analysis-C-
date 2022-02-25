#include <iostream> 
#include <string>
using namespace std;
int main()
{

	string x;
	int number = 1;
	while (true)
	{
		cout << "enter any statment: ";
		getline(cin, x);
		int i = 0;

		for (int j = 0; j < x.length(); j++)
		{

			for (i = j + 1; i < x.length(); i++)
			{
				if ((x[j] == x[i]) && (x[i] != 0))
				{
					number += 1;
					x[i] = 0;
				}
			}
			if (x[j] != 0)        // && x[j] != 32; 
				cout << x[j] << ':' << number << endl;
			number = 1;
		}
	}
	system("pause");
	return 0;
}