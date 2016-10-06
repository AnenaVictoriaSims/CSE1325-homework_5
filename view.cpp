 #include "std_lib_facilities.h"
 #include "view.h"
View::View(){
   cout << "Main Menu\n**************\n";
   cout << "1) Create\n";
   cout << "2) Report\n";
   cout << "3) Save\n";
   cout << "4) Quit\n";
   cout << "5) View Documentation.\n";
   cout << "Command?: ";
}
void View::main_menu(){
   cout << endl<<endl;
   cout << "Main Menu\n**************\n";
   cout << "1) Create\n";
   cout << "2) Report\n";
   cout << "3) Save\n";
   cout << "4) Quit\n";
   cout << "5) View Documentation.\n";
   cout << "Command?: ";
}
void View::print_documentation(){
    cout << "This is a simple library program. Type in the numbers corresponding to the options listed into the request line to get started. Initially their is no publications, so step 1 would be to type 1 in the request line to add a new publication. To exit the program type any letters in the request line.";
}