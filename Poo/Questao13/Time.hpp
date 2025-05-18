//impede que múltiplas inclusões ocorram
#pragma once
#include <ctime>
#include <string>

class Time 
{
public:
  Time(); //construtor

  //funções set
  void setTime( int , int , int ); //protótipo

  void setHour( int h ) { hour = (h >=0 && h < 24) ? h : 0; }
  
  void setMinute( int m ) { minute = (m >= 0 && m < 60) ? m : 0; }

  void setSecond( int s ){ second = (s >= 0 && s < 60) ? s : 0; }
  void Tick();

  //funções get
  int getHour() const { return hour; }
  int getMinute() const { return minute; }
  int getSecond() const { return second; }

  std::string toUniversal() const;
  std::string toStandard() const;

private:
  std::time_t tempoatual = std::time(nullptr);
  std::tm* tempolocal = std::localtime(&tempoatual);
  int hour;
  int minute;
  int second;
};
