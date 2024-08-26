#include <Rcpp.h>
using namespace Rcpp;

//' R squared
//'
//' Calculate the R squared of two <[numeric]> vectors.
//'
//' @param actual A <[numeric]>-vector of length N.
//' @param predicted A <[numeric]>-vector of length N.
//' @param k A <[numeric]>-vector of length 1. 0 by default. If k>0
//' the function returns the adjusted R squared.
//'
//' @returns A <[numeric]>-value of length 1.
// [[Rcpp::export]]
double rsq(
    const NumericVector& actual,
    const NumericVector& predicted,
    const double k = 0) {

  // Get the size of the vectors
  const std::size_t n = actual.size();

  // Calculate the mean of actual values
  double mean_actual = std::accumulate(actual.begin(), actual.end(), 0.0) / n;

  // Calculate SSE and SSR
  double SSE = 0.0;
  double SST = 0.0;

  for (std::size_t i = 0; i < n; ++i) {
    const double actual_val = actual[i];
    const double predicted_val = predicted[i];

    SSE += (actual_val - predicted_val) * (actual_val - predicted_val);
    SST += (actual_val - mean_actual) * (actual_val - mean_actual);
  }

  // Calculate R-squared
  return 1.0 - (SSE / SST) * ((n - 1))/(n - (k + 1));
}
