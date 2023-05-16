#include <iostream>
using namespace std;

int main()
{
	int A[3][3];
	int i = 0;
	int j = 0;
	bool check = true;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cin >> A[i][j];

		}
		
	}

	
	for ( i = 0; i < 3; i++)
	{
		for (j = 0;j < 3;j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (A[i][j] > A[i][j + 1])
			{
				check = false;

			}
			else
			{
				check = true;
			}

		}
		if (check == true)
		{
			break;
		}

	}
	if (check)
	{
		cout << "elements are in ascending order" << endl;
	}
	else
	{
		cout << "elements are not in ascending order" << endl;
	}
	
	

}