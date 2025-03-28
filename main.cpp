// #include <iostream>


// class base
// {
// 	public:
// 		virtual void function()
// 		{
// 			std::cout << "chti\n";
// 		}
// };

// class child1 : public base
// {

// };

// class child2 : public base
// {

// };

// int main()
// {
// 	child1 &child;
// 	base bs = dynamic_cast<base &>(child);
// 	std::cout << &child << std::endl;
// 	chd2->function();
// }




// #include <iostream>
// using namespace std;

// int main() {

    
// 	int i = 10;
//     // Pointer to a const int
//      int const*  ptr = &i;

//     int* nonConstPtr = ptr; //if we use this
//     instead of without using const_cast
//     we will get error of invalid conversion
//     int* nonConstPtr = const_cast<int*>(ptr);
//     // const_cast<int>(*ptr) = 5;

//     cout << *ptr;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n = 88;
  
    // Store the address of number in nptr
    int* nptr = &n;

    // Reinterpreting the pointer as a char pointer
    char* charptr = reinterpret_cast<char*>(nptr);

    // Printing the memory addresses and values
    cout << "Integer Address: " << &nptr << endl;
    cout << "Char Address: " << charptr;

    return 0;
}