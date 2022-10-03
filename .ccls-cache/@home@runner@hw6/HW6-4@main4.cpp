#include <iostream>

using namespace std;

void astrologySign (int day, string month);

int main(){
  int N; //number of students

  cin >> N;

  for (int i = 0; i < N; i++){
    int day = 0;
    string month = "";
    cin >> day >> month;

    astrologySign(day, month);
  }
}

void astrologySign (int day, string month)
{
  string sign = "";
  
    if (month == "Jan")
    {
      if (day < 21)
        sign = "Capricorn";
      else
        sign = "Aquarius";
    }
    if (month == "Feb")
    {
      if (day < 20)
        sign = "Aquarius";
      else 
        sign = "Picses";
    }
    if (month == "Mar")
      {
        if (day < 21)
          sign = "Pisces";
        else 
          sign = "Aries";
      }
    if (month == "Apr")
        {
          if (day < 21)
            sign = "Aries";
          else 
            sign = "Taurus";
        }
    if (month == "May")
        {
          if (day < 21)
            sign = "Taurus";
          else 
            sign = "Gemini";
        }
    if (month == "Jun")
        {
          if (day < 22)
            sign = "Gemini";
          else 
            sign = "Cancer";
        }
    if (month == "Jul")
          {
            if (day < 23)
              sign = "Cancer";
            else 
              sign = "Leo";
          }
    if (month == "Aug")
          {
            if (day < 23)
              sign = "Leo";
            else 
              sign = "Virgo";
          }
    if (month == "Sep")
          {
            if (day < 23)
              sign = "Virgo";
            else 
              sign = "Libra";
          }
    if (month == "Oct")
          {
            if (day < 23)
              sign = "Libra";
            else 
              sign = "Scorpio";
          }
    if (month == "Nov")
          {
            if (day < 23)
              sign = "Scorpio";
            else 
              sign = "Sagittarius";
          }
     if (month == "Dec")
          {
            if (day < 23)
              sign = "Sagittarius";
            else 
              sign = "Capricorn";
          }
  cout << sign << "\n";
    
    
    
    
    
}