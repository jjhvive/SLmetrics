# script: Concordance Correlation Coefficient
# date: 2024-10-10
# author: Serkan Korkmaz, serkor1@duck.com
# objective: Generate Methods
# script start;

#' Compute the \eqn{\text{concordance}} \eqn{\text{correlation}} \eqn{\text{coefficient}}
#'
#' @description
#' The [ccc()]-function computes the simple and weighted [concordance correlation coefficient](https://en.wikipedia.org/wiki/Concordance_correlation_coefficient) between
#' the two vectors of predicted and observed <[numeric]> values. If `w` is not [NULL], the function returns the weighted [concordance correlation coefficient](https://en.wikipedia.org/wiki/Concordance_correlation_coefficient).
#'
#' If `correction` is [TRUE] \eqn{\sigma^2} is adjusted by \eqn{\frac{1-n}{n}} in the intermediate steps.
#' @inherit huberloss
#' @param correction A <[logical]> vector of [length] 1. [FALSE] by default. If [TRUE] the variance and covariance
#' will be adjusted with \eqn{\frac{1-n}{n}}
#'
#' @example man/examples/scr_ccc.R
#'
#' @section Calculation:
#'
#' The metric is calculated as follows,
#'
#' \deqn{
#'   \rho_c = \frac{2 \rho \sigma_x \sigma_y}{\sigma_x^2 + \sigma_y^2 + (\mu_x - \mu_y)^2}
#' }
#'
#' Where \eqn{\rho} is the \eqn{\text{pearson correlation coefficient}}, \eqn{\sigma} is the \eqn{\text{standard deviation}} and \eqn{\mu} is the simple mean of `actual` and `predicted`.
#'
#' If `w` is not [NULL], all calculations are based on the weighted measures.
#'
#' @family regression
#' @export
ccc <- function(...) {
  UseMethod(
    generic = "ccc",
    object  = ..1
  )
}
# script end;
