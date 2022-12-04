/*
In this exercise, you will work with 3 classes: Shape, Triangle and Rectangle.

The first class is the class Shape. The Shape class has two float type properties: center_x and center_y. The Shape class also has the following methods:

a constructor Shape(), that will set center_x and center_y to zero.
set/get functions for the two attributes
1) You need to implement two additional functions for Shape:

setCenter(float x, float y), that will set the new center and print:
Figure moved to [<center_x>,  <center_y>]
draw(), that will print:
Drawing Figure at [<center_x>,  <center_y>]
2) You will have to implement another class, called Triangle, which inherits from the Shape class. The Triangle class has one int attribute: side. The Triangle class has the following methods:

a constructor that will receive one int parameters (side)
set/get for its attribute
setCenter(float x, float y), that will set the new center and print:
Triangle moved to [<center_x>,  <center_y>]
draw(), that will print the following message and draw the triangle depending on the size of the side:
Drawing Triangle at [<center_x>,  <center_y>]
*
**
***
//example of side = 3
3) You will have to implement another class, called Rectangle, which inherits from the Shape class. The Rectangle class has two int attributes: base and height. The Rectangle class has the following methods:

a constructor that will receive two int parameters (base, height)
set/get for its attributes
setCenter(float x, float y), that will set the new center and print:
Rectangle moved to [<center_x>,  <center_y>]
draw(), that will print the following message and draw the triangle depending on the size of the base and height:
Drawing Rectangle at [<center_x>,  <center_y>]
****
****
****
//example of base = 4 and height = 3
4) Finally, in your main you will create a move function that will take 3 parameters: a Shape, and two floats(x and y). This function will first set a new center for the figure and then draw the figure.

Use polymorphism to make sure each object is drawn correctly!
*/

#include <iostream>

// Add headers!!
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

// Define your move function
void move(Shape* figure, float x, float y) {
  figure->setCenter(x, y);
  figure->draw();
}

int main() {
  // Uncomment when ready to test
  Shape* figure = new Shape();
  Rectangle* rectangle = new Rectangle(6, 5);
  Triangle* triangle = new Triangle(3);

  move(figure, 6, 2);
  cout << endl;
  move(rectangle, 4, 6);
  cout << endl;
  move(triangle, 2, 9);
  return 0;
}
