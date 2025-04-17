#include <iostream>
#include <string>

using namespace std;

//Function to encrypt the text using Caesar Cipher
string caesarCipher(string text,int shift){
    // initialize an empty string to store
    string result = "";

    // Loop through each character in the input text
    for(char ch:text){

    // Check if the character is an alphabet letter
        if(isalpha(ch)){
            // Determine base ('A' for uppercase, 'a' for lowercase)
            char base = issupper(ch)?'A':'a';
            // Shift character and wrap around within the alphabet
            result += char(int (base+(ch-base+shift)%26));
        }else{
            // Keep non-alphabet characters unchanged
            result+=ch;
        }
    }
    return result;
}

int main(){
    string text;
    int shift;
    cout << "Enter the text to encrypt";
    getline(cin,text);
    cout << "Enter the shit value:";
    cin>>shift;
    string encryptedText = caesarCipher(text,shift);
    cout << "Encrypted text:"<< encryptedText<< endl;
    return 0;
}


