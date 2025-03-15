//with including namespace std:: we would not have to type "std::cout before console output"
#include <iostream>

bool do_even_more_custom_application_logic()
{
  // TODO: Throw any standard exception
  //the program is continuing to proccess
  std::cout << "Running Even More Custom Application Logic." << std::endl;

  return true;//return true such that the code continues to run
}
void do_custom_application_logic()
{
  
  std::cout << "Running Custom Application Logic." << std::endl; //let the user know the app will be run
  
  if(do_even_more_custom_application_logic()) //if the function is running...
  {
    std::cout << "Even More Custom Application Logic Succeeded." << std::endl; //let the user know the logic succeeded
  }


//create public structure called "my exception to throw the error message of "exception"
struct MyException : public std::exception {
  const char* what() const throw(){
      return "exception";//return statement to allow output to the console
 }

}MyException;
  std::cout << "Leaving Custom Application Logic." << std::endl; //after exception has been fulfilled the app will stop...
}

float divide(float num, float den)
{
  // TODO: Throw an exception to deal with divide by zero errors using
  //  a standard C++ defined exception
  return (num / den);//return the numbers to be divided
}

void do_division()
{
  //  TODO: create an exception handler to capture ONLY the exception thrown
  //  by divide.
  float numerator = 10.0f; //numerator instantiated to ten
  float denominator = 0; //denominator instantiated to 0
  float result = divide(numerator, denominator);//the result will be the numerator and the denonminator divided...

  //The numbers after operations will be concatenated with print statements
  std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
}


//*******************/
//    MAIN PROGRAM
//*******************/

int main()
{
  std::cout << "Exceptions Tests!" << std::endl;

  // TODO: Create exception handlers that catch (in this order):

  // std::exception
  // uncaught exception 
  //that wraps the whole main function, and displays a message to the console.
  //custom exceptio
try
{
  do_even_more_custom_application_logic();
}
catch(const std::exception& exception)
{
  std::cerr << exception.what() << '\n';
  std::cout << "caught exception" << std::endl;
}

 
   do_custom_application_logic();
}


 

