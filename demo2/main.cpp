#include <stdio.h> 
#include <stdlib.h> 
#include <string> 
#include <iostream> 
#include <math.h> 
#include "TutorialConfig.h" 

int main(int argc, char** argv){ 
    if(argc<2){ 

       std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1; 
    } 
    double inputValue = atof(argv[1]); 
    double outputValue = sqrt(inputValue); 
    fprintf(stdout, "The square root of %g is %g\n",inputValue, outputValue); 
    return 0; 
} 