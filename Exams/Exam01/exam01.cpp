#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Array.h"




int MinimumDistance(ds::Array<int>& data){
//comapares curr value with next value
	int minDist;

	for(int i = 0; i < data.Length() ; i++){
		for(int j = i+1; j < data.Length(); j++){
			if(minDist > abs(i - j)&& minDist <0){
				
			}if(minDist >= 1){
				return 0;
			}

		}
	}
	return minDist;
}

template <typename T>
bool Similar(Array<T>& ar1, Array<T>& ar2){
	for(int i = 0; i < ar1.Length(); i++){
		for(int j = 0; j < ar2.Length(); j++){
			//idea: Set all values not similar to zero, and run copareison 
			//excluding 0
			if(ar1[i] == ar2[j] ){
				return true;
			}else{
				return false;
			}
		}
	}
}


template <typename T>
void MidAppend(Array<T>& data,Array<T>& addon){
	
	data.Resize(data.Length() + addon.Length());
	//go thru the array. ectra spaces should equal 0
	for(int i = 0; i <data.Length(); i++){
		for(int j = 0; addon.Length(); j++){
			//condiction: checks if data does not have any indexs in common
			// \with addons, and checks if the new indexs(which i assume are 0)
			if(data[i] != addon[j] && data[i] == 0){
				data.Resize(1);//resize by on when condiction is meet
				data[i] = addon[j];
				j++;
			}
		}
	}
}


/*
	Question 4:
		runtime Seems to equal 4n + 14

		c1	\1
		c2	\1
		c3	\1		//if
		c4	\1		//if
		c5	\1
		c6	\1		
		c7	\ 1		//for
		c8	\n+1 	//for
		c9	\n 		//for
		c10	\n		//for
		c11	\n		//for
		c12	\n		//for
		c13	\1		//for
		c14	\1
		c15	\1
		c16	\1
		c17	\1 


*/


int main()
{
	// int ar1[4]= {1, 2, 5, 10};
	// int ar2[6]= {1, 4, 5, 7, 8, 10};


	//data = [a, b, c, d, e];
	//addon = [f, g, h, i, j];
	return 0;
}
/*

	if(Array[i] != 0 && diff < 0){
			diff

		}


*/