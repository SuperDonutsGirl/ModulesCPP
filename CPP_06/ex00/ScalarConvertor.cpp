#include "ScalarConvertor.hpp"
ScalarConvertor::ScalarConvertor(){
}

ScalarConvertor::ScalarConvertor(ScalarConvertor const &inst){
    *this = inst;
}

ScalarConvertor &ScalarConvertor::operator=(ScalarConvertor const &inst){
    *this = inst;
    return *this;
}
ScalarConvertor::~ScalarConvertor(){
}

static int getType(std::string literal){
    if (isChar(literal))
		return CHAR;
	else if (isInt(literal))
		return INT;
	else if (isFloat(literal))
		return FLOAT;
	else if (isDouble(literal))
		return DOUBLE;
	else{
		return ERR;
	}
}

void ScalarConvertor::convert(std::string literal){
    int type = getType(literal);

    switch (type){
        case CHAR :
            convertToChar(literal);
            break;
        case INT :
            convertToInt(literal);
            break;
        case FLOAT :
            convertToFloat(literal);
            break;
        case DOUBLE :
            convertToDouble(literal);
            break;
        default:
            std::cout << "'" << literal << "' can't be converted" << std::endl;
    }
}