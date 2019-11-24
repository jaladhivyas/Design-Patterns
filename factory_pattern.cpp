#include <iostream>
using namespace std;

// It is a creational design pattern. It is related to object creation.
// Object is created, without exposing creational logic to client.

// Idea is to use static member function which creates and return instances,
// and hiding detail class modules from user.

//class Vehicle
//{
//  public:
//    virtual void printVehicle() = 0;
//};

//class TwoWheeler : public Vehicle
//{
//  public:
//    void printVehicle()
//    {
//      cout<<"It is two wheeler"<<endl;
//    }
//};

//class FourWheeler : public Vehicle
//{
//  public:
//    void printVehicle()
//    {
//        cout<<"This is four wheeler" <<endl;
//    }
//};

//class Client
//{
//  public:
//    Client(int type)
//    {
//      if(type == 1)
//        pVehicle = new TwoWheeler();
//      else if(type == 2)
//        pVehicle = new FourWheeler();
//      else
//        pVehicle = NULL;
//    }
//    ~Client()
//    {
//      if(pVehicle)
//      {
//        delete[] pVehicle;
//        pVehicle = NULL;
//      }
//    }

//    Vehicle *getVehicle()
//    {
//      return pVehicle;
//    }
//  private:
//    Vehicle *pVehicle;
//};

//int main()
//{
//  Client  *pClient  = new Client(1);
//  Vehicle *pVehicle = pClient->getVehicle();
//  pVehicle->printVehicle();
//  return 0;
//}

// Wrong thing in this design
// Each time a new change is made at library side,
// Client would need to make some corresponding changes at its end and
// recompile the code again.
// Bad design

// To avoid this problem - create static method

//enum VehicleType
//{
//  VT_TwoWheeler, VT_ThreeWheeler, VT_FourWheeler
//};

//class Vehicle
//{
//  public:
//    virtual void printVehicle()=0;
//    static Vehicle* create(VehicleType type);
//};

//class TwoWheeler: public Vehicle
//{
//  public:
//    void printVehicle()
//    {
//      cout<<"This is twoWheeler"<<endl;
//    }
//};

//class ThreeWheeler: public Vehicle
//{
//  public:
//    void printVehicle()
//    {
//      cout<<"This is threeWheeler"<<endl;
//    }
//};

//class FourWheeler: public Vehicle
//{
//  public:
//    void printVehicle()
//    {
//      cout<<"This is fourWheeler"<<endl;
//    }
//};

//Vehicle *Vehicle::create(VehicleType type)
//{
//  if(type == VT_TwoWheeler)
//  {
//    return new TwoWheeler();
//  }
//  else if(type == VT_ThreeWheeler)
//  {
//    return new ThreeWheeler();
//  }
//}

//class Client
//{
//  public:
//    Client(VehicleType type)
//    {
//      pVehicle = Vehicle::create(type);
//    }

//    ~Client()
//    {
//      if(pVehicle)
//      {
//        delete[] pVehicle;
//        pVehicle = NULL;
//      }
//    }

//    Vehicle *getVehicle()
//    {
//      return pVehicle;
//    }
//  private:
//    Vehicle *pVehicle;
//};

//int main()
//{
//  Client  *pClient  = new Client(VT_TwoWheeler);
//  Vehicle *pVehicle = pClient->getVehicle();
//  pVehicle->printVehicle();
//  return 0;
//}


//// Example2
//enum computerType
//{
//  desktop, laptop, workstation, server, supercomputer
//};
//class Computer
//{
//  public:
//  virtual void computerType() = 0;
//};

//class Desktop: public Computer
//{
//  public:
//  void computerType()
//  {
//    cout<<"This is Desktop"<<endl;
//  }
//};

//class Laptop: public Computer
//{
//  public:
//  void computerType()
//  {
//    cout<<"This is Laptop"<<endl;
//  }
//};

//class Workstation: public Computer
//{
//  public:
//  void computerType()
//  {
//    cout<<"This is workstation"<<endl;
//  }
//};

//class Server: public Computer
//{
//  public:
//  void computerType()
//  {
//    cout<<"This is Server"<<endl;
//  }
//};

//class SuperComputer: public Computer
//{
//  public:
//  void computerType()
//  {
//    cout<<"This is superComputer"<<endl;
//  }
//};

////class Factory
////{
////  public:
////    static Computer* getComputerType(computerType type);
////  private:
////    Computer *compType;
////};

//static Computer* getComputerType(computerType type)
//{
//  if(type == desktop)
//      return new Desktop();
//  else if(type == laptop)
//      return new Laptop();
//  else if(type == workstation)
//      return new Workstation();
//  else if(type == server)
//      return new Server();
//  else if(type == supercomputer)
//      return new SuperComputer();
//  else
//      return NULL;
//}

//int main()
//{
//  Computer *comp = getComputerType(desktop);
//  comp->computerType();
//}



