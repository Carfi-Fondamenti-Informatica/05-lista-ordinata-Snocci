#include <iostream>
using namespace std;

int main() {int lista[10];
     for(int i=0;i<10;i++){
     cin >> lista[i];
     }
     int a=0;
     cin >> a;
     int b, c, x;
     for (int i = 0; i <10; i++) {
         if (a <= lista[i]) {
             b = lista[i];
             lista[i]=a;
             for (i = i + 1; i < 10; i++) {
                c=lista[i];
                x=c;
                lista[i]=b;
                b=x;

             }

         }

     }
     for (int i=0;i<10;i++) {

         cout<<lista[i]<< " ";

        }
   return 0;
}
