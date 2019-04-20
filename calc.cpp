#include <iostream>
#include <sstream>
#include <string>
#include "calcex.h"
#include "calculator.h"
using namespace std;

Calculator* calc;

int main(int argc, char* argv[]) {
   string line;
   char var= 'a';
   try {
     calc = new Calculator();
     do {
       
      cout << var <<" = ";
      cout.flush();
      getline(cin, line);
      // line + '\n';
      string l=line;
      if (!cin){break;}
      
      if ( line ==" " || l.length() ==0 ){
	cout << " " <<endl;
	

      }else{
       
      //calc = new Calculator();

      int result = calc->eval(line);

      cout << var <<" <- " ;
      cout << result << endl;
      var+=1;}
      cout <<""<<endl;

      
   } while (true);
      delete calc;
      
   }catch(Exception ex) {
      cout << "Program Aborted due to exception!" << endl;
   }
}
   
