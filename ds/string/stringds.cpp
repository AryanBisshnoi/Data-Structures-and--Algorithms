#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 = "Aryan Bisshnoi:)";
    cout<< str1<<endl;

    string str;
    cout<<"enter a string\n";
    //getline(cin, string) function is used to take multi-word string.
    getline(cin, str);
    cout<< str<<endl;

    //Append two strings.
    str.append(str1);
    cout<<str<<endl;

    //Size of a string.
    cout<< str.size()<< endl;
    cout<< str1.size()<< endl;

    //Printing a string using for loop.
    for(int i=0;i<str.length();i++)
    cout<< str[i];
    cout<<endl;

    //Erasing subpart of a string.
    string str2 = "goosebumps";
    str2.erase(2,3);// erase(index from where we need to erase, number of elements we need to erase);
    cout<< str2<<endl;

    //Find a substring from a given string.
    string mainstring="astalavista";
    string substring="lav";
    int index = mainstring.find(substring);
    cout<< index<< endl;

    //Insert a substring in main string.
    mainstring.insert(2,substring);
    cout<< mainstring<< endl;

    //Getting a substring from a string.
    string s = mainstring.substr(3,4);
    cout << s << endl;

    //Compare two strings.
    string s1="xyz";
    string s2="xyz";
    int x = s1.compare(s2);
    cout<<x<<endl;

    //String to integer.
    string s3 = "100";
    int x = stoi(s3);
    x=x+2;
    cout<<x<<endl;

    //Integet to string.
    string s4 = to_string(x);
    cout<< s4+"0"<<endl;

    return 0;
}