#include <iostream>
using namespace std;

int i, x, x1, n;

int main()
{
	setlocale(LC_ALL, "");
	cout << "������� ������ �������" << endl;
	cin >> n;
	cout << "������� ���������� �������" << endl;
	cin >> x;
	cout << " �������� ������ " << endl;
	char *A = new char[n];
	cin >> A;
	cout << "��������: ���������� - 1, ������������ - 2, ���������� - 3" << endl;
	cin >> x1;
	switch (x1)
	{
		case 1:
		{
			for (i = 0; i < n; i++)
			{
				if (A[i] > 'z' - x && A[i] <= 'z')
				{
					A[i] = 'a' + (A[i] - 'z' + x - 1);
				}
				else if (A[i] > 'Z' - x && A[i] <= 'Z')
				{
					A[i] = 'A' + (A[i] - 'Z' + x - 1);
				}
				else
				{
					A[i] = A[i] + x;
				}
			}
			cout << "�������� ������ " << A << endl;
			break;
		}
		case 2:
		{
			for (i = 0; i < n; i++)
			{
				if (A[i] >= 'a' && A[i] < 'a' + x)
				{
					A[i] = 'z' - ('a' - A[i] + x - 1);
				}
				else if (A[i] >= 'A' && A[i] < 'A' + x)
				{
					A[i] = 'Z' - ('A' - A[i] + x - 1);
				}
				else
				{
					A[i] = A[i] - x;
				}
			}
			cout << "�������� ������ " << A << endl;
			break;
		}
		default:
			cout << "�� ������ �� �������. �������� ������ " << A << endl;
			break;
	}

	cout << endl;
	delete[] A;

	return 0;
}