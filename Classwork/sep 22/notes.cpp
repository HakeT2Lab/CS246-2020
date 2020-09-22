/*
Insertion Functions
    -inserting an item into the array at any valid
    value index. A valid index is on index between 0 
    and the size inclusivly.

        template<typename T>
        void Insert(array<T>& obj, int idx, const T&)
        {
            if(obj.size < obj.data.Length())
            {
                if(idx >= 0 && idx <= obj.size){
                    for(int i = obj.size; i > idx; i -= 1)
                    {
                        obj.data[] = obj.data[i -1];
                    }
                    obj.data[idx] = item;
                    obj.size += 1;
                }
            }
        }


        template<typename T>
        void Insert(array<T>& obj, const T& item) //InsertAtEnd
        {
            if(obj.size < obj.data.Length())
            {
                obj.data[obj.size] = item;
                obj,size += 1;
            }
        }//F9n0 = 3   0(1)


Removal function
    -remove a value from an array from'any 
    valid index, wherea valid index is between
    0 inclusivly and size exclusively


            template<typename T>
            void Remove(arrat<T>& obj, int isx)
            {
                //is array empty
                if(obj.size > 0)
                {
                    if( idx >= 0 && idx < size)
                    {
                        obj.size -= 1;
                        for(int i = idx; i < obj.size; i += 1)
                        {
                            obj.data[i] = obj.data[i + 1];
                        }
                    }
                }
            }


            template<typename T>
            void RemoveEnd(arrat<T>& obj)
            {
                 //is array empty
                if(obj.size > 0)
                {
                    obj.size -= 1;
                }
            }

searching Functions
    -searching a value starting at a specfic index
            template<typename T>
            int Search(array<T>& obj, int idex, const T& item)//returns -1, starts from anywhere
            {
                for(int i = idex; i >= 0 && i < obj.size; i += 1)
                {
                    if(obj.data[i] == item)
                    {
                        return i;
                    }
                }
                return -1;
            }


            template<typename T>
            int Search(array<T>& obj, const T& item)//entire array, starts from anywhere
            {
                for(int i = 0; i < obj.size; i += 1)
                {
                    if(obj.data[i] == item)
                    {
                        return i;
                    }
                }
                return -1;
            }


            template<typename T>
            int ReverseSearch(array<T>& obj, int idex, const T& item)//entire array, starts from anywhere
            {
                for(int i = obj.size - 1; i>= 0&& i> idex; i -= 1)
                {
                    if(obj.data[i] == item)
                    {
                        return i;
                    }
                }
                return -1;
            }


                  template<typename T>
            int ReverseSearch(array<T>& obj, int idex, const T& item)//entire array, starts from anywhere
            {
                for(int i = obj.size - 1; i>= 0&& i> idex; i -= 1)
                {
                    if(obj.data[i] == item)
                    {
                        return i;
                    }
                }
                return -1;
            }

    

         
*/
