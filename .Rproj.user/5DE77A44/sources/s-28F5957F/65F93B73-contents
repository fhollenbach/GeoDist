\name{GeoDist-package}
\alias{GeoDist-package}
\alias{GeoDist}
\docType{package}
\title{
GeoDist allows users to calculate pairwise distances for a vector of points
}
\description{
Given a matrix with latitude and longitude for points and latitude and longitude of a point, the GeoDist package calculates pairwise distances between the vector of points and itself or a different point. Distance output is in kilometers, based on the Haversine formula. 
}
\details{
\tabular{ll}{
Package: \tab GeoDist\cr
Type: \tab Package\cr
Version: \tab 0.1\cr
Date: \tab 2018-05-24\cr
License: \tab GPL \cr
}
calcDist_Geo(matrix,x,y) with matrix being a matrix of points with latitude in the first column and longitude in the second column. x is the latitude and y the longitude of the point we want to calculate distances to.
}
\author{
Florian M. Hollenbach

Maintainer: <florian.hollenbach@tamu.edu>
}

\keyword{distance, spatial}
\seealso{Paskages: geosphere, geom}
\examples{
N <- 200
## ###############
## simulate points
## ###############
data <- data.frame(id = N, runif(N, -10, 10), runif(N, -10, 10))

## ##############
## simulate another set of points
## ##############
point <- runif(2, -20, 20)

##Distance Calculation with one point
dist <- calcDist_Geo(latlon = as.matrix(data),
                    lat = point[1],
                    lon = point[2])

## Distance calculation for all points with themselves
dist <- calcDist(latlon = as.matrix(data))
}