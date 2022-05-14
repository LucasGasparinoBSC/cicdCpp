#include <iostream>

// a hack square root calculation using simple operations
double mysqrt(double x)
{
    // If x is negative, return error code 1
    if (x <= 0) {
      std::cout << "Error: " << x << " is not a positive number" << std::endl;
      return 1;
    }

    // Newton method for computing sqrt(x)

    // Initialize result to input value
    double result = x;
    
    // do 10 iterations
    for (int i = 0; i < 10; ++i) {
      if (result <= 0) {
        result = 0.1;
      }
      double delta = x - (result * result);
      result = result + 0.5 * delta / result;
      std::cout << "Computing sqrt of " << x << " to be " << result << std::endl;
    }
    return result;
}