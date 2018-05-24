// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// calcDist_Geo
Rcpp::NumericVector calcDist_Geo(Rcpp::NumericMatrix latlon, double lat, double lon);
RcppExport SEXP _GeoDist_calcDist_Geo(SEXP latlonSEXP, SEXP latSEXP, SEXP lonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type latlon(latlonSEXP);
    Rcpp::traits::input_parameter< double >::type lat(latSEXP);
    Rcpp::traits::input_parameter< double >::type lon(lonSEXP);
    rcpp_result_gen = Rcpp::wrap(calcDist_Geo(latlon, lat, lon));
    return rcpp_result_gen;
END_RCPP
}
// calcDist
Rcpp::NumericVector calcDist(Rcpp::NumericMatrix latlon);
RcppExport SEXP _GeoDist_calcDist(SEXP latlonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type latlon(latlonSEXP);
    rcpp_result_gen = Rcpp::wrap(calcDist(latlon));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GeoDist_calcDist_Geo", (DL_FUNC) &_GeoDist_calcDist_Geo, 3},
    {"_GeoDist_calcDist", (DL_FUNC) &_GeoDist_calcDist, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_GeoDist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
