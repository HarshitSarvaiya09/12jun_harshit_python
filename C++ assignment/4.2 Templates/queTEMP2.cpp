/* Write a program of to sort the array using templates. */

#include <algorithm>
#include <iostream>
  
int main()
{
    int array[] = {3, 5, 1, 2, 4};
  
    // Sort the array in ascending order
    std::sort(std::begin(array), std::end(array));
  
    // Print the sorted array
    for (int i : array)
    {
        std::cout << i << " ";
    }
  
     
  
    return 0;
}