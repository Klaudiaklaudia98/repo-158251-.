/** Klasa MyExp * */
class MyExp
{
//! \defgroup 1 metody_publiczne 
public:
//! \{ 
   /**metoda publiczna void MyExp()*/
    MyExp();
	/**metoda publiczna MyExp(double x)*/
    MyExp(double x);
    MyExp(const MyExp &obj);
    ~MyExp();
    double value();
    void setX(double);
    double get(X);
//! \}
//! \defgroup 2 składowe_prywatne
private:
 //!  Deklaracja składowej prywatnej.
  //! \{
    double mX;
	//! \}
}; 
/** Funkcja \b value ma zwracać wartość \b e^x która jest wyliczona na podstawie pierwszych 10 wyrazów szeregu
 \f$e^x=\sum_{k=0}^\infty\frac{x^k}{k!}.\f$ 
 * \attention Im więsza ilośc wyrazów szeregu tym wynik jest bardziej dokładny.
 *[Wykres funkcji e^x](https://drive.google.com/file/d/1kIPO9xoUNlX4-vzffEg3puP-xOvl_FLI/view?usp=sharing
)
 */
  double MyExp::value()
 {
    int element =1 ;
    int k =10;   

    double wynik =1;
    double a=1;     
    double b=1; 
    double x;    

    cout << "podaj wartość wykładnika  x : ";
    cin >> x;

    while (element < k) 
    {
        a*= x;
        b *= element; 
        wynik += (a/b);
        element++;
    }
    return wynik;
}
