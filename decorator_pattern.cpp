//#include<iostream>
//using namespace std;

//class MilkShake
//{
//  public:
//    virtual string Serve() =0;
//    virtual float price() =0;
//};

//class BaseMilkShake:public MilkShake
//{
//  public:
//   string Serve()
//   {
//     return "MilkShape";
//   }

//   float price()
//   {
//     return 30;
//   }
//};

//// Decorator
//class MilkShakeDecorator: public MilkShake
//{
//protected:
//    MilkShake *m_MilkShake;
//public:
//    MilkShakeDecorator(MilkShake *BaseMilkShake):
//       m_MilkShake(BaseMilkShake)
//    {
//    }

//    string Serve()
//    {
//        return m_MilkShake->Serve();
//    }

//    float price()
//    {
//        return m_MilkShake->price();
//    }
//};

//// Concrete Decorator

//class MangoMilkShake:public MilkShakeDecorator
//{
//  public:
//   MangoMilkShake(MilkShake *base):
//       MilkShakeDecorator(base)
//   {
//   }

//   string Serve()
//   {
//     return m_MilkShake->Serve()+"Decorator with mango";
//   }

//   float price()
//   {
//    return m_MilkShake->price() + 40;
//   }
//};

//class VanillaMilkShake: public MilkShakeDecorator
//{
//  public:
//   VanillaMilkShake(MilkShake *base):
//       MilkShakeDecorator(base)
//   {
//   }

//   string Serve()
//   {
//     return m_MilkShake->Serve()+"Decorator with vanila";
//   }

//   float price()
//   {
//     return m_MilkShake->price() + 40;
//   }

//};

//int main()
//{
//  MilkShake *baseMilkShake = new BaseMilkShake();
//  cout<<"Base Milk Shake"<<endl;
//  cout<<baseMilkShake->Serve()<<endl;
//  cout<<baseMilkShake->price()<<endl;

//  MilkShake *decoratorMilkShake = new MangoMilkShake(baseMilkShake);
//  cout<<"Mango Decorator\n"<<endl;
//  cout<<decoratorMilkShake->Serve()<<endl;
//  cout<<decoratorMilkShake->price()<<endl;

//  return 0;
//}


