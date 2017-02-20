#ifndef PSEUDO_H

class pseudorandom
{

public:
    //constructor
    pseudorandom(int, int, int, int);
    int nextnumber();   //modification member function
    
    //constant member function
private:
    int seed;
    int multiplier;
    int increment;
    int modulus;
    
};


#endif

