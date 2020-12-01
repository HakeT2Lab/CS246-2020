#ifndef LAB11_H
#define LAB11_H

#include <iostream>
#include <string>
#include <sstream>

template<class K,class V>
class MapInterface
{
	public:
	virtual void Put(const K&,const V&) = 0;
	virtual V& Get(const K&) = 0;
	virtual bool Contains(const K&) const = 0;
	virtual void Remove(const K&) = 0;
	virtual std::string ToString() const = 0;
};

template<class K,class V>
class Map : public MapInterface<K,V>
{
	private:
	K keys[100];
	V values[100];
	int size;
	
	Map(const Map<K,V>&);
	Map& operator=(const Map<K,V>&);

	public:
	Map() : size(0) {}

	~Map() {}
	//define methods below here

  /*
  if key is not a member of the map and the size of the map is less than 100, it adds the key-value pair
  (key,value) to the map; otherwise, it does nothing.
  */
  void Put(int Key, int Value){
    if(size !=0){
      int k=0;
      for(int v = 0; v<size; v++){
        Map(k,v);
        if(v == size-1){
          k++;
        }

        if(Key != k && size < 100){
          new Map = Map(Value, Key);//add a new map coodinate
        }
      }
    }
  }

  /*
   if key is a member of the map, it returns the value that is mapped to key from the map; otherwise, it
    throws an error message.
  */
  int Get(int Key, int Value){
    if(size != 0){
      int k=0;
      for(int v = 0; v<size; v++){
        Map(k,v);
        if(v == size-1){
          k++;
        }
        if(Key == k){
          return Map(k,v);
        }else{
          throw "Error! Key Not Accepted!";
        }

      }
    }
    return 0;
  }

  bool Contains(int Key, int Value){
    if(size != 0){
      int k=0;
      for(int v = 0; v<size; v++){
        Map(k,v);
        if(v == size-1){
          k++;
        }
        if(Key == k){
          return true;
        }

      }
    }
  }
    //Ill make it so 0 means it was removed
    //lets assume i have a code that does not count 0 coordinates as a part of the map
  void Remove(int Key, int Value){
    if(size != 0){
      int k=0;
      for(int v = 0; v<size; v++){
        Map(k,v);
        if(v == size-1){
          k++;
        }
        if(Key == k){
          Map(k,v)= Map(0,0);
          size -= 1;
        }
      }      
    }    
  }

  std::string ToString(){
    std::stringstream out;;
    out<<"{ ";
    
    int k=0;
    for(int v = 0; v<size; v++){
      out<<"( "<<k<<", "<<v;
      if(){

      }
    }


    out<<" }";
    return out.str();
  }
  

	//define methods above here
};


int main(){
  // int test=0;
  // 	int i;
	// char c;
  // MapInterface<char,int>* a[3] = {new Map<char,int>(30),new Map<char,int>(),new <char,int>()};
  
  // for(i = 1,c = 'a';i <= 26 ;i += 1,c += 1){
	// 	a[0]->Put(c,i);
	// 	a[1]->Put(c,i);
	// 	a[2]->Put(c,i);
	// }





  // Put('A', 3);
  return 0;
}


#endif
