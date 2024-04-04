#include <iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int a,b, dzialanie,wynik,wynik1,wynik2,wynik3,wynik4,wynik5,wynik6;

double c,d;

double a1=70;

double b1=1/3;

float a7, stopien7;

const double pi = 3.1416;

int main()
{
    cout<<"Kalkulator prosty"<<endl;
    cout<<"                 "<<endl;

    cout<<"MENU"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Reszta z dzielenia"<<endl;
    cout<<"6. Potegowanie"<<endl;
    cout<<"7. Pierwiastki"<<endl;
    cout<<"8. Objetosc kuli"<<endl;


    cout<<"Jakie chcesz wykonać działanie:"<<endl;
    cin>>dzialanie;


      switch(dzialanie)
        {
            case 1:

            cout<<"1. Dodawanie"<<endl;

            cout<<"Pierwsza wartosc dodawania:"<<endl;
            cin>>a;
            cout<<"Druga wartosc dodawania:"<<endl;
            cin>>b;

            wynik=a+b;
            cout<<"Wynik:"<<wynik<<endl;

            break;

            case 2:
            cout<<"2. Odejmowanie"<<endl;

            cout<<"Pierwsza wartosc odejmowania:"<<endl;
            cin>>a;
            cout<<"Druga wartosc odejmowania:"<<endl;
            cin>>b;

            wynik1=a-b;
            cout<<"Wynik:"<<wynik1<<endl;

            break;

            case 3:
            cout<<"3. Mnozenie"<<endl;
            cout<<"Pierwsza wartosc mnozenia:"<<endl;
            cin>>a;
            cout<<"Druga wartosc mnozenia:"<<endl;
            cin>>b;

            wynik2=a*b;
            cout<<"Wynik:"<<wynik2<<endl;
            break;

            case 4:
            cout<<"4. Dzielenie"<<endl;
            cout<<"Pierwsza wartosc dzielenia:"<<endl;
            cin>>a;
            cout<<"Druga wartosc dzielenia:"<<endl;
            cin>>b;

            wynik3=a/b;
            cout<<"Wynik:"<<wynik3<<endl;
            break;

            case 5:
            cout<<"5. Reszta  z dzielenia"<<endl;
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;

            cout << "Podaj druga liczbe: ";
            cin >> b;
            cout << "a % b = " << a % b <<endl;

            cout<<"Wynik:"<<wynik4<<endl;

            break;

            case 6:
            cout<<"6. Potegowanie"<<endl;

            cout<<"70 do potegi 1/3 wynosi:"<<pow(a1,b1)<<endl;

            cout<<"Wynik:"<<wynik5<<endl;

            break;

            case 7:
            cout<<"7. Pierwiastki"<<endl;

            cout << "Podaj liczbe: ";
            cin >> a7;
            cout << "Podaj stopien pierwiastka: ";
            cin >> stopien7;

            cout << pow(a7, 1/stopien7);

            break;

            case 8:
            cout<<"8. Objetosc kuli"<<endl;

	        double r;

	        cout<<"Podaj promień: ";
	        cin>>r;

	        cout<<"Objetosc kuli o promieniu "<<r<<" wynosi: "<<4/3*pi*r*r*r<<endl;

            break;

            default:
            cout<<"Nieprawidlowy numer, koniec programu"<<endl;
        }





    return 0;
}
