#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<random>

// Standard Practice 
using namespace std;

// Declaring Alphabet 
char vow [6] = {'A','E','I','O','U','Y'};
char cons [20] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z'};
char usein1[2];


//Random Number Generator 
int mknumb(int f, int e){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(f, e);
    int it = distrib(gen);
    return it;
}
// Create the Characters
char inttochar(int e){
if (e == 1){
int m = mknumb(0,5);
char f = vow[m];
return f;
}
else{
int m = mknumb(0,19);
char f = cons[m];
return f;
}
}
// make the word
string makeword(int y, int rlset){
    int x = 0;
    char o[y];
    int df;
    if (rlset == 1){
    while(x <= y){
        if(x < 1){
        o[x] = inttochar(0);
        x++;
        }
        else if (x == 1){
        o[x] = inttochar(1);
        x++;
        }
        else if (x > 1){
        df = mknumb(1,2);
        df--;
        o[x] = inttochar(df);
        x++;
        }
    }
}
    else if (rlset == 2){
        while (x <= y){
        if(x < 1){
        o[x] = inttochar(1);
        x++;
        }
        else if (x == 1){
        o[x] = inttochar(0);
        x++;
        }
        else if (x > 1){
        df = mknumb(1,2);
        df--;
        o[x] = inttochar(df);
        x++;
        }
        }
    }
    string z = o;
    return z;  
}

// Where the magic happens
int main(){
    int rl = 0;
    bool need1 = false;
    while (need1 == false){
    fflush(stdin);
    cout << "Choose A Rule Set (1-2): ";
    fgets(usein1, 2, stdin);
    fflush(stdin);
    string usein2 = usein1;
    if (usein2 == "1"){
        rl = 1;
        need1 = true;
    }
    else if (usein2 == "2"){
        rl = 2;
        need1 = true;
    }
    else{
        cout << "Invalid Response!" << endl;
    }
    }
    string v = makeword(4, rl);
    cout << v << endl;
    system("pause");
    return 0;
}