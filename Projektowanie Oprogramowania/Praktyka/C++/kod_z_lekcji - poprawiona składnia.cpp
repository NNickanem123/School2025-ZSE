#include <iostream>
#include <string>

using namespace std;
class Programista {
private:
    string imie;
    string nazwisko;
    int wiek;
    int pensja;
public:
    Programista(){
    imie = "";
    nazwisko = "";
    wiek = 0;
    pensja = 0;
    }

    Programista(string i, string n, int w, int p){
    imie = i;
    nazwisko = n;
    wiek = w;
    pensja = p;
    }

    void showIDinfo(){
    cout<<"Imie"<<imie<<endl;
    cout<<"Nazwisko"<<nazwisko<<endl;
    cout<<"Wiek"<<wiek<<endl;
    cout<<"Pensja"<<pensja<<endl;
    }

    void increaseMoney(int kwota){
    pensja = pensja + kwota;
    };
};

int main(){
Programista programist1;
Programista programista2("Jan", "Projs", 22, 3000);


programist1.showIDinfo();
programista2.showIDinfo();
programista2.increaseMoney(200);
cout<<endl;
programista2.showIDinfo();
}

class zadanie {
private:
    int czas_trwania;
    int placa;
public:
    zadanie(int c, int p){
    czas_trwania = c;
    placa = p;
    }
};