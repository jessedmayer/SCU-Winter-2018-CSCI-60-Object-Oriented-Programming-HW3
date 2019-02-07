#include  <iostream>
#include <cstring>
using namespace std;

class Student{
        public:
        string name;
        int numClasses;                         //Integer value of the number of classes the student has taken
        string *classList;                      //Dynamic string array holding the student's classes
        void input();
        void output();
        void reset();
        void operator =(const Student& b);
        void destructor();
};
void Student::input(){                          //Takes user input to assign name,numClass,and classList
    cout<<"Enter Student's name: ";
    cin >> name;
    cout <<"Enter Number of Classes: ";
    cin >> numClasses;
    classList= new string[numClasses];
    for (int i=0; i<numClasses; i++){
        cout <<"Enter class #"<< i <<": ";
        cin >> classList[i];
    }
}
void Student::output(){                         //Displays the student's name and class list to the user
    cout<<"Students name: " << name <<endl;
    cout << "List of Classes: " << endl;
    for (int i=0; i<numClasses; i++) {
        cout << classList[i] << endl;
    }
}
void Student::reset(){                          //Resets the student's number of classes to 0 and the list of classes to null
    numClasses=0;
    destructor();
    classList=NULL;
}
void Student::destructor(){                     //Removes the student's classList from the memory
    delete []classList;
}
void Student::operator =(const Student& b){     //Makes a copy of classList using the assign operator
    for (int i=0; i<b.numClasses; i++){
        classList[i]=b.classList[i];
    }
}

int main(){
Student s1,s2;
s1.input();
s1.output();
s1.reset();
s1.output();
s2=s1;
s2.output();

    return 0;
}
