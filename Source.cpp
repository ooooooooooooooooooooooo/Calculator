#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

double a, b;

char* a1, *b1;

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		cout << endl;

		cout << "You must use 2 operands in one action" << endl;

		return 1;
	}


	if (strlen(argv[2]) != 1)
	{
		cout << endl;

		cout << "Check your operation ( List of usable: + , - , / , * )" << endl;

		return 2;
	}

	a = strtod(argv[1], &a1);
	b = strtod(argv[3], &b1);

	if (strlen(a1) != 0 || strlen(b1) != 0)
	{
		cout << endl;
		
		cout << "Use only arabic numerals" << endl;

		return 3;

	}
	else

		if (argv[2][0] == '+')

		{
			cout << endl;

			cout << a + b << endl;
		}

		else

			if (argv[2][0] == '-')

			{
				cout << endl;

				cout << a - b << endl;
			}

			else

				if (argv[2][0] == '*')

				{
					cout << endl;

					cout << a * b << endl;
				}

				else

					if (argv[2][0] == '/')
					{
						cout << endl;

						cout << a / b << endl;
					}

					else
					{
						cout << endl;

						cout << "Check your operation ( List of usable: + , - , / , * )" << endl;
					}

	return 0;

}