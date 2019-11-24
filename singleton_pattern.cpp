// It ensures that there is single instance of class in program
// Restricts the instantiation of a class to one object.
// Use lazy initialization

// Lazy initialization: The tectic of delaying creation of an object, calculation of value or
// some other expensive process until the first time it is needed.


//  Classic singleton
// use pointer to singleton
// Allows for inheritance
// Not-thread-safe.?

// Mayer's singleton
// Thread safe?
// Does not allow inheritance
// Usually used unless inheritance is needed.

#include<iostream>
using namespace std;
#include<vector>
class MayersSingleton
{
public:
  static MayersSingleton & instance()
  {
     static MayersSingleton s;
     return s;
  }

  void setMyVar1(int n)
  {
    myVar1_ = n;
  }

  void Print()
  {
    cout <<"Value of variable is"<< myVar1_<<endl;
  }
private:

 MayersSingleton()
 {}
 MayersSingleton(const MayersSingleton &)
 {}
 MayersSingleton& operator=(const MayersSingleton)
 {}

 int myVar1_;
};

class ClassicSingleton
{
public:
  static ClassicSingleton* instance()
  {
    if(onlyInstance == nullptr)
    {
       onlyInstance = new ClassicSingleton();
       return onlyInstance;
    }
    return onlyInstance;
  }

  void setMyVar2(int n)
  {
    myVar2_ = n;
  }

  void Print()
  {
    cout <<"Classic Value of variable is"<< myVar2_<<endl;
  }

private:
   static ClassicSingleton* onlyInstance;
   int myVar2_;
};

ClassicSingleton* ClassicSingleton::onlyInstance = nullptr;

//int main()
//{
//  int x=2, y=3, z=4;
//  cout<<"---Meyers singleton---"<<endl;
//  MayersSingleton& mayerExamp1 = MayersSingleton::instance();
//  MayersSingleton& mayerExamp2 = MayersSingleton::instance();
//  mayerExamp1.setMyVar1(x);
//  mayerExamp2.Print();
//  mayerExamp2.setMyVar1(z);
//  mayerExamp1.Print();
////  system("PAUSE");

//  ClassicSingleton* classicsingleton1 = ClassicSingleton::instance();
//  ClassicSingleton* classicsingleton2 = ClassicSingleton::instance();

//  classicsingleton1->setMyVar2(y);
//  classicsingleton2->Print();
//  classicsingleton2->setMyVar2(z);
//  classicsingleton1->Print();
//  system("PAUSE");
//}
