#include "digitString.h"
#include <cctype>
#include <exception>

digitString::digitString()
{}

digitString::digitString(const digitString & DS) : WCS_String(DS)
{}

digitString::digitString(const WCS_String & Str) : WCS_String(Str)
{
	int c, len;
	for (c = 0, len = Str.Length(); c < len; c++)
	{
		if (!isdigit(Str[c]))
		{
			cout << "Character '" << Str[c] << "' at position: " << c << " is not a digit..." << endl;
			throw 01;
		}
	}
}

digitString digitString::Concat(const digitString & DS)
{
	WCS_String::Concat(DS);
	return *this;
}

digitString digitString::Concat(const WCS_String & Str)
{
	WCS_String::Concat(Str);
	
	return *this;
}

digitString digitString::Copy(const digitString & DS)
{
	int c, len;
	for (c = 0, len = DS.Length(); c < len; c++)
	{
		if (!isdigit(DS[c]))
		{
			cout << "Character '" << DS[c] << "' at position: " << c << " is not a digit..." << endl;
			throw 01;
			break;
		}
		else if (c == len-1)
		{
			WCS_String::Copy(DS);
		}
	}
	return *this;
}

digitString digitString::Copy(const WCS_String & Str)
{
	int c, len;
	for (c = 0, len = Str.Length(); c < len; c++)
	{
		if (!isdigit(Str[c]))
		{
			cout << "Character '" << Str[c] << "' at position: " << c << " is not a digit..." << endl;
			throw 01;
			break;
		}
		else if (c == len-1)
		{
			WCS_String::Copy(Str);
		}
	}
	return *this;
}

digitString &digitString::operator = (const digitString & DS)
{
	Copy(DS);
	return *this;
}

digitString &digitString::operator = (const WCS_String & DS)
{
	Copy(DS);
	return *this;
}

digitString & digitString::operator&=(const WCS_String & Str)
{
	Concat(Str);
	return *this;
}

digitString & digitString::operator&=(const digitString & DS)
{
	return *this;
}

digitString & digitString::operator>>(const WCS_String & DS)
{
	return *this;
}

digitString::~digitString()
{}