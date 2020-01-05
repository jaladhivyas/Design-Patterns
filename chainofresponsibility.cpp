/* This pattern sends data to an object, If that object can't use it
 * then it send it to any number of other objects that may be able to use it
 */

#include<iostream>
using namespace std;


class Numbers
{
private:
    int number1;
    int number2;
    string calcWanted;

public:
    Numbers(int newNumber1, int newNumber2, string calcWanted):
        number1(newNumber1),
        number2(newNumber2),
        calcWanted(calcWanted){}
    int getNumber1(){return number1;}
    int getNumber2(){return number2;}
    string getCalcWanted(){return calcWanted;}

};

class Chain
{
public:
   virtual void setNextChain(Chain *nextChain)=0;
   virtual void calculate(Numbers *request)=0;
};

class AddNumbers:public Chain
{
private:
    Chain *next;

public:

   void setNextChain(Chain *nextChain)
   {
        this->next = nextChain;
   }

   void calculate(Numbers *request)
   {
       if(request->getCalcWanted() == "add")
       {
         cout<<"Addition"<<" "<<(request->getNumber1()+request->getNumber2())<<endl;
       }

       else
       {
          next->calculate(request);
       }

   }

};

class SubtractNumbers:public Chain
{
private:
    Chain *next;

public:

   void setNextChain(Chain *nextChain)
   {
        this->next = nextChain;
   }

   void calculate(Numbers *request)
   {
       if(request->getCalcWanted() == "sub")
       {
         cout<<"Subtraction"<<" "<<(request->getNumber1()-request->getNumber2())<<endl;
       }

       else
       {
          next->calculate(request);
       }

   }

};


int main()
{
  Chain *chainCalc1 = new AddNumbers();
  Chain *chainCalc2 = new SubtractNumbers();

  chainCalc1->setNextChain(chainCalc2);
  Numbers *request = new Numbers(4, 2, "add");
 // Numbers &request2 = *request;
  chainCalc1->calculate(request);
   return 0;
}
