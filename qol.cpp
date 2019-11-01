#include "qol.h"
//
// Created by cmz1023 on 10/31/2019.
// quality of life functions
    std::string qol::stringReverser(std::string s1) {
        std::string s2;
        while(s1.length() > 0){
            s2 += s1[s1.length()-1];
            s1.pop_back();
        }
        return s2;
    }

    int qol::randomNum(int min, int max){
    unsigned seed = time(0);
    srand(seed);
    return (rand() % (max - min + 1) + min);
}

std::vector<std::string> qol::splitString(std::string s1){
    std::vector<std::string> newVec;
    for (int i = 0; i < s1.length(); i++){
        if (s1.at(i) == ' '){
            newVec.push_back(s1.substr(0,i));
            s1 = s1.substr(i,s1.length());
            i = 0;
        }
    }
    return newVec;
}

