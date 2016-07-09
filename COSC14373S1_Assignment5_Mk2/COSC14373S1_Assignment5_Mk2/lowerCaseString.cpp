#include "lowerCaseString.h"

lowerCaseString::lowerCaseString()
{}

lowerCaseString::lowerCaseString(const lowerCaseString & LC): WCS_String (LC)
{}

lowerCaseString::lowerCaseString(const WCS_String & Str) : WCS_String(Str)
{
	ToLower();
}

lowerCaseString lowerCaseString::Concat(const lowerCaseString & LC)
{
	WCS_String::Concat(LC);
	return *this;
}

lowerCaseString lowerCaseString::Concat(const WCS_String & Str)
{
	WCS_String::Concat(Str);
	ToLower();
	return *this;
}

lowerCaseString lowerCaseString::Copy(const lowerCaseString & LC)
{
	WCS_String::Copy(LC);
	return *this;
}

lowerCaseString lowerCaseString::Copy(const WCS_String & Str)
{
	WCS_String::Copy(Str);
	ToLower();
	return *this;
}

lowerCaseString &lowerCaseString::operator = (const lowerCaseString & LC)
{
	Copy(LC);
	ToLower();
	return *this;
}

lowerCaseString &lowerCaseString::operator = (const WCS_String & LC)
{
	Copy(LC);
	ToLower();
	return *this;
}

lowerCaseString::~lowerCaseString()
{}