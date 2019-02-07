#include <iostream>
#include <cstring>

using namespace std;



void Reverse(string& s){
    unsigned long size=s.length();
    char* p1=&s[0];         //head pointer, points to beginning of string
    char* p2=&s[size-1];    //tail pointer, points to end of string

    while(p2>p1){           //Reverses characters while the tail is further in the string than the head
        char temp1;
        char temp2;
        temp1=*p1;
        temp2=*p2;
        *p1=temp2;          //Switches the head character with the tail character
        *p2=temp1;          //Switches the tail character with the head character

        p1++;               //Increments the head further into the string
        p2--;               //Decrements the tail lower into the string
    }
}






int main (){
    string s;
    cout <<"Enter Cstring: ";
    cin >> s;
    unsigned long size=s.length();
    Reverse(s);

    for (unsigned long i=0; i<size; i++)   {
        cout << s[i];
}

return 0;
};



