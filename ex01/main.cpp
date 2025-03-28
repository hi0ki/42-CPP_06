#include "Serializer.hpp"

int main()
{
	Data *data = new Data();

	uintptr_t *var = Serializer :: serialize(data);

	
	return 0;
}