#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

	#include <iostream>

	typedef struct s_data
	{
		std::string myname;
		int myage;
	} Data;

	class Serializer {
		private:
			Serializer();
			~Serializer();
		public:
			uintptr_t serialize(Data* ptr);
			Data* deserialize(uintptr_t raw);
	};
#endif