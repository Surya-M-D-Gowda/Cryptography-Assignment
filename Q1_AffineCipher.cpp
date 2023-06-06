#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string Encrypt(string s, int a, int b)
{
    string cipher = "";
    for(int i = 0; i < s.length(); i++)
    {
        cipher += (char) ((((a * (s[i]-'A') ) + b) % 26) + 'A');
    }

    return cipher;
}

string Decrypt(string s, int a, int b)
{
    int invA;
    for (int i = 0; i < 26; i++)
    {
        if (((a * i) % 26) == 1)
            invA = i;
    }

    string text = "";
    for(int i = 0; i < s.length(); i++)
    {
        text += (char) (((invA * ((s[i]+'A' - b)) % 26)) + 'A');
    }

    return text;
}

int main()
{
    int a = 17;
    int b = 20;

    string message;
    string cipher;
    cout<<"Enter message: ";
    cin>>message;

    cipher = Encrypt(message,a,b);
    cout<<"Encrypted message: "<<cipher<<endl;
    cout<<"Decrypted message: "<<Decrypt(cipher,a,b)<<endl;
}