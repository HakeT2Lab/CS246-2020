/********************************************
*Runtime Functions and Big-O Notation 
********************************************/
#include <iostream>

/*
Runetime:
	-The length of time the algorthem takes to exicute
	- When calculating the runtime, you need to consider the type of execution 
		scenaro the function is undergoing.
		-Best-case
		-Average-case (Most Common)
		-Worst-case

Big-0 Notation:
	-Big-0 notation is an asymptotic runtime function that
		determines an upperbound
	O(g(n)) = f(n)
		If there exists a positive constant c that
		0 < f(n) <= c * g(n) whenever n >= n(lhs)	


*/

//Algorithm 1
//What is its runtime function?
	//T(n) = an + b
	//T(n) = O(n)
	/*
		an + b < cn
		a+ b/n < c
		c = a+ b	
	*/
//What is its Big-O?
template<typename T>
bool Search(T data[],int n,const T& value) 
{
	for(int i = 0;i < n;i += 1) //C1 | 1 // C2 | n+ 1 // C5 | n
	{
		if(data[i] == value)//C3 | n
		{
			return true;//C4 | 0
		}
	}
	return false; //C6 | 1
}


//Algorithm 2
//What is its runtime function?
//What is its Big-O?
int Digits(int n)//n is number of digits
{
	int cnt = 0; //C3 | 1

	if(n < 0)// C1 | 1
	{
		n *= -1; //C2 | 1
	}

	while(n > 10) //C4 | n + 1  /  celling of log(n) + 1
	{
		cnt += 1;//C5 | n
		n /= 10; // C6 | n
	}
	return cnt; // C7 | 1
}
	

//Algorithm 3
//What is its runtime function?
//What is its Big-O?
template<typename T>
T MinL(T data[],int n)
{
	T mn = data[0];// C1 | 1

	for(int i = 1;i < n;i += 1) //C2 | 1 // C3 | n// C6 | n-1
	{
		if(mn > data[i])	// C4 | n - 1
		{
			mn = data[i]; 	//C5 | n -1
		}
	}
	return mn; //C7 | 1
}

//Algorithm 4
//What is its runtime function?
//What is its Big-O?
template<typename T>
T MinB(T data[],int n)
{
	int hn = n/2;
	T mn;
	
	if(data[0] < data[n-1])
	{
		mn = data[0];
	}
	else
	{
		mn = data[n-1];
	}

	for(int i = 1;i <= hn;i += 1)
	{
		if(data[i] < data[n-i-1]) 
		{
			if(mn > data[i])
			{
				mn = data[i];
			}
		}
		else
		{
			if(mn > data[n-i-1])
			{
				mn = data[n-i-1];
			}
		}
	}
	return mn;
}

//Algorithm 5
//What is its runtime function?
//What is its Big-O?
bool IsPrimeO(int n)
{
	if(n >= -1 && n <= 1)
	{
		return false;
	}
	else if(n < 0)
	{
		n *= -1;
	}

	for(int i = 2;i < n;i += 1)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}


//Algorithm 6
//What is its runtime function?
//What is its Big-O?
bool IsPrimeT(int n)
{
	if(n >= -1 && n <= 1)
	{
		return false;
	}
	else if(n < 0)
	{
		n *= -1;
	}

	for(int i = 2;i * i < n;i += 1)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	return 0;
}
