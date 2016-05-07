#pragma GCC diagnostic error "-std=c++11"
#include <iostream>
#include <vector>
#include "Chapter13.hy"
//#include <initializer_list>

struct X {
    X() { std::cout << "X()" << std::endl; }
    X(const X&) { std::cout << "X(const X&)" << std::endl; }
    X& operator=(const X&)
    {
        std::cout << "X& operator=(const X&)" << std::endl;
        return *this;
    }
    ~X() { std::cout << "~X()" << std::endl; }
};

void f(const X& rx, X x)
{
    std::vector<X> vec;
    vec.reserve(2);
    vec.push_back(rx);
    vec.push_back(x);
}

int main()
{
    X* px = new X;
    f(*px, *px);
    delete px;

    Message firstMail("hello");
    Message signInMail("welcome to cppprimer");
    Folder mailBox;

    firstMail.print_debug(); // print: "hello"
    firstMail.save(mailBox); // send to mailBox
    mailBox.print_debug();   // print: "hello"

    signInMail.print_debug(); // print "welcome to cppprimer"
    signInMail.save(mailBox); // send to mailBox
    mailBox.print_debug();    // print "welcome to cppprimer hello"

    firstMail = firstMail;   // test for assignment to self.
    firstMail.print_debug(); // print "hello"
    mailBox.print_debug();   // print "welcome to cppprimer hello"
    
    return 0;
}
