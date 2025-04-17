#include <iostream>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

//Function to prepare the 5*5 Playfair cipher key matrix
vector <vector<char>> generateKeyMatrix(string key){
    map(char,bool) used; //Map to track used characters
    vector<vector<char>> matrix(5,vector<char>(5, '')); //5*5 matrix initialization
}