
<!-- README.md is generated from README.Rmd. Please edit that file -->

# {SLmetrics}: Machine learning performance evaluation on steoriods

<!-- badges: start -->

[![R-CMD-check](https://github.com/serkor1/MLmetrics/actions/workflows/R-CMD-check.yaml/badge.svg)](https://github.com/serkor1/MLmetrics/actions/workflows/R-CMD-check.yaml)
[![Codecov test
coverage](https://codecov.io/gh/serkor1/MLmetrics/graph/badge.svg)](https://app.codecov.io/gh/serkor1/MLmetrics)
<!-- badges: end -->

{SLmetrics} is a collection of (lightning fast) performance evaluation
metrics for regression and classification models written in c++ and
[{Rcpp}](https://github.com/RcppCore/Rcpp). It’s like using a
supercharged yardstick to measure model performance, without the risk of
soft to super-hard deprecations.

## :information_source: Basic usage

``` r
# 0) load {SLmetrics}
library(SLmetrics)

# 1) run regression
model <- lm(
  formula = mpg ~ .,
  data    = mtcars
)

# 2) evaluate RMSE
rmse(
  actual    = mtcars$mpg,
  predicted = fitted(model)
)
#> [1] 2.146905
```

</details>

## :information_source: Installation

### :shield: Stable version

``` r
## install from github
devtools::install_github(
  repo = 'https://github.com/serkor1/MLmetrics',
  ref  = 'main'
)
```

### :hammer_and_wrench: Development version

``` r
## install from github
devtools::install_github(
  repo = 'https://github.com/serkor1/MLmetrics',
  ref  = 'development'
)
```

## :information_source: Code of Conduct

Please note that the {SLmetrics} project is released with a [Contributor
Code of
Conduct](https://contributor-covenant.org/version/2/1/CODE_OF_CONDUCT.html).
By contributing to this project, you agree to abide by its terms.
