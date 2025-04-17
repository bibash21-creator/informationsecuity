#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

//Function to encrypt the text using Mono-Alphabetic Cipher
string monoAlphabeticEncrypt(string text,unordered_map<char,char> cipherMap){
    //Initialize an empty string to store the encrypted text
    string text = "";
// Loop through each character in the input text
    for(char ch : text){
        // Check if the character is an alphabet letter
        if(isalpha(ch)){
            //Replace the character using the cipher mapping
            encryptedText+= cipherMap[ch];
        }else{
            //Keep non-alphabet characters unchanged
            encryptedText += ch;
        }
    }
    //Return the encrypted string
    return encryptedText;
}

//Function to decrypt the text using Mono-Alphabetic Cipher
string monoAlphabeticDecrypt(string encryptedText, unordered_map<char,char> reverseMap){
    //Initialize an empty string to store the decryption
    string decryptedtext = "";

    // Loop through each character in the encrypt
    for(char ch: encryptedText){
        //Check iif the character is an alphabet letter
        if(isalpha(ch)){
            //Replace the character using the reverse map
            decryptedText+= reverseMap[ch];
        }else{
            decryptedText+=ch;
        }
    }
    //Return the decrypted string
    return decryptedText;
}

int main(){
    //Map to store the encryption mapping
    unordered_map<char,char> cipherMap;
    //Map to store the decryption mapping
    unordered_map<char,char> reverseMap;

    string originalAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXIZabcdefghijklmnopqrstuvwxyz";
    string cipherAlphabet = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";

    //Generate the encryption and decryption mappings
    for(size_t i=0;i<originalAlphabet.size();i++){
        //Mapping original to shuffled alphabet
        cipherMap[originalAlphabet[i]] = cipherAlphabet[i];
        //Mapping shuffled to original alphabet
        reverseMap[cipherAlphabet[i]] = originalAlphabet[i];
    }
    //Variable to store the input text
    string text;

    //Prompt the user for text input
    cout << "Enter text to encrypt:";

    //Read the full line of text input from the user
    getline(cin,text);

    //Encrypt the input text
    string encryptedText = monoAlphabeticEncrypt(text,cipherMap);

    // Display the encrypted text
    cout<< "Encrypted text:"<< encryptedText<< endl;

    //Decrypt the text
    string decryptedText = monoAlphabeticDecrypt(encryptedText, reverseMap);

    // Display the decrypted text
    cout << "Decrypted text:" << decryptedText << endl;

    return 0;
}