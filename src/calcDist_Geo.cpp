#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericVector calcDist_Geo(Rcpp::NumericMatrix xy, double refx, double refy) {
    int nE = xy.nrow() ;
    Rcpp::NumericVector dists( nE );
    double xrad = refx*3.141593/180;
    double yrad = refy*3.141593/180;
    
    for (int r = 0; r < nE; r++) {;
        double del_lon = ((xy(r,1)*3.141593/180) - yrad);
        double first = sin(xrad) * sin((xy(r,0)*3.141593/180));
        double second = cos(xrad) * cos((xy(r,0)*3.141593/180)) * cos(del_lon);
        dists(r) =  6371 * (acos(first+second));
    };  
    
    return(dists);
}


