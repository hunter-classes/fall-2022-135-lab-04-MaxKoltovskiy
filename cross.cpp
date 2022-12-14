/*
Author: Max Koltovskiy
Course: CSCI 135
Instructor: Michael Zamansky
Assignment: Lab 4C

Returns a cross with height of input size
*/
#include "functions.h"

std::string cross(int size) {
    std::string result;
    int space_between;
    for(int i = 1; i<=(size/2); i++) {

        result += "\n";
        space_between = size - (2*i); 
        //2*i takes into consideration the spaces before the first asterisk 
        //and the spaces after the second asterisk as part of the size of the row
        //including the asterisks themselves
        result += set_spaces(i-1) + "*" + set_spaces(space_between) + "*";
    }

    for(int i = (size/2); i>0; i--) {
        
        result += "\n";
        space_between = size - 2*i;
        result += set_spaces(i-1) + "*" + set_spaces(space_between) + "*";
    }
    return result;
}

std::string set_spaces(int num) {
    std::string spaces;
    for(int i=0; i<num; i++) {
        spaces += " ";
    }
    return spaces;
}