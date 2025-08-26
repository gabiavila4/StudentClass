//
//  main.cpp
//  StudentClass
//
//  Created by Gabriela Avila on 8/25/25.
//

#include <iostream>

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n";
//    return 0;
//}
#include <cassert>
using namespace std;
class Student {
public:
     string first_name;
     string last_name;
     int number_of_credits;
     const int student_id = (rand() % 1000);

   
    Student(string firstName, string lastName){
        first_name = firstName;
        last_name = lastName;
        number_of_credits = 0;
//        const int student_id = (rand() % 1000);
    }
    void add_credits(int increase)
    {
        number_of_credits = number_of_credits + increase;
    }
    void reset_credits()
    {
        number_of_credits = 0;
    }
    void get_info()
    {
        cout << "Name: " <<first_name<< " " <<last_name<< "";
        cout << "ID: " <<student_id<< "";
    }
};
 
int main() {
  Student student = Student("Bob", "Bobberson");
 
  assert(student.first_name == "Bob");
  assert(student.number_of_credits == 0);
 
  student.add_credits(6);
  student.add_credits(2);
 
  assert(student.number_of_credits == 8);
 
  student.reset_credits();
 
  assert(student.number_of_credits == 0);
    
    student.get_info();
 
  return 0;
}
