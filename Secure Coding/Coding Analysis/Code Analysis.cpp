// QuestionableCode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cassert>
#include <iostream>//standard input and output
#include <numeric>
#include <set>
#include <vector> //this is used with sequence containers



#include <string>class C
{
  std::set<int> typedefs; //set the number(s) to definition types (int)
  bool is_type(int type) const //an unchangable type that is a boolean number
  {
    if (typedefs.find(type) != typedefs.end()) //if the type defs are not at the end of the file, 
   
      return typedefs.find(type) !=typedefs.end(); //the return file type is not what I am looking for
  }
};

class A
{
  int x; //x represents a number
  A(const A& other) {} //an unchangable variable that is the class of 'A' & another
};

class MySpecialType
{
public:
  int MyVal = 1; //the integer value is set to 1
    void DontThrow() noexcept{ // do not throw the error message...
      throw "Ha! I threw anyway!"; // "override" to throw the error message
    }
};

void foo(int** a)
{
  int b = 1; //integer b is set to 1
  *a = &b; //'a' is now the value of b
}

void work_with_arrays(int count)// counting the array indexes
{
  int buf[10]; //the buffer is  10
  if (count == 1000) //if the count is exaclty 1000
    buf[count] = 0; // <- ERROR, the value is then set to 0
    //This prevents numeric overflow in CPP code
}

void do_something_useless()
{
  int sum = 0; //sum is set to 0
  for(auto i = 0; i < 1000; ++i) //we start the count a zero,
  //as long as the value of 'i' is less than 1000, the program 
  //will continue to increment by one (count by ones)
  {
    sum += i; //the sum is taken with the loop count
    //(zero is added to the loop count.so the program is sstill counting by ones)
  }
  // print to the console for the user to view the counted sum concatenated with the message ending on a new line
  std::cout << "I summed up " << sum << " as the answer." << std::endl;
}

void vector_test()
{
  std::vector<int> items;// an  automatic resizable array (VECTOR)
  items.push_back(1);
  items.push_back(2);
  items.push_back(3);

  std::vector<int>::iterator iter; // added the iterator (counter)
   //to the vector and gave it the name 'iter'
  for (iter = items.begin(); iter != items.end(); ++iter) { //loop through the vector starting at the 0th index
  //as long as the iteratoris not at the end of the vector, the program will increment by one
    if (*iter == 2) { //if the iterator with the pointer is the exact same as the number two, 
      items.erase(iter); // the item in the vector with be erased (iter/the counter)
    }
  }
}

int a;
bool my_function()
{
  a = 1 + 2;
  return a;
}

struct Token
{
  Token* next() { return nullptr;}
};

int foo(Token* tok)
{
  while (tok);
  tok = tok->next();

  return 0;
}


int main()
{
  std::vector<int> counts { 1, 2, 3, 5 };
  int x = 0;
  int y = 0;
  int z = 0;

  std::cout << "Welcome to the Questionable Code Test!" << std::endl;

  //do_something_useless();

  work_with_arrays(10);

  assert(z = 2);

  assert(my_function() == 3);

  try
  {
    int x = 5;
    int y = 5;
    int z = 5;
    std::cout << "x + y + z = " << (x + y + z) << std::endl;
  }
  catch(...)
  {
    
  }

  int* c;
  foo(&c);

  vector_test();

  MySpecialType myobject;
  std::cout << "myobject.MyVal = " << myobject.MyVal << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu