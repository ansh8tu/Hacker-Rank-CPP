#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    //declaring two variables of integer type to store the no of arrays and no of 
    // queries to be performed
    int noOfArrays, noOfQueries;
    
    //taking the input from the user for the same
    cin >> noOfArrays >> noOfQueries;
    
    //now we are going to take a vector of vector as we have to store arrays
    //and not just their elements 
    //so the outer vector will contains the no of arrays given by the user and the 
    //inner array will contain the elements
    vector< vector<int> > myVector(noOfArrays);

    //using a for loop to declare the size of respective arrays which are included in    
    // the vector
    for (int i=0; i<noOfArrays; i++) {
        
        int sizeOfeachArray;
        cin >> sizeOfeachArray;
    
    //Using another for Loop to insert the values in those arrays
    for (int j=0; j<sizeOfeachArray; j++) {
         
        int valueInsideArray;
        cin >> valueInsideArray;
        
        //using push back to insert value in the vector 
        myVector[i].push_back(valueInsideArray);
    }
}

//Performing the queries asked by the user
for (int i=0; i<noOfQueries; i++) {
    
    int arrNumber,elementOfArray;
    cin >> arrNumber >> elementOfArray;
    
    cout << myVector[arrNumber][elementOfArray] << endl;
}
     
    return 0;
}

