/*
Data Stucture Array
    An array is a collection of objects
    
    It can access any item with O(1)



    Adding to an array

        -Adding to the end of the array //runtime is constant (1)
            void AddToEnd(Array<T>& obj, const T& item)
            {
                if(obj.size<obj.capacity) 
                {
                    obj.data[obj.size] = item;
                    obj.size += 1;
                }
            }

        -Adding to the front
            void AddToFront(Array<T>& obj.const T& item)
            {
                if(obj.size < capacity)
                {
                    obj.size +=1;
                    for(int i = size -1; i< 0; i++)
                    {
                        obj.data[i]= obj.data[-1];//prev object
                    }
                    obj.data[0] = item;
                    
                }
            }






*/