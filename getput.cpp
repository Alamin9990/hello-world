#include<iostream>
using namespace std;
int main()
{
    int cunt=0;
    char c;
    cout<<"Enter a text:\n";
    cin.get(c);
    while(c!='\n'){
    cout.put(c);
    count++;
    cin.get(c);
    }
    cout<<"Number of characters=" << count <<"\n";
}
