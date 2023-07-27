
#include <iostream>
#include <vector>
#include<algorithm>
#include <list>
using namespace std;

class Hashing
{
    vector<list<int>> hashtable;

    int buckets;
    public:
    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key)
    {
        return key % buckets;
    }

    void addKey(int key)
    {
        int index = hashvalue(key);
        hashtable[index].push_back(key);
    }

    list<int>::iterator searchKey(int key){
        int indx=hashvalue(key);
        return find(hashtable[indx].begin(),hashtable[indx].end(),key);
    }

    void deleteIndx(int key){
        int indx=hashvalue(key);
        if(searchKey(key)!=hashtable[indx].end()){
            hashtable[indx].erase(searchKey(key));
            cout<<key<<" is deleted"<<endl;


        }else{
            cout<<"Key is not present insoide the hash table"<<endl;
        }
        
    }
};

int main()
{

    Hashing* h= new Hashing(10);
    h->addKey(5);
    h->addKey(9);
    h->addKey(3);
    h->addKey(33);

    h->deleteIndx(3);
    h->deleteIndx(33);


    return 0;
}