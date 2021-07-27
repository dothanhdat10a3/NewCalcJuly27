
namespace CalcAlg
{
	static inline long long* castToDecimal(long long n_number, long long n_numberDecimal[], long long n_getNumberDecimal[])
	{
		int i;
		for (i = 0; n_number > 0; i++)
		{
			n_numberDecimal[i] = n_number % 10;
			n_number = n_number / 10;
		}

		for (i = i - 1; i >= 0; i--)
		{
			n_getNumberDecimal += n_numberDecimal[i];
		}
		
	}
	static inline long long* castToBinary(long long n_number, long long n_numberBin[], long long n_getNumberBin[])
	{
			int i;
			for (i = 0; n_number > 0; i++)
			{
				n_numberBin[i] = n_number % 2;
				n_number = n_number / 2;
			}

			for (i = i - 1; i >= 0; i--)
			{
				n_getNumberBin += n_numberBin[i];
			}
	}
	static inline long long* castToOctal(long long n_number, long long n_numberOct[], long long n_getNumberOct[])
	{
			int i;
			for (i = 0; n_number > 0; i++)
			{
				n_numberOct[i] = n_number % 8;
				n_number = n_number / 8;
			}

			
			for (i = i - 1; i >= 0; i--)
			{
				n_getNumberOct += n_numberOct[i];
			}
			return n_getNumberOct;
			

	}
	static inline long long* castToHexadecimal(long long n_number, long long n_numberHex[], long long n_getNumberHex[])
	{
		int i;
		for (i = 0; n_number > 0; i++)
		{
			n_numberHex[i] = n_number % 16;
			n_number = n_number / 16;
		}
		for (i = i - 1; i >= 0; i--)
		{
			n_getNumberHex += n_numberHex[i];
		}
		
	}
};
