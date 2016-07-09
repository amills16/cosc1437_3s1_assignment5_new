#include "upperCaseString.h"

upperCaseString::upperCaseString()
{}

upperCaseString::upperCaseString(const upperCaseString & LC) : WCS_String(LC)
{}

upperCaseString::upperCaseString(const WCS_String & Str) : WCS_String(Str)
{
	ToUpper();
}

upperCaseString upperCaseString::Concat(const upperCaseString & LC)
{
	WCS_String::Concat(LC);
	return *this;
}

upperCaseString upperCaseString::Concat(const WCS_String & Str)
{
	WCS_String::Concat(Str);
	ToUpper();
	return *this;
}

upperCaseString upperCaseString::Copy(const upperCaseString & LC)
{
	WCS_String::Copy(LC);
	return *this;
}

upperCaseString upperCaseString::Copy(const WCS_String & Str)
{
	WCS_String::Copy(Str);
	ToUpper();
	return *this;
}

upperCaseString &upperCaseString::operator = (const upperCaseString & LC)
{
	Copy(LC);
	ToUpper();
	return *this;
}

upperCaseString &upperCaseString::operator = (const WCS_String & LC)
{
	Copy(LC);
	ToUpper();
	return *this;
}

upperCaseString::~upperCaseString()
{}