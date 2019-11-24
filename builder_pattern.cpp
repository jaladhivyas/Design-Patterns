// It separates the construction of complex objects from its representation
// so that, same construction can create different representation

#include<creational_pattern.h>

class Car
{
public:
  string engine;
  string paint;
  string tyre;

  string getEngine()
  {
    return engine;
  }

  string setEngine(string engine)
  {
    this->engine = engine;
  }

  string getPaint()
  {
    return paint;
  }

  void setPaint(string paint)
  {
    this->paint = paint;
  }

  string getTire()
  {
    return tyre;
  }

  void setTire(string paint)
  {
    this->tyre = tyre;
  }
};

class carBuilder
{
 public:
  virtual string makeEngine(string engine) = 0;
  virtual string paint(string paint)       = 0;
  virtual string makeTyre()                = 0;
  virtual void   makeCar()                 = 0;
  virtual Car    getCar()                  = 0;
};

class GermanCarBuilder : public carBuilder
{
  public:

    string makeEngine(string engine)
    {
      return "Engine_type " + engine;
    }

    string paint(string paint)
    {
      return "paint_type" + paint;
    }

    string makeTyre()
    {
      return "eight tyres attached";
    }

    void makeCar()
    {
        car.setEngine(this->makeEngine("German"));
        car.setTire(makeTyre());
        car.setPaint(paint("Red"));
    }

    Car car;
};

class UsCarBuilder : public carBuilder
{
  public:

    string makeEngine(string engine)
    {
      return "Engine_type " + engine;
    }

    string paint(string paint)
    {
      return "paint_type" + paint;
    }

    string makeTyre()
    {
      return "eight tyres attached";
    }

    void makeCar()
    {
      car.setEngine(this->makeEngine("US"));
      car.setTire(makeTyre());
      car.setPaint(paint("Yellow"));
    }

    Car getCar()
    {
      return car;
    }

    Car car;
};

class Director
{
  public:

    carBuilder* getBuilder()
    {
      return this->builder;
    }

    void setBuilder(carBuilder *builder)
    {
      this->builder = builder;
    }

    void build()
    {
      this->builder->makeCar();
    }

    Director(carBuilder *builder)
    {
        this->builder = builder;
    }

    carBuilder *builder;
};

int main()
{
  carBuilder *build = new UsCarBuilder();
  Director   direct(build);

  direct.build();

  Car car = build->getCar();

  cout<<"Car engine "<<car.getEngine()<<endl;

  system("PAUSE");
}
