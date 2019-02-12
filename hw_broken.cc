/*! \file hw_broken.cc
	\brief Contains the deviation function definition
*/

#include <iostream>
#include <vector>
#include <cmath>

/** \fn double deviation(int* a, int n)
	\brief Calculates the standard deviation for a set of integers using the following formula: 
	\param a -- Array of integers
	\param n -- Size of array
	\return A double representing the standard deviation of array elements
 */
double deviation( int* a, int n )
{
	int sum = 0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	double mean = sum; // changes sum to a double
	mean = mean/n;
	double stddev = 0;
	for(size_t i = 0; i <= n-1; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= n;
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	return sqrt(stddev);
}
