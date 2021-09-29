#include <Arduino.h>
class string_process
{
private:
    /* data */
public:
  uint16_t  String_Leng(std::string _string);
  bool String_Compare(std::string _string_1,std::string _string_2);
  const char* String_toChar(std::string _string);
};

