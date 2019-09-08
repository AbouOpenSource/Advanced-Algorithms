#include <map>
#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{

    std::map<char, string> mapOfChar;

    mapOfChar.insert(make_pair('a',"earth"));
    mapOfChar.insert(make_pair('b',"moon"));
    mapOfChar['c']="sun";

    mapOfChar['a']="mars";

    std::map<char, string>::iterator it = mapOfChar.begin();
    while( it != mapOfChar.end()){

      std::cout << it->first << "=>" << it->second <<endl;

      it++;
    }

    if(!mapOfChar.insert(make_pair('a',"pluton")).second){
        std::cout << "Element with key a not inserted because already existed " << endl;
    }

    std::cout << "Word c found =>" << mapOfChar['c'] << endl;


    if (mapOfChar.find('c') != mapOfChar.end()) {

      std::cout << "Word c found =>" << mapOfChar['c'] << endl;
    }

}
