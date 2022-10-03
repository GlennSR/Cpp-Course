/*
Encryption challenge
 */
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string msg;
    cout << "Enter the secret message: ";
    getline(cin, msg);

    cout << "\nEncrypting message...\n";
    for(size_t i{0}; i < msg.length(); ++i){
        size_t pos = alphabet.find(msg.at(i));
        if(pos != string::npos)
            msg.at(i) = key.at(pos);
    }
    cout << "Encrypted message: " << msg << endl;

    cout << "\nDecrypting message...\n";
    for(size_t i{0}; i < msg.length(); ++i){
        size_t pos = key.find(msg.at(i));
        if(pos != string::npos)
            msg.at(i) = alphabet.at(pos);
    }
    cout << "Decrypted message: " << msg << endl;

    return 0;
}
