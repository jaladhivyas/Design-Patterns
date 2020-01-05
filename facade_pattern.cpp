//#include<iostream>
//using namespace std;

///* It hides the complexicities of the system and provides the
// * interface to the client from where the client can access the
// * system.
// */

//class Shape
//{
//  public:
//   virtual void draw() = 0;
//};

//class Rectangle: public Shape
//{
//  public:
//   void draw()
//   {
//       cout<<"Rectangle draw"<<endl;
//   }
//};

//class Circle: public Shape
//{
//  public:
//   void draw()
//   {
//     cout<<"Circle draw"<<endl;
//   }
//};

//class Square: public Shape
//{
//  public:
//    void draw()
//    {
//      cout<<"Square draw"<<endl;
//    }
//};

//class ShapeMaker
//{
//private:
//    Shape *circle;
//    Shape *rectangle;
//    Shape *square;
//public:
//   ShapeMaker()
//   {
//       circle    = new Circle();
//       rectangle = new Rectangle();
//       square    = new Square();
//   }
//   void drawCircle()
//   {
//       circle->draw();
//   }

//   void drawRectangle()
//   {
//       rectangle->draw();
//   }

//   void drawSquare()
//   {
//       square->draw();
//   }
//};

//int main()
//{
//    ShapeMaker *shapeMaker = new ShapeMaker();
//    shapeMaker->drawCircle();
//    shapeMaker->drawRectangle();
//    shapeMaker->drawSquare();

//    return 0;
//}
