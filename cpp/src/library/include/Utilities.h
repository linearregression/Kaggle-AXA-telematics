#ifndef UTILITIES_H
#define UTILITIES_H

#include <vector>
#include <utility>
#include <valarray>


double
innerProduct( const std::pair<float,float>& v1,
	      const std::pair<float,float>& v2 );

double
magnitude( const std::pair<float,float>& v );

std::pair<float,float>
operator- ( const std::pair<float,float>& v1,
	    const std::pair<float,float>& v2 );

std::pair<float,float>
operator+ ( const std::pair<float,float>& v1,
	    const std::pair<float,float>& v2 );

std::pair<float,float>
operator*( double f,
	   const std::pair<float,float>& v );


std::pair<float,float>
operator*( const std::pair<float,float>& v,
	   double f );

std::pair<float,float>
operator/( const std::pair<float,float>& v,
	   double f );

std::vector< double >
findQuantiles( std::vector<double>& values );

double
r2_correlation( const std::vector<double>& x,
		const std::vector<double>& y );

std::valarray< double >
vfft( const std::vector<double>& data );


std::vector<std::vector<double> >
tripExtremesFromColumns( const std::vector<std::vector<double> >& input, double percentageToKeep );

#endif
