#include<iostream>
using namespace std;

class AlertStateContext;

class MobileAleartState
{
  public:
    virtual void alert(AlertStateContext &ctx) =0;
};

class Vibration:public MobileAleartState
{
   public:
    void alert(AlertStateContext &ctx)
    {
       cout<<"Vibration"<<endl;
    }
};

class Silent:public MobileAleartState
{
   public:
    void alert(AlertStateContext &ctx)
    {
       cout<<"Silent"<<endl;
    }
};



class AlertStateContext
{

public:

    AlertStateContext():
        currentState(new Vibration())
    {}

    void setState(MobileAleartState *state)
    {
        currentState = state;
    }

    void alert()
    {
        currentState->alert(*this);
    }
private:
   MobileAleartState *currentState;

};

int main()
{
   AlertStateContext *stateContext = new AlertStateContext();
   stateContext->alert();
   stateContext->alert();
   stateContext->setState(new Silent());
   stateContext->alert();
   return 0;
}
