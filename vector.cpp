#include <vector>
// We must add this lign for input and output stream
#include<iostream>
using namespace std;

std::vector< pair <float, int > > marks;


int main(int argc, char* argv[])
{
  marks.push_back(make_pair(12.5f,2));
  marks.push_back(make_pair(14.0f,1));
  marks.push_back(make_pair(09.5f,3));
  marks.insert(marks.begin()+1, make_pair(10.5f,3));

  for(auto mark: marks){
    cout << "Mark: " << mark.first << "coef.: " << mark.second << endl;
  }

  float sum=0;
  int sum_coef =0;
  while(!marks.empty()){
    auto m = marks.back();
    marks.pop_back();
    sum+=m.first * m.second;
    sum_coef += m.second;
  }
std::cout << "Average= " << sum/sum_coef << endl;

}
