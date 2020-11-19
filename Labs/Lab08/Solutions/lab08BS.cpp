#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Node.h"
#include "Vector.h"
#include "Map.h"
using ulong = unsigned long;

double Mode(ds::Vector<double>& data)
{
	if(data.Length() == 0)
	{
		return 0;
	}

	ds::sn::Map<double,int> cnts;
	ulong n = data.Length();
	ds::Pair<double,int> mx;

	for(ulong i = 0;i < n;i += 1)
	{
		if(cnts.Contains(data[i]))
		{
			cnts[data[i]] += 1;
		}
		else
		{
			cnts.Put(data[i],1);
		}
	} 

	mx.key = data[0];
	mx.value = cnts[data[0]];

	for(ulong i = 1;i < n;i += 1)
	{
		if(mx.value < cnts[data[i]])
		{
			mx.key = data[i];
			mx.value = cnts[data[i]];
		}
	}
	
	return ((mx.value > 1)?(mx.key):(0.0));
}
 
int main()
{
	srand(time(NULL));
	ds::Vector<double> a(20);

	for(int i = 0;i < 20;i += 1)
	{
		a[i] = rand() % 10 + 1;
	}

	std::cout << a << "\n";
	std::cout << "mode = " << Mode(a) << "\n";
	return 0;
}
