
<!-- index.md is generated from index.Rmd. Please edit that file -->

# {SLmetrics}: AI/ML performance evaluation <img src="man/figures/logo.png" align="right" height="150" alt="" />

<!-- badges: start -->

[![CRAN
status](https://www.r-pkg.org/badges/version/SLmetrics)](https://CRAN.R-project.org/package=SLmetrics)
[![CRAN RStudio mirror
downloads](https://cranlogs.r-pkg.org/badges/last-month/SLmetrics?color=blue)](https://r-pkg.org/pkg/SLmetrics)
[![Lifecycle:
experimental](https://img.shields.io/badge/lifecycle-experimental-orange.svg)](https://lifecycle.r-lib.org/articles/stages.html#experimental)
[![R-CMD-check](https://github.com/serkor1/SLmetrics/actions/workflows/R-CMD-check.yaml/badge.svg)](https://github.com/serkor1/SLmetrics/actions/workflows/R-CMD-check.yaml)
[![codecov](https://codecov.io/gh/serkor1/SLmetrics/branch/development/graph/badge.svg?token=X2osJDSRlN)](https://codecov.io/gh/serkor1/SLmetrics)
<!-- badges: end -->

[{SLmetrics}](https://github.com/serkor1/SLmetrics) is a low-level R
package for supervised AI/ML performance evaluation. It uses
[{Rcpp}](https://github.com/RcppCore/Rcpp) and
[{RcppEigen}](https://github.com/RcppCore/RcppEigen) as backend for
memory efficient and fast execution of the various metrics.
[{SLmetrics}](https://github.com/serkor1/SLmetrics) follows the syntax
of base R, and uses
[S3](https://deepr.gagolewski.com/chapter/220-s3.html)-classes.

## :information\_source: Installation

### :shield: Stable version

``` r
## install stable release
devtools::install_github(
  repo = 'https://github.com/serkor1/SLmetrics@*release',
  ref  = 'main'
)
```

### :hammer\_and\_wrench: Development version

``` r
## install development version
devtools::install_github(
  repo = 'https://github.com/serkor1/SLmetrics',
  ref  = 'development'
)
```

## :information\_source: Code of Conduct

Please note that the {SLmetrics} project is released with a [Contributor
Code of
Conduct](https://contributor-covenant.org/version/2/1/CODE_OF_CONDUCT.html).
By contributing to this project, you agree to abide by its terms.
