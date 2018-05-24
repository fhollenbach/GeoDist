\name{calcDist}
\alias{calcDist}
%- Also NEED an '\alias' for EACH other topic documented here.
\title{
Haversine formula is used to calculate the pairwise distance for all points in a vector.}
\description{
Haversine formula is used to calculate the pairwise distance for all points in a vector. Output is in kilometers
}
\usage{
calcDist(latlon)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{latlon}{
Matrix with latitude and longitude of N points. Latitude and longitude in columns.}
}
\details{
%%  ~~ If necessary, more details than the description above ~~
}
\value{
Returns N by N matrix with distances in KM.
}
\references{
%% ~put references to the literature/web site here ~
}
\author{
Florian M. Hollenbach
}
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

## Distance calculation for all points with themselves
dist <- calcDist(latlon = as.matrix(data))
}
