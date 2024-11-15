#ifndef TRIANGLEH
#define TRIANGLEH

class Triangle {
   private:
      double base;
      double height;
   
   public:
      void setBase(double userBase);
      void setHeight(double userHeight);
      double getArea() const;
      void PrintInfo() const;
};

#endif