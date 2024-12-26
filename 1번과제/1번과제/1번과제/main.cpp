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
		cout << "입력된 수: ";
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
		cout << "입력된 수: ";
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
	
	cout << "숫자를 개수를 입력하세요: ";
	cin >> n;
	vecNum.resize(n);

	for (int i = 0; i < n; i++)
	{
		cout << i+1 << "번째 숫자를 입력하세요: " << endl;
		cin >> vecNum[i];
	}
	int sortint;
	cout << "정렬인자를 입력해주세요(1은 오름차순 2는 내림차순): ";
	cin >> sortint;
	sort(vecNum, sortint);
	cout << "총합: " << sum(vecNum) << endl;
	cout << "평균: " << avg(vecNum) << endl;


	return 0;
}