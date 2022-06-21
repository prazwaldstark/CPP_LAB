/*
Write a program that has a class with a dynamically allocated character array as its data member. One object should
contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two
strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors
to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character
array. Make your own function for the concatenation of two strings.*/
#include <iostream>
#include <cstring>
using namespace std;
string con_string;
class Program{
public:
    string str1;
    Program(string string1){str1 = string1;}
    ~Program(){}
    string join(){
        con_string += str1;
        return con_string;
    }

    void display_result(){
        cout<<endl<<join();
    }
};

int main(){
    Program o1("Engineers are ");
    o1.join();
    Program o2("Creatures of Logic");
    o2.display_result();
}