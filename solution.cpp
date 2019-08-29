#include <iostream>
#include <string>
#include <vector>
#include <limits.h> 

typedef std::vector<std::string> StrVec;
int getSecondMax(StrVec InputVector);

int main()
{
  std::string name;
  StrVec InputVector;
  InputVector.push_back("5");
  InputVector.push_back("5");
  InputVector.push_back("4");
  InputVector.push_back("2");
  
  std::cout << "Result: " << getSecondMax(InputVector) << "\n";
 
}

int getSecondMax(StrVec InputVector){
    int n = InputVector.size();
    int first,second;
    first = second = INT_MIN;
    for(int i=0;i<n;i++){
        int el = atoi(InputVector[i].c_str());
        if(el > first){
            second = first; 
            first = el; 
        }
        else if(el > second && el != first) second = el; 
    }
    if(second != INT_MIN) return second;
    else return -1;
}