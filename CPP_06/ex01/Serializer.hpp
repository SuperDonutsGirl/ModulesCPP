#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

typedef struct	s_Data
{
	std::string	content;
}				Data;

class Serializer{
    public:
        Serializer();
        Serializer(Serializer const &inst);
        Serializer &operator=(Serializer const &inst);
        ~Serializer();

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif