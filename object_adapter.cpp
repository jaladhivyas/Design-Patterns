//#include<iostream>
//using namespace std;

///* Simple example is usb-ethernet adapter. Ethenet interface on one end and USB on other.
// * As both are incompatible we use adapter to convert them.
// *
// * In class adapter use when we have a class (client) expecting some type of object and
// * we have an object (Adaptee) offering same features but exposing different interface.
// *
// * Wrap an existing class with new interface. Convert interface of class to another
// * interface that clients expect.
// *
// * Adapter is about creating an intermediary abstraction that translates, or maps, the old
// * component to the new system. Clients call methods on the Adapter object which redirects
// * them into calls to the legacy component. This strategy can be implemented either
// * with inheritance or with aggregation.
// *
// */

//class Bird
//{
//  public:
//    virtual void fly() = 0;
//    virtual void makeSound() = 0;
//};

//class Sparrow: public Bird
//{
//    //Concrete implementaton of bird
//    void fly()
//    {
//        cout<<"sparrow flying";
//    }

//    void makeSound()
//    {
//        cout<<"Chi Chi";
//    }
//};


//class ToyDuck
//{
//  public:
//    virtual void squeak() = 0;
//};

//class PlasticToyDuck : public ToyDuck
//{
//   public:
//    void squeak()
//    {
//        cout<<"Squeak";
//    }
//};

//// Adapter class

//class BirdAdapter:public ToyDuck
//{
//  public:
//    BirdAdapter(Bird *b)
//        : b(b)
//    {}

//    void squeak()
//    {
//        b->makeSound();
//    }

//   private:
//     Bird *b;
//};

//int main()
//{
//    Sparrow *sparrow = new Sparrow();
//    ToyDuck *toyduck = new PlasticToyDuck();

//    // Wrap a bird in bird adapter so it behaves
//    // like a toy duck
//    ToyDuck *birdAdapter = new BirdAdapter(sparrow);
//    birdAdapter->squeak();
//    return 0;
//}
