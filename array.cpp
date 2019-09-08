#include<array>
#include<iostream>

// sort pass when i include this lign. I must ask why i don't pass if i don't include it
#include <algorithm>
using namespace std;

array<pair <string, int >,5> tab = {make_pair("Kiwi",98), make_pair("Mangoro", 93), make_pair("Orange", 55),make_pair("Rose", 100), make_pair("Papaya",10)};

int main()
{
          sort(tab.begin(), tab.end(), [](auto &left, auto &right){
              return left.second > right.second;
              });


          for (auto &cell: tab)
          {
              cout << cell.first << ": "<< cell.second << "mg/ 100g" << endl;
          }


        array< pair <string,int>,5 >::const_iterator ci = tab.begin();
        //get a good seuil only
        while(ci!= tab.end() && ci->second > 60){

          //cout <<  ci->first << endl;
            ci++;
            }
        if(ci !=tab.end()){
          cout << ci->first << endl;
        }

}
