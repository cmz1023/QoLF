#include <iostream>
#include <random>
#include <ctime>
#include <vector>
//
// Created by cmz1023 on 10/31/2019.
//quality of life functions
#ifndef QOL_QOL_H
#define QOL_QOL_H

class qolf{
public:
    std::vector<int> static splitByChar(char, std::string);
    int static randomNum(int, int);
    std::vector<std::string> static splitString(std::string s1);
    std::string static stringReverser(std::string s1);
    template<class T>
            std::vector<T> static forEach(std::vector<T> var, T (&f)(std::string)) {
        std::vector<T> newVec;
        for (auto x : var) {
            newVec.push_back(f(x));
        }
        return newVec;
    }
    
};

#endif //QOL_QOL_H
