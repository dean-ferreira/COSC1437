#ifndef RECT_H
#define RECT_H

class InvalidSideException {
   private:
   bool isWidth;
   public:
   InvalidSideException(bool w = true):isWidth(w){};
   bool getIsWidth() { return isWidth; };
};

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
      double getArea();
      double getPerimeter();
};

#endif