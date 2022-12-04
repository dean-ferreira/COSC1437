#ifndef RECT_H
#define RECT_H

class Rectangle {
   private:
      double length;
      double width;
      
   public:
      Rectangle();                                                                           
      Rectangle(double l, double w);   
      void setLength(double l);                 
      void setWidth(double w);                  
      double getLength(); 
      double getWidth();
      
      //overloading operators needed for sorting and testing
      bool operator>(const Rectangle &other); // you can choose to overload the < operator if needed
      bool operator!=(const Rectangle &other);
};

#endif