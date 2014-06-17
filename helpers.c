/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int found = 0;
    int min = 0;
    int max = n - 1;
    int midpoint = (min + max) / 2;
    
    // Find value by linear search
    while (max >= min)
    {   
        if(values[midpoint] == value)
        {
            found = 1;
            break;
        }
        else if(values[midpoint] > value)
        {
            max = midpoint - 1;
            midpoint = (min + max) / 2;
        }
        else
        {
            min = midpoint + 1;
            midpoint = (min + max) / 2;            
        }
    }
    
    // if value isn't found return false
    if(max < min)
    {
        found = 0;
    }
    
    return found;
}


/**
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    int outer, inner, temp;
    
    // Sort array by bubble sort
    for (outer = 0; outer < (n - 1); outer++)
    {
        for (inner = outer; inner < n; inner++)
        {
            // swap values if inner value is less than outer value
            if (values[inner] < values[outer])
            {
                temp = values[inner];
                values[inner] = values[outer];
                values[outer] = temp;
            }
        }   
    }
    
    return;
}
