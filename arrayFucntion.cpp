#include <array>
#include <iostream>


int main(){
  std::array<int, 3> a ={ 1, 5, 3};
//dispay the size of list
std::cout << a.size() << std::endl;
//std::cout << "Hello world!" << std::endl;
// display the element with index that is put in parameter
std::cout << a.at(1) << std::endl;

a.fill(5);


}
