# include <iostream>
using namespace std ;
class shape{
  protected:
   int radios;
   int height;
   int width;
   float pi=3.14;

public:
  void setRadios(){
    cout << "Enter num: ";
     cin >> radios;
   }
   
  void setHeight(){
    cout << "Enter num: ";
    cin>>height;
  }

  void setWidth(){
    cout << "Enter num: ";
    cin>>width;
  }

  virtual int area(void)=0;

  void displayArea(void)
  {
    cout << this->area()<<endl;
  }

  virtual int circumference(void) = 0;

  void displayCircumference(void)
  {
    cout << this->circumference() << endl;
  }
};

class poygon:public shape{
 public:
    int area(){
      cout<<"the polygon Area=";
      return (radios*height*width);}
    int circumference(){
      cout<<"the polygon cicumfernce =";
      return (width*height);}
};

class  Elipse:public shape{
  public :
    int  area(){
      cout<<"the Ellipse Area=";
      return (pi*width*height);
    }

    int  circumference(){
      cout<<"the Ellipse circumfernce=";   
      return (pi*(radios*radios));
    }
};

class circle : public Elipse {
  public:
   int area (){
    cout<< "the circle Area=";
    return (pi/4*(radios*radios));
   }
   int circumference (){
    cout << "the circl circumference=";
    return (pi*radios);
   }
};

class Square : public poygon{
  public:
    int area (){ 
      cout<<"the sguare area=";
      return (height *height);
    }
    int circumference (){
      cout<<"the square  cirumference=";
      return (height*4);
    }
};

class triange : public poygon{
  public:
    int  area (){
      cout<<"the triangls area=";
      return (width*height/2);}
    int circumference (){
      cout <<"the triangls circumfernce";
      return  (width+height*2);}
};

int main() {

poygon a ; Elipse b ; circle c ; Square d; triange v;
shape * p1 = &a;
shape *p2 = &b;
poygon *p3 = &d;
poygon *p4 = &v;
Elipse *p5 = &c;

p1 -> setHeight();
p1 -> setWidth();
p1 -> setRadios();
p1 -> displayArea();
p1->displayCircumference();

p2->setHeight();
p2 -> setWidth();
p2 -> setRadios();
p2 -> displayArea();
p2 -> displayCircumference();

p3 -> setHeight();
p3 -> displayArea();
p3 -> displayCircumference();

p4 -> setHeight();
p4 -> setWidth();
p4 -> displayArea();
p4 -> displayCircumference();

p5 -> setRadios();
p5 -> displayArea();
p5 -> displayCircumference();

return 0;
}
