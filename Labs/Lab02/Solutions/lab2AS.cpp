#include <iostream>

int SecondToLastOccurrence(double data[], int n, double value)
{
	int cnt = 0;

	for(int i = n - 1;i >= 0;i -= 1)
	{
		if(data[i] == value)
		{
			if(cnt == 1)
			{
				return i;
			}
			else
			{
				cnt += 1;
			}
		}
	}
	return -1;
}

int main()
{
	return 0;
}
