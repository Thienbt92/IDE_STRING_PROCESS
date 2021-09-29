#include "string_process.h"

uint16_t  string_process::String_Leng(std::string _string)
{
  const char* c = &_string[0];
  return strlen(c);
}

bool string_process::String_Compare(std::string _string_1,std::string _string_2)
{
  const char* c1 = &_string_1[0];
  const char* c2 = &_string_2[0];
  if(strcmp(c1,c2)==0)
    return false;
  else
    return true;
}
const char* string_process::String_toChar(std::string _string)
{
  const char* c = &_string[0];
  return c;
}