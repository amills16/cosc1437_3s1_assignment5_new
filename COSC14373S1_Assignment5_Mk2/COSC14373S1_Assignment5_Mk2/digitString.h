#ifndef DIGIT_STRING
#define DIGIT_STRING

#include <WCS_String.h>

class digitString : public WCS_String
{
public:
	digitString();
	digitString(const digitString &);
	digitString(const WCS_String &);
	digitString Concat(const digitString &);
	digitString Concat(const WCS_String &);
	digitString Copy(const digitString &);
	digitString Copy(const WCS_String &);
	~digitString();
	digitString & operator =	(const digitString &);
	digitString & operator =	(const WCS_String &);
	digitString & operator &=	(const WCS_String &);
	digitString & operator &=	(const digitString &);
	digitString & operator >>	(const WCS_String &);
	digitString & readIn		(const istream &);
	digitString & setAt			(char *, int);

private:

};

#endif // !DIGIT_STRING_H