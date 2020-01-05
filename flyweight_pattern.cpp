//#include<iostream>
//using namespace std;

///* It is a structural design pattern
// * Used when we want to share object instances across very large data structures
// * Support very large number of fine grained objects
// * State information of each object can be retrived on demand
// *
// * It is a structural design pattern that lets you to fit more objects into available
// * amount of ram by sharing common parts of object state among multiple objects instead of
// * keeping it in each object separately
// *
// * Intrincic Object: Sharing common properties
// * Extrancic Object: Separate properties
// *
// */

//class Model
//{
//  private:
//    string m_name;
//    int m_capacity;
//    int m_speed;
//  public:
//    virtual void showDetails()
//    {
//      cout<<"Name "<<m_name<<" Capacity"<<m_capacity<<endl;
//    }
//    Model(string name, int capacity, int speed):
//        m_name(name),
//        m_capacity(capacity),
//        m_speed(speed){}
//    Model(){};
//};

///*FlyWeight concrete class*/
//class Airbus380: public Model
//{
//  public:
//      Airbus380():Model("Airbus380", 200, 800){}
//};

///*FlyWeight concrete class*/
//class Boing787: public Model
//{
//  public:
//      Boing787():Model("Boing787", 600, 1000){}
//};

///*FlyWeight concrete class*/
//class Boing797: public Model
//{
//  public:
//      Boing797():Model("Boing797", 1200, 1500){}
//};

//class FlyWeightFactory
//{
// private:
//    static Airbus380* s_airBus380;
//    static Boing787*  s_boing787;
//    static Boing797*  s_boing797;

// public:
//    static Model* getModel(int type)
//    {
//        switch(type)
//        {
//        case 380:
//            if(!s_airBus380)
//            {
//              s_airBus380 = new Airbus380();
//            }
//            return s_airBus380;
//        case 787:
//            if(!s_boing787)
//            {
//              s_boing787 = new Boing787();
//            }
//            return s_boing787;

//        case 797:
//            if(!s_boing797)
//            {
//              s_boing797 = new Boing797();
//            }
//            return s_boing797;
//        default:
//            cout<<"Unknown Aeroplane type"<<endl;
//            return NULL;
//        }
//    }
//};


//Airbus380* FlyWeightFactory::s_airBus380;
//Boing787*  FlyWeightFactory::s_boing787;
//Boing797*  FlyWeightFactory::s_boing797;

//class Aeroplane:public Model
//{
//private:
//    Model* m_model;
//    string m_mfgDate;
//    int m_id;
//public:
//    Aeroplane(Model *model, string date, int id):
//        m_model(model),
//        m_mfgDate(date),
//        m_id(id){}
//    virtual void showDetails()
//    {
//        m_model->showDetails();
//        cout<<"MfgDate "<<m_mfgDate<<" "<<"Serial No "<<" "<<m_id<<endl;
//    }

//};

//int main()
//{
//  Aeroplane first =  Aeroplane(FlyWeightFactory::getModel(787), "10th Feb 1987", 100213);
//  Aeroplane second = Aeroplane(FlyWeightFactory::getModel(797), "10th Feb 1987", 100214);
//  Aeroplane third =  Aeroplane(FlyWeightFactory::getModel(787), "20th Jan 1987", 100215);
//  Aeroplane forth =   Aeroplane(FlyWeightFactory::getModel(380), "10th Mar 1987", 200216);

//  first.showDetails();
//  second.showDetails();
//  third.showDetails();
//  forth.showDetails();
//  return 0;
//}
