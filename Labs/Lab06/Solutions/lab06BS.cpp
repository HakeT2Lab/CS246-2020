#include <iostream>
#include <cctype>
#include "Node.h"
#include "Stack.h"

bool IsValidWord(std::string word)
{
	ds::sn::Stack<int> as, bs;
	int i = 0;

	while(word[i] != '\0')
	{
		if(tolower(word[i]) == 'a')
		{
			//add 1 to as stack
			as.Push(1); 
				
		}
		else if(tolower(word[i]) == 'b')
		{	
			//add 1 to bs stack top
			bs.Push(1);
		}
		else 
		{
			return false;
		}
		i += 1;
	}
	//empty stacks
	while(!as.IsEmpty() && !bs.IsEmpty())
	{
		as.Pop();
		bs.Pop();
	}
	//both stacks must be empty for there to be equal count of a and b
	return (as.IsEmpty() && bs.IsEmpty());
}		


int main()
{
	std::string word[5] = {"aAabbB","aBA","ababab","aabbaabba",""};

	std::cout << std::boolalpha;
	
	for(int i = 0;i < 5;i += 1)
	{
		std::cout << "IsValidWord(\"" << word[i] << "\") = " << IsValidWord(word[i]) << "\n";
	}
	
	return 0;
}
