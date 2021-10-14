#include <iostream>
#include "stdlib.h"
using namespace std;

int main(int argc, char *argv[]) {

    int sum = 0;
    int difference;
    int tmp = 0;
    int i = 3;
  if(strcmp(argv[1], "add") == 0) {
      if(argc >= 4) {
          for (i = 2; i < argc; ++i) {
              sum += atoi(argv[i]);
          }
          cout << sum << endl;
      }
      else{
             cout << "bledna ilosc parametrow\nadd [a] [b] ...[n]   \nDodawanie dwoch(i wiecej) liczb ([a] i [b] i ...[n]) calkowitych." << endl;
      }
   }
  else if(strcmp(argv[1], "subtract") == 0) {
      if(argc >= 4) {
          difference = atoi(argv[2]);
          while (i < argc) {
              difference = difference - atoi(argv[i]);
              i++;
          }
          cout << difference << endl;
      }
      else{
         cout << "bledna ilosc parametrow\nsubtract [a] [b] ...[n]\nOdejmowanie z pierwszej liczby(a) n-liczb ([a] - [b]...-[n]) calkowitych" << endl;

      }
  }
 else if(strcmp(argv[1], "volume") == 0 ) {
      //objętość graniatosłupa prostego o podstawie trapezu równoramiennego
      //potrzebne dane są x,y,z, H, gdzie x,y - podstawy trapezu, c - ramiona trapezu, H - wysokość graniatosłupa
      if(argc >= 6) {
          cout
                  << "Objetosc granatoslupa. Potrzebne 4 cyfry \nvolume [x] [y] [c] [H]\nGdzie x,y - podstawy trapezu, c - ramiona trapezu (rownoramiennego), H - wysokosc graniatoslupa (w centymetrach)"
                  << endl;
          int x, y, c, H;

          cout << "x:";
          x = atoi(argv[2]);
          cout << x << endl;
          cout << "y:";
          y = atoi(argv[3]);
          cout << y << endl;
          cout << "z:";
          c = atoi(argv[4]);
          cout << c << endl;
          cout << "H:";
          H = atoi(argv[5]);
          cout << H << endl;
          double V, P;
          int a, b, h;
          if (x >= y) {
              b = (x - y) / 2;
          } else {
              b = (y - x) / 2;
          }

          h = (c * c - b * b);
          h = sqrt(h);        // licze wysokosc trapezu
          P = (x + y) * h / 2;
          V = P * H;
          cout << "h:" << h << endl;
          cout << "objetosc graniatoslupa jest rowna:" << V << " [cm^3]" << endl;
      }
      else{
            cout << "bledna ilosc parametrow\nvolume [x] [y] [c] [H]\nLiczenie objetosci graniatoslupa o podstawie trapezu rownoramiennego\nGdzie x,y - podstawy trapezu, c - ramiona trapezu (rownoramiennego), H - wysokosc graniatoslupa (w centymetrach)" << endl;
      }

  }
 else if(strcmp(argv[1], "help") == 0 ){
      cout << "Simple calculatur\nDzialania: \nadd [a] [b] ...[n]   \nDodawanie dwoch(i wiecej) liczb ([a] i [b] i ...[n]) calkowitych." << endl;
      cout << "\nsubtract [a] [b] ...[n]\nOdejmowanie z pierwszej liczby(a) n-liczb ([a] - [b]...-[n]) calkowitych" << endl;
      cout << "\nvolume [x] [y] [c] [H]\nLiczenie objetosci graniatoslupa o podstawie trapezu rownoramiennego\nGdzie x,y - podstawy trapezu, c - ramiona trapezu (rownoramiennego), H - wysokosc graniatoslupa (w centymetrach)" << endl;
      cout << "\nhelp - wyswietlanie dokumentacji" << endl;
  }
 else{
     cout << "Simple calculatur\nDzialania: \nadd [a] [b] ...[n]   \nDodawanie dwoch(i wiecej) liczb ([a] i [b] i ...[n]) calkowitych." << endl;
     cout << "\nsubtract [a] [b] ...[n]\nOdejmowanie z pierwszej liczby(a) n-liczb ([a] - [b]...-[n]) calkowitych" << endl;
     cout << "\nvolume [x] [y] [c] [H]\nLiczenie objetosci graniatoslupa o podstawie trapezu rownoramiennego\nGdzie x,y - podstawy trapezu, c - ramiona trapezu (rownoramiennego), H - wysokosc graniatoslupa (w centymetrach)" << endl;
     cout << "\nhelp - wyswietlanie dokumentacji" << endl;
 }
   return 0;
}
