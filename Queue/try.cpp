#include<iostream>
#include<string>
#include<map>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int check(string str)
{
    int count = 0;
    map<int,int> mp;
    for(int i = 0 ; i < str.length() ; i++)
        mp[i] = 0;


    for(auto j = str.begin() ; j != str.end() ; j++)
    {
        char ch = *j;
        char *z = &ch;
        int k = atoi(z);
        mp[k]++;
    }
  
    int index = 0;
    for(auto k = mp.begin() ; k != mp.end() ; k++)
    {
        
        char ch = str.at(index);
        char *z = &ch;

        if(k->second == atoi(z))
            count++;
        
        index++;
    }

     
    
    if (count == str.length())
        return 1;
    
    return 0;
}

    


    

int main()
{
    string str;
    cin >> str;
     
     int result = check(str);
     cout << result<<endl;

     return 0;
} 