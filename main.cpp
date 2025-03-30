#include <iostream>


class base
{
	public:
		virtual void function()
		{
			std::cout << "chti\n";
		}
};

class child1 : public base
{

};

class child2 : public base
{

};

int main()
{
	base *bs = new base();
	child1 *chid = dynamic_cast<child1 *>(bs);
	std::cout << chid << std::endl;
	std::cout << bs << std::endl;
}




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


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 88;
  
//     // Store the address of number in nptr
//     int* nptr = &n;

//     // Reinterpreting the pointer as a char pointer
//     char* charptr = reinterpret_cast<char*>(nptr);

//     // Printing the memory addresses and values
//     cout << "Integer Address: " << &nptr << endl;
//     cout << "Char Address: " << charptr;

//     return 0;
// }


// #include <iostream>
// #include <cstdint>

// int main() {
//     int value = 42;
//     int* ptr = &value;

//     uintptr_t numericAddress = reinterpret_cast<uintptr_t>(ptr);

//     std::cout << "Original Pointer Address: " << ptr << std::endl;
//     std::cout << "Numeric Address (uintptr_t): " << numericAddress << std::endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;
 
// int main()
// {
//     int p =66;
//     char* ch = reinterpret_cast<char*>(p);
//     std::cout << *ch << std::endl;
//     cout << p << endl;
//     return 0;
// }