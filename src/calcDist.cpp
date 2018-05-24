#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericVector calcDist(Rcpp::NumericMatrix latlon) {
    int nR = latlon.nrow();
    int nC = latlon.cols();
    Rcpp::NumericMatrix dists(nR, nR);
    
    for (int r = 0; r < nR; r++) {;
      for (int k = 0; k < nR; k++) {;
        double del_lon = ((latlon(r,1)*3.141593/180) - (latlon(k,1)*3.141593/180));
        double first = sin((latlon(k,0)*3.141593/180)) * sin((latlon(r,0)*3.141593/180));
        double second = cos((latlon(k,0)*3.141593/180)) * cos((latlon(r,0)*3.141593/180)) * cos(del_lon);
        dists(r,k) =  6371 * (acos(first+second));
      };
    };  
    
    return(dists);
}


