#include <iostream>
#include <list>
using namespace std;
class HashMapTable
{
    // size of the hash table
    int table_size;
    // Pointer to an array containing the keys
    list<int> *table;

public:
    // creating constructor of the above class containing all the methods
    HashMapTable(int key);
    // hash function to compute the index using table_size and key
    int hashFunction(int key)
    {
        return (key % table_size);
    }
    // inserting the key in the hash table
    void insertElement(int key);
    // deleting the key in the hash table
    void deleteElement(int key);
    // displaying the full hash table
    void displayHashTable();
};
// creating the hash table with the given table size
HashMapTable::HashMapTable(int ts)
{
    this->table_size = ts;
    table = new list<int>[table_size];
}
// insert function to push the keys in hash table
void HashMapTable::insertElement(int key)
{
    int index = hashFunction(key);
    table[index].push_back(key);
}
// delete function to delete the element from the hash table
void HashMapTable::deleteElement(int key)
{
    int index = hashFunction(key);
    // finding the key at the computed index
    list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++)
    {
        if (*i == key)
            break;
    }
    // removing the key from hash table if found
    if (i != table[index].end())
        table[index].erase(i);
}
// display function to showcase the whole hash table
void HashMapTable::displayHashTable()
{
    for (int i = 0; i < table_size; i++)
    {
        cout << i;
        // traversing at the recent/ current index
        for (auto j : table[i])
            cout << " ==> " << j;
        cout << endl;
    }
}
// Main function
int main()
{
    // array of all the keys to be inserted in hash table
    int arr[] = {20, 34, 56, 54, 76, 87};
    int n = sizeof(arr) / sizeof(arr[0]);
    // table_size of hash table as 6
    HashMapTable ht(15);
    for (int i = 0; i < n; i++)
        ht.insertElement(arr[i]);
    // deleting element 34 from the hash table
    ht.deleteElement(34);
    // displaying the final data of hash table
    ht.displayHashTable();
    return 0;
}