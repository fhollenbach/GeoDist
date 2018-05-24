#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::NumericVector calcDist_Geo(Rcpp::NumericMatrix latlon, double lat, double lon) {
    int nE = latlon.nrow() ;
    Rcpp::NumericVector dists( nE );
    double xrad = lat*3.141593/180;
    double yrad = lon*3.141593/180;
    
    for (int r = 0; r < nE; r++) {;
        double del_lon = ((latlon(r,1)*3.141593/180) - yrad);
        double first = sin(xrad) * sin((latlon(r,0)*3.141593/180));
        double second = cos(xrad) * cos((latlon(r,0)*3.141593/180)) * cos(del_lon);
        dists(r) =  6371 * (acos(first+second));
    };  
    
    return(dists);
}


