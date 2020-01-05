//#include<iostream>
//using namespace std;

///* It separates abstraction from its implimentation.
// *
// * It allows abstraction and implimentation to be develop independently and allows client
// * to access only abstraction part.
// *
// * The abstraction is an interface or abstract class and implimentator is also interface or
// * abstract class
// *
// * The abstraction contains reference to the implementor. Children of abstraction is called
// * referred to as a refined abstraction and children of implementor as concrete implementator.
// *
// * Once can change the reference to the implementator in abstraction we can change the abstraction
// * implementator at run time.
// *
// * Changes to the implementator do not affect the client code.
// *
// * It increases the lose coupling between class abstraction and its implementation
// *
// */

//class WorkShop
//{
// public:
//  virtual void work() = 0;
//};


//class Produce:public WorkShop
//{
//  public:
//   void work()
//   {
//     cout<<"Produced";
//   }
//};

//class Assemble: public WorkShop
//{
//  public:
//    void work()
//    {
//       cout<<"Assemble";
//    }
//};


//class Vehicle
//{
//  protected:
//    WorkShop *workshop1;
//    WorkShop *workshop2;

//    Vehicle(WorkShop &workshop1, WorkShop &workshop2)
//    {
//        this->workshop1 = &workshop1;
//        this->workshop2 = &workshop2;
//    }
//  public:
//    virtual void manufacture(){}
//};

//class Car: public Vehicle
//{
//public:
//    Car(WorkShop &workshop1, WorkShop &workshop2):
//        Vehicle(workshop1, workshop2)
//    {
//    }

//    void manufacture()
//    {
//        cout<<"Car manufacture";
//    }
//};

//class Bike: public Vehicle
//{
//public:
//    Bike(WorkShop &workshop1, WorkShop &workshop2):
//        Vehicle(workshop1, workshop2)
//    {
//    }

//    void manufacture()
//    {
//        cout<<"Bike manufacture";
//    }
//};


//int main()
//{
//    Produce *p1 = new Produce();
//    Produce *p2 = new Produce();

//    Assemble *p3 = new Assemble();
//    Assemble *p4 = new Assemble();

//    Vehicle *v1 = new Car(*p1, *p3);
//    v1->manufacture();

//    Vehicle *v2 = new Bike(*p2, *p4);
//    v2->manufacture();

//    return 0;
//}
