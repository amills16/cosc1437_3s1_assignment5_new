#ifndef UPPER_CASE_STRING_H
#define UPPER_CASE_STRING_H

#include <WCS_String.h>

class upperCaseString : public WCS_String
{
public:
	upperCaseString();
	upperCaseString(const upperCaseString &);
	upperCaseString(const WCS_String &);
	upperCaseString Concat(const upperCaseString &);
	upperCaseString Concat(const WCS_String &);
	upperCaseString Copy(const upperCaseString &);
	upperCaseString Copy(const WCS_String &);
	~upperCaseString();
	upperCaseString & operator = (const upperCaseString &);
	upperCaseString & operator = (const WCS_String &);
private:
	//upperCaseString toUpper(WCS_String &);
};

#endif // !UPPER_CASE_STRING_H