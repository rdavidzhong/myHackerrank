/*
 Although classes and structures have the same type of functionality, there are some basic differences. The data members of a class are private by default and the members of a structure are public by default. Along with storing multiple data in a common block, it also assigns some functions (known as methods) to manipulate/access them. It serves as the building block of Object Oriented Programming.
 
 It also has access specifiers, which restrict the access of member elements. The primarily used ones are the following:
 
 public: Public members (variables, methods) can be accessed from anywhere the code is visible.
 private: Private members can be accessed only by other member functions, and it can not be accessed outside of class.
 */

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


/*
 Enter code for class Student here.
 Read statement for specification.
 */

class Student{
public:

    void set_age(int _)
    {
        age = _;
    }
    
    void set_first_name(string _)
    {
        first_name = _;
    }
    
    void set_last_name(string _)
    {
        last_name = _;
    }
    
    void set_standard(int _)
    {
        standard = _;
    }
    
    int get_age()
    {
        return age;
    }
    
    string get_first_name()
    {
        return first_name;
    }
    
    string get_last_name()
    {
        return last_name;
    }
    
    int get_standard()
    {
        return standard;
    }
    
    string to_string()
    {
        return ::to_string(age)+","+first_name+","+last_name+","+::to_string(standard);
    }
    
private:
    int age;
    string first_name;
    string last_name;
    int standard;

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

/* mistakes
 
 class Student{
 public:
 //    int get_age(age);
 //    string get_first_name(string first_name);
 //    string get_last_name(string last_name);
 //    int get_standard(int standard);
 //
 //    int set_age(int age);
 //    string set_first_name(string first_name);
 //    string set_last_name(string last_name);
 //    int set_standard(int standard);
 
 */
