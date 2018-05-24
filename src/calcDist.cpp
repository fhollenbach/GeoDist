#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericVector calcDist(Rcpp::NumericMatrix xy) {
    int nR = xy.nrow();
    int nC = xy.cols();
    Rcpp::NumericMatrix dists(nR, nR);
    
    for (int r = 0; r < nR; r++) {;
      for (int k = 0; k < nR; k++) {;
        double del_lon = ((xy(r,1)*3.141593/180) - (xy(k,1)*3.141593/180));
        double first = sin((xy(k,0)*3.141593/180)) * sin((xy(r,0)*3.141593/180));
        double second = cos((xy(k,0)*3.141593/180)) * cos((xy(r,0)*3.141593/180)) * cos(del_lon);
        dists(r,k) =  6371 * (acos(first+second));
      };
    };  
    
    return(dists);
}


