class Cube{
private:
  int ndim;
  double len;
public:
  Cube(int ndim=2, double len=1.0);  // constructor
  int Ndim();                        // getters
  double Len();
  void Ndim(int ndim);               // setters
  void Len(double len);
  double CVolume();                   // return volume of the n-dimensional cube
  void Print();                      // prints ndim, len, and Volume() on one line
};

class Sphere{
private:
int ndim;
  double radius;
public:
  Sphere(int ndim=2, double radius=1.0); // constructor
  int Ndim();                          // getters
  double Radius();
  void Ndim(int ndim);                 // setters
  void Radius(double radius);
  double SVolume();                     // return volume of the n-dimensional sphere
  void Print();                        // prints ndim, radius, and Volume() on one line
};
