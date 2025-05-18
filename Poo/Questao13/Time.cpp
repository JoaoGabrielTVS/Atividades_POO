#include <iostream>
#include <format>
using std::cout, std::endl, std::format;


#include "Time.hpp"

Time::Time()
{
  setTime(tempolocal->tm_hour, tempolocal->tm_min,tempolocal->tm_hour);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const
{
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::Tick(){
    if(getSecond()<59 )
      setSecond(getSecond()+1);
    else
      if(getMinute() < 59)
        setMinute(getMinute() + 1);
      else
        if(getHour()<23)
          setHour(getHour()+1);
        else
          setHour(0);
          setMinute(0);
          setSecond(0);

}
