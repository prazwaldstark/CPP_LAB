/*
Write a program that has a class with a dynamically allocated character array as its data member. One object should
contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two
strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors
to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character
array. Make your own function for the concatenation of two strings.*/
//SOLUTION

#include <iostream>
#include <cstring>
using namespace std;

class String{

private:

    void allocate_mem()
    {
        char* str = new char[50];
    }

    void free_mem()
    {
        delete [] str;
    }

public:

    String(const char *string_)
    {
        str =const_cast<char *> string_;
    }

    ~String()
    {
        free_mem();
    }

    void join(String s1,String s2)
    {
        allocate_mem();
        //strcpy(str, s1.str);
        strcat(s1.str,s2.str);
    }

    void display_result()
    {
        cout<<str;
    }
};

int main(){
    String s1("Engineers are ");
    String s2("Creatures of Logic");
    s1.join(s1,s2);
    s1.display_result();
    return 0;
}