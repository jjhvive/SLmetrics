#include <Rcpp.h>
#include "declarations.h"
using namespace Rcpp;
//' Generalized F Score
//'
//' @description
//' Calculate the F Score
//'
//' @usage
//' # fbeta-score
//' fbeta(
//'   actual,
//'   predicted,
//'   beta = 1,
//'   aggregate = FALSE
//' )
//'
//' @inherit specificity
//'
//' @param beta A <[numeric]> vector of length 1. 1 by default, see details.
//' @param aggregate A <[logical]>-value of [length] 1. [FALSE] by default. If [TRUE] it returns the
//' micro average across all k-classes
//'
//' @details
//'
//'
//' The F-beta score is a weighted harmonic mean of precision and recall, calculated for each class \eqn{k} as follows,
//'
//' \deqn{
//'   (1 + \beta^2) \cdot \frac{\text{Precision}_k \cdot \text{Recall}_k}{(\beta^2 \cdot \text{Precision}_k) + \text{Recall}_k}
//' }
//'
//' Where precision is \eqn{\frac{\#TP_k}{\#TP_k + \#FP_k}} and recall (sensitivity) is \eqn{\frac{\#TP_k}{\#TP_k + \#FN_k}}, and \eqn{\beta} determines the weight of precision relative to recall.
//'
//' When `aggregate = TRUE`, the `micro`-average F-beta score is calculated,
//'
//' \deqn{
//'   (1 + \beta^2) \cdot \frac{\sum_{k=1}^K \text{Precision}_k \cdot \sum_{k=1}^K \text{Recall}_k}{(\beta^2 \cdot \sum_{k=1}^K \text{Precision}_k) + \sum_{k=1}^K \text{Recall}_k}
//' }
//'
//'
//' @family classification
//'
// [[Rcpp::export]]
NumericVector fbeta(
    const IntegerVector& actual,
    const IntegerVector& predicted,
    const double& beta = 1.0,
    const bool& aggregate = false) {

  /*
   * This function calculates the F1-score
   * of the classification problem.
   *
   * It needs the precision and
   * recall
   */
  const double beta_sq = beta * beta;
  const NumericVector recall_obj = recall(actual, predicted, aggregate);
  const NumericVector precision_obj = precision(actual, predicted, aggregate);

  NumericVector output = (1 + beta_sq) * (recall_obj * precision_obj) / ( (beta_sq * precision_obj) + recall_obj);

  if (!aggregate) {
    output.attr("names") = actual.attr("levels");
  }

  return output;

}
