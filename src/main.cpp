#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void whitespace();
void shortBeep(int);
void longBeep(int);
void pause();
void comma();
void period();
void question();
void zero();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();
void k();
void l();
void m();
void n();
void o();
void p();
void q();
void r();
void s();
void t();
void u();
void v();
void w();
void x();
void y();
void z();




int main()
{
    string morseString;
    cout << "This program will translate a message to morse code.\n";
    cout << "You are allowed to use lowercase letters, numbers, periods, question marks, and commas.\n\n";
    cout << "Enter a string: ";
    getline(cin, morseString);
    cout << "\n";

    int characterLoop = 0;
    int stringLength;
    stringLength = morseString.length();

    while(characterLoop < stringLength) {

    if(morseString[characterLoop] == ' ') {whitespace();}
    if(morseString[characterLoop] == ',') comma();
    if(morseString[characterLoop] == '.') period();
    if(morseString[characterLoop] == '?') question();
    if(morseString[characterLoop] == '0') zero();
    if(morseString[characterLoop] == '1') one();
    if(morseString[characterLoop] == '2') two();
    if(morseString[characterLoop] == '3') three();
    if(morseString[characterLoop] == '4') four();
    if(morseString[characterLoop] == '5') five();
    if(morseString[characterLoop] == '6') six();
    if(morseString[characterLoop] == '7') seven();
    if(morseString[characterLoop] == '8') eight();
    if(morseString[characterLoop] == '9') nine();
    if(morseString[characterLoop] == 'a') a();
    if(morseString[characterLoop] == 'b') b();
    if(morseString[characterLoop] == 'c') c();
    if(morseString[characterLoop] == 'd') d();
    if(morseString[characterLoop] == 'e') e();
    if(morseString[characterLoop] == 'f') f();
    if(morseString[characterLoop] == 'g') g();
    if(morseString[characterLoop] == 'h') h();
    if(morseString[characterLoop] == 'i') i();
    if(morseString[characterLoop] == 'j') j();
    if(morseString[characterLoop] == 'k') k();
    if(morseString[characterLoop] == 'l') l();
    if(morseString[characterLoop] == 'm') m();
    if(morseString[characterLoop] == 'n') n();
    if(morseString[characterLoop] == 'o') o();
    if(morseString[characterLoop] == 'p') p();
    if(morseString[characterLoop] == 'q') q();
    if(morseString[characterLoop] == 'r') r();
    if(morseString[characterLoop] == 's') s();
    if(morseString[characterLoop] == 't') t();
    if(morseString[characterLoop] == 'u') u();
    if(morseString[characterLoop] == 'v') v();
    if(morseString[characterLoop] == 'w') w();
    if(morseString[characterLoop] == 'x') x();
    if(morseString[characterLoop] == 'y') y();
    if(morseString[characterLoop] == 'z') z();


    characterLoop++;
    }





    return 0;
}



void shortBeep(int repeat){
int countUp = 0;

    while(countUp < repeat){
    cout << ".";
    Beep(2000,200);
    countUp++;
    }
}

void longBeep(int repeat){
int countUp = 0;

    while(countUp < repeat){
    cout << "-";
    Beep(2000,400);
    countUp++;
    }
}

void pause(){
Beep(0,200);
}
void whitespace(){
    cout << "  ";
    Beep(0,800);
}

void comma(){
    longBeep(2);
    shortBeep(2);
    longBeep(2);
}
void period(){
    shortBeep(1);
    longBeep(1);
    shortBeep(1);
    longBeep(1);
    shortBeep(1);
    longBeep(1);
}
void question(){
    shortBeep(2);
    longBeep(2);
    shortBeep(2);
}
void zero(){
    longBeep(5);
}
void one(){
    shortBeep(1);
    longBeep(4);
}
void two(){
    shortBeep(2);
    longBeep(3);
}
void three(){
    shortBeep(3);
    longBeep(2);
}
void four(){
    shortBeep(4);
    longBeep(1);
}
void five(){
    shortBeep(5);
}
void six(){
    longBeep(1);
    shortBeep(4);
}
void seven(){
    longBeep(2);
    shortBeep(3);
}
void eight(){
    longBeep(3);
    shortBeep(2);
}
void nine(){
    longBeep(4);
    shortBeep(1);
}
void a(){
    shortBeep(1);
    longBeep(1);
}
void b(){
    longBeep(1);
    shortBeep(3);
}
void c(){
    longBeep(1);
    shortBeep(1);
    longBeep(1);
    shortBeep(1);
}
void d(){
    longBeep(1);
    shortBeep(2);
}
void e(){
    shortBeep(1);
}
void f(){
    shortBeep(2);
    longBeep(1);
    shortBeep(1);
}
void g(){
    longBeep(2);
    shortBeep(1);
}
void h(){
    shortBeep(4);
}
void i(){
    shortBeep(2);
}
void j(){
    shortBeep(1);
    longBeep(3);
}
void k(){
    longBeep(1);
    shortBeep(1);
    longBeep(1);
}
void l(){
    shortBeep(1);
    longBeep(1);
    shortBeep(2);
}
void m(){
    longBeep(2);
}
void n(){
    longBeep(1);
    shortBeep(1);
}
void o(){
    longBeep(3);
}
void p(){
    shortBeep(1);
    longBeep(2);
    shortBeep(1);
}
void q(){
    longBeep(2);
    shortBeep(1);
    longBeep(1);
}
void r(){
    shortBeep(1);
    longBeep(1);
    shortBeep(1);
}
void s(){
    shortBeep(3);
}
void t(){
    longBeep(1);
}
void u(){
    shortBeep(2);
    longBeep(1);
}
void v(){
    shortBeep(3);
    longBeep(1);
}
void w(){
    shortBeep(1);
    longBeep(2);
}
void x(){
    longBeep(1);
    shortBeep(2);
    longBeep(1);
}
void y(){
    longBeep(1);
    shortBeep(1);
    longBeep(2);
}
void z(){
    longBeep(2);
    shortBeep(2);
}
