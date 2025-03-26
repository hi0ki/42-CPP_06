#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

	#include <iostream>


	class Serializer {
		private:
			Serializer();
			~Serializer();
		public:
			uintptr_t serialize(Data* ptr);
			Data* deserialize(uintptr_t raw);
	};
#endif