#pragma once
//function, if inside a class we would call it a method definition


//EX - 1 
/// @brief Adds two integer values
/// @param x Integer
/// @param y Integer
/// @return Integer sum
int add(int x, int y) {
    //TODO - Add exception handling
    //HACK - Solves problem but...
    return x + y;
}

//EX - 2
/// @brief Swap two integer values
/// @param x Integer
/// @param y Integer
void swap(int x, int y) {

    int temp = y;
    y = x;
    x = temp;
}
