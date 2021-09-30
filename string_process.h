#include <Arduino.h>
class string_process
{
private:
    /* data */
public:
  uint16_t  String_Leng(std::string _string);
  bool String_Compare(std::string _string_1,std::string _string_2);
  const char* String_toChar(std::string _string);
  bool SearchArrayInArray(const char* _string_source,const char* _string_search,uint8_t _time, uint16_t _length);
};

