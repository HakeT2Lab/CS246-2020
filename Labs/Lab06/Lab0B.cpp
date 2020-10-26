#include <iostream>
#include "Node.h"
#include "Stack.h"


/*
It returns true, if wrd consist of the same amount of As and Bs with no other characters where a and b can be in any
case; 
otherwise, it returns false. For instance, the function calls IsValidWord(''aAabbB'') and IsValidWord(''aBA'')
will evaluate to true and false respectively. 

You must use a stack.

**I will use Array **

*/

bool IsValidWord(std::string wrd){
    int i = 0;
    int AC= 0;//count of A
    int BC= 0;//Count of B
    ds::sn::Stack<char> stWRD;
    while(wrd[i] != '\0'){//if wrd terminates
        if(wrd[i] == 'a'||wrd[i] == 'b'||wrd[i] == 'A'||wrd[i] == 'B'){//if wrd[i] is a vaild letter lower and upper case
            stWRD.Push(wrd[i]);
            if(wrd[i] == 'a' || wrd[i] == 'A'){///What i want: if stWRD = any a AC++ else BC++              AC++;
            }else{
                BC++;
            }
            if(stWRD.IsEmpty()){//if true return false, if false pop whats in stWRD
                return false;
            }else{
                stWRD.Pop();
                
            }
        }else{
            return false;
        }
        i++;
    }
    if(AC != BC){//if counts are not the same its notvaild
        return false;
    }

    return stWRD.IsEmpty();
}



int main()
{
	return 0;
}
