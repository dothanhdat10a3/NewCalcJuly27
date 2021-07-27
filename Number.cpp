#include "CalcAlg.cpp"

enum INPUT_TYPE {
	DECIMAL = 10,
	OCTAL = 8,
	BINARY = 2,
	HEXADECIMAL = 16
};

class Number
{
	Number(){}
	~Number(){}
private:
	long long n_number;
	
	long long n_numberDecimal[64];
	long long n_getNumberDecimal[64];
	long long n_numberBin[64];
	long long n_getNumberBin[64];
	long long n_numberOct[64];
	long long n_getNumberOct[64];
	long long n_numberHex[64];
	long long n_getNumberHex[64];
public:
	void setNumber(INPUT_TYPE inputType)
	{
		switch (inputType)
		{
		case DECIMAL:
			CalcAlg::castToDecimal(n_number, n_numberDecimal, n_getNumberDecimal);
			break;
		case BINARY:
			CalcAlg::castToBinary(n_number,n_numberBin, n_getNumberBin);
			break;
		case OCTAL:
			CalcAlg::castToOctal(n_number, n_numberOct, n_getNumberOct);
			break;
		case HEXADECIMAL:
			CalcAlg::castToHexadecimal(n_number, n_numberHex, n_getNumberHex);
			break;
		default:
			break;


		}
	}

	long long* getDecimalNumber()
	{
		return n_getNumberDecimal;
	}
	long long* getBinaryNumber()
	{
		return n_getNumberBin;
	}
	long long* getOctalNumber()
	{
		return n_getNumberOct;
	}
	long long* getHexadecimalNumber()
	{
		return n_getNumberHex;
	}
};
