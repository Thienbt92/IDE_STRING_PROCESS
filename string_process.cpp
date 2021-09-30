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
/*******************************************************************************
Noi Dung    :   Tim mot chuoi trong mot chuoi.
Tham Bien   :   _string_source  :    Chuoi nguon.
                _string_search  :    Chuoi can tim.
                _time           :    Lan xuat hien cua chuoi can tim
                _length         :    Do dai toi da cac ki tu can duyet trong _string_source
Tra Ve      :   NULL            :    Neu khong tim duoc chuoi theo yeu cau.
                !=NULL          :    Vi tri con tro Qua thoi gian _time_wait ma khong co respond tra ve
********************************************************************************/
bool string_process::SearchArrayInArray(const char* _string_source,const char* _string_search,uint8_t _time, uint16_t _length)
{
  uint16_t IndexSource=0,IndexSearch=0;
  while(IndexSource<_length)
  {
    if(_string_source[IndexSource++]!=_string_search[IndexSearch++])
    {
      IndexSearch = 0;
      if(_string_search[IndexSearch]==_string_source[IndexSource-1])
        IndexSearch++;
    }
    if(_string_search[IndexSearch]==0)
    {
      if(--_time!=0)
      {
        IndexSearch = 0;
        continue;
      }
      return true;
    } 
  }
  return false;
}