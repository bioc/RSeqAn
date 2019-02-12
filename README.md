# RSeqAn
SeqAn Headers for R

[![Build Status](https://travis-ci.org/compbiocore/RSeqAn.svg?branch=master)](https://travis-ci.org/compbiocore/RSeqAn) [![codecov](https://codecov.io/gh/compbiocore/RSeqAn/branch/master/graph/badge.svg)](https://codecov.io/gh/compbiocore/RSeqAn) [![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)
[![Docs](https://img.shields.io/badge/docs-stable-steelblue.svg?style=flat-square)](https://compbiocore.github.io/RSeqAn)
[![DOI](http://joss.theoj.org/papers/10.21105/joss.01160/status.svg)](https://doi.org/10.21105/joss.01160)

## Overview

This package provides R with access to [SeqAn v2.4](http://www.seqan.de/) header files. SeqAn is an open source C++ library of efficient algorithms and data structures for the analysis of sequences with the focus on biological data.

## Usage

RSeqAn can be used via the `LinkingTo:` field in the `DESCRIPTION` field of an R package. Note that the compiler will need to compile as C++14. This can be done in R as `Sys.setenv("PKG_CXXFLAGS"="-std=c++14")`.

For a quick example, see our [introductory vignette](https://compbiocore.github.io/RSeqAn/first_example/). Alternatively you can run the C++ code from the vignette directly by entering

```r
Rcpp::sourceCpp(system.file("extdata","first_example.cpp",package="RSeqAn"))
pattern_search("This is an awesome tutorial to get to know SeqAn!", "tutorial")
```

Don't forget to set the C++14 compiler flags if you do this!

## Installation

 * We recommend installing the release version [through Bioconductor](https://bioconductor.org/packages/release/bioc/html/RSeqAn.html), especially if you are running R on Windows. Instructions are provided on their page.

 * Version 1.3.1 can also be installed [through Bioconductor](http://bioconductor.org/packages/devel/bioc/html/RSeqAn.html) (for now, Bioconductor has a separate release cycle), downloaded as [a tagged release](https://github.com/compbiocore/RSeqAn/releases/tag/v1.3.1), or installed with `devtools` by running:
```r
devtools::install_github("compbiocore/RSeqAn", ref="v1.3.1")
```
This version contains `Rcpp::as` and `Rcpp::wrap` functions for `CharString` and is the one submitted to the [Journal of Open Source Software](https://joss.theoj.org/).

 * The development version can be installed with `devtools` by running:
```r
devtools::install_github("compbiocore/RSeqAn", ref="devel")
```
This version contains additional wrappers, though we cannot guarantee that they will work for you.

## Author

August Guang

## Release history

See [`NEWS`](/inst/NEWS) for release history.

## Citation

If you use this package in your work, even if only in auxiliary tools or pipelines please cite:

Guang, (2019). RSeqAn: Headers and wrappers for the SeqAn library in R. Journal of Open Source Software, 4(34), 1160, https://doi.org/10.21105/joss.01160

Please do not forget to cite SeqAn as well:

Reinert, K., Dadi, T. H., Ehrhardt, M., Hauswedell, H., Mehringer, S., Rahn, R., … Weese, D. (2017). The SeqAn C++ template library for efficient sequence analysis: A resource for programmers. Journal of Biotechnology. https://doi.org/10.1016/j.jbiotec.2017.07.017
