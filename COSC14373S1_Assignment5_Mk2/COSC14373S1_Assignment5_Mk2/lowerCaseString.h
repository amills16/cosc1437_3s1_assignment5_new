#ifndef LOWER_CASE_STRING
#define LOWER_CASE_STRING

#include <WCS_String.h>

class lowerCaseString : public WCS_String
{
public:
	lowerCaseString();
	lowerCaseString(const lowerCaseString &);
	lowerCaseString(const WCS_String &);
	lowerCaseString Concat(const lowerCaseString &);
	lowerCaseString Concat(const WCS_String &);
	lowerCaseString Copy(const lowerCaseString &);
	lowerCaseString Copy(const WCS_String &);
	~lowerCaseString();
	lowerCaseString & operator = (const lowerCaseString &);
	lowerCaseString & operator = (const WCS_String &);
private:
	static int x;
};

#endif // !LOWER_CASE_STRING_H