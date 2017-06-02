#ifndef EGYEB_H_INCLUDED
#define EGYEB_H_INCLUDED
#include<iostream>
#include<string>

inline bool all(int n) { return true; } //Mindenre igazat adó függvény
int read_int(const std::string &msg, const std::string &err, bool valid(int) = all); //Egy egész ellenõrzött beolvasása
int menu();


#endif // EGYEB_H_INCLUDED
