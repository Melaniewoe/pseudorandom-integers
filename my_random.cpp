//
//  my_random.cpp
//  MelanieWoeHW1

#include <iostream>
#include "my_random.h"

//constructor
pseudorandom::pseudorandom(int initial_seed, int initial_multiplier, int initial_increment, int initial_modulus)
{
    seed = initial_seed;
    multiplier = initial_multiplier;
    increment = initial_increment;
    modulus = initial_modulus;
}

int pseudorandom::nextnumber()
{
    int next;
    next = (multiplier * seed + increment) % modulus; //formula for generting a sequence of pseudorandom numbers
    seed = next;    
    return next;
}


