#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> numbers = {1, 100, 10, 70, 100}; // initialize a vector of int type
    cout << "Numbers are: "<< vector ;                     // print the vector
    for(auto &num: numbers) {
    cout << num << ", ";
    }
    return 0;
}