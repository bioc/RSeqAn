// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// containment_test
Rcpp::String containment_test(SEXP s1);
RcppExport SEXP _RSeqAn_containment_test(SEXP s1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type s1(s1SEXP);
    rcpp_result_gen = Rcpp::wrap(containment_test(s1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RSeqAn_containment_test", (DL_FUNC) &_RSeqAn_containment_test, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RSeqAn(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}