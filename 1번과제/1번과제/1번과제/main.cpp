#include <iostream>
#include <string>
#include <vector>

using namespace std;

double sum(const vector<double>& arr1)
{
	int alen = arr1.size();
	double arrSum = 0;
	for (int i = 0; i < alen; i++)
	{
		arrSum += arr1[i];		
	}
	return arrSum;
}

double avg(const vector<double>& arr2)
{
	double arrAvg = sum(arr2) / arr2.size();
	return arrAvg;
}

void sort(vector<double>& arr3, int a)
{
	if (a == 1)
	{
		int vlen = arr3.size();
		for (int i = 0; i < vlen - 1; i++)
		{
			for (int j = 0; j < vlen - i - 1; j++)
			{
				if (arr3[j] > arr3[j + 1])
				{
					double temp = arr3[j];
					arr3[j] = arr3[j + 1];
					arr3[j + 1] = temp;
				}
			}

		}
		cout << "�Էµ� ��: ";
		for (int k = 0; k < vlen; k++)
		{
			cout << arr3[k] << " ";
		}
		cout << endl;
	}
	else if (a == 2)
	{
		int vlen = arr3.size();
		for (int i = 0; i < vlen - 1; i++)
		{
			for (int j = vlen - 1; j > 0; j--)
			{
				if (arr3[j] > arr3[j - 1])
				{
					double temp = arr3[j];
					arr3[j] = arr3[j - 1];
					arr3[j - 1] = temp;
				}
			}

		}
		cout << "�Էµ� ��: ";
		for (int k = 0; k < vlen; k++)
		{
			cout << arr3[k] << " ";
		}
		cout << endl;
	}
	

}

int main()
{
	vector<double> vecNum;
	double num, n;
	
	cout << "���ڸ� ������ �Է��ϼ���: ";
	cin >> n;
	vecNum.resize(n);

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << "��° ���ڸ� �Է��ϼ���: " << endl;
		cin >> vecNum[i];
	}
	int sortint;
	cout << "�������ڸ� �Է����ּ���(1�� �������� 2�� ��������): ";
	cin >> sortint;
	sort(vecNum, sortint);
	cout << "����: " << sum(vecNum) << endl;
	cout << "���: " << avg(vecNum) << endl;


	return 0;
}