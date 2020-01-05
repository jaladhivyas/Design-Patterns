//#include<iostream>
//#include<vector>
//using namespace std;

////class PageObject
////{
////  public:
////   virtual void add(PageObject &a) = 0;
////   virtual void remove() = 0;
////   virtual void del(PageObject &a) = 0;
////};

////class Page: public PageObject
////{
////  public:
////   void add(PageObject &a)
////   {
////       cout<<"Something added to page";
////   }

////   void remove()
////   {
////       cout<<"Something removed from page";
////   }

////   void del(PageObject &a)
////   {
////       cout<<"Something deleted from page";
////   }
////};

////class Copy: public PageObject
////{
////   vector<PageObject> copyPages;
////  public:
////   void AddElement(PageObject &a)
////   {
////     copyPages.push_back(a);
////   }

////   void add(PageObject &a)
////   {
////       cout<<"Something added to copy";
////   }

////   void remove()
////   {
////       cout<<"Something removed from copy";
////   }

////   void del(PageObject &a)
////   {
////       cout<<"Something deleted from copy";
////   }
////};

////int main()
////{
////    Page a;
////    Page b;
////    Copy allcopy;
////    allcopy.AddElement(a);
////    allcopy.AddElement(b);

////    allcopy.add(a);
////    a.add(b);

////    allcopy.remove();
////    b.remove();
////   return 0;
////}


///* It is a structural design pattern having composition of objects
// * E.g Computer have cabinate and peripharal. cabinapte have cpu, ram, etc.
// * peripharal have mouse, keyboard etc.
// *
// * Its kind of tree structure. where non leaf nodes contains composite object
// * As it is leaf node or composite object.
// *
// * Whatever operations possible on leaf objects same can be apply to composite object
// *
// */

//class component
//{
//  public:
//    virtual void showPrice(){}
//};

//class Leaf:public component
//{
// private:
//    int price;
//    std::string name;
// public:
//    Leaf(int price,string name):
//       price(price),
//       name(name){}
//    void showPrice()
//    {
//        cout<<"Name and Price "<<name<<" "<<price<<endl;
//    }
//};

//class Composite:public component
//{
//private:
//    std::string name;
//    vector<component *> v;
//public:
//    Composite(string name):
//        name(name){}
//    void addComponent(component *c)
//    {
//        v.push_back(c);
//    }

//    void showPrice()
//    {
//      for(int i=0;i<v.size();i++)
//      {
//          component *c = v.back();
//          c->showPrice();
//          v.pop_back();
//      }

//    }
//};

//int main()
//{
//  component *hd = new Leaf(4000, "HDD");
//  component *mouse = new Leaf(300, "Mouse");
//  component *monitor = new Leaf(3000, "Monitor");
//  component *ram = new Leaf(1800, "Ram");
//  component *cpu = new Leaf(800, "CPU");

//  Composite *ph = new Composite("Peripharal");
//  Composite *cb = new Composite("Cebinat");
//  Composite *mb = new Composite("MotherBoard");
//  Composite *com = new Composite("Computer");

//  mb->addComponent(ram);
// // mb->addComponent(cpu);

//  ph->addComponent(mouse);
//  ph->addComponent(monitor);
//  ph->addComponent(hd);

//  cb->addComponent(hd);
//  cb->addComponent(mb);

//  ph->addComponent(monitor);
//  ph->addComponent(hd);

//  com->addComponent(ph);
// // com->addComponent(cb);

//  com->showPrice();

//  return 0;
//}
