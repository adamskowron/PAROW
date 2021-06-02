#include "../include/scrabble.hpp"

int compute_score(std::string in_word)
{
    int score = 0;
    std::unordered_map<char, int> scrabble;
    
    scrabble['A'] = 1;
    scrabble['E'] = 1;
    scrabble['I'] = 1;
    scrabble['O'] = 1;
    scrabble['U'] = 1;
    scrabble['L'] = 1;
    scrabble['N'] = 1;
    scrabble['R'] = 1;
    scrabble['S'] = 1;
    scrabble['T'] = 1;
    
    scrabble['D'] = 2;
    scrabble['G'] = 2;
    
    scrabble['B'] = 3;
    scrabble['C'] = 3;
    scrabble['M'] = 3;
    scrabble['P'] = 3;
    
    scrabble['F'] = 4;
    scrabble['H'] = 4;
    scrabble['V'] = 4;
    scrabble['W'] = 4;
    scrabble['Y'] = 4;
    
    scrabble['K'] = 5;
    
    scrabble['J'] = 8;
    scrabble['X'] = 8;
    
    scrabble['Q'] = 10;
    scrabble['Z'] = 10;
 
    for(auto c: in_word)
        score += scrabble[std::toupper(c)];
 
    return score;
}
