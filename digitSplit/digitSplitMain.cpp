/*
    Program that splits number into digits
*/

#include <iostream>
#include "splitter.hpp"
using namespace std;

int main(){
    int number, index;
    cout << "insert nmber to split up: ";
    cin >> number;
    cout << "insert nmber to index: " << endl;
    cin >> index;
   
    cout << splitter(number, index);
}