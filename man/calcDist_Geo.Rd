\name{calcDist_Geo}
\alias{calcDist_Geo}
%- Also NEED an '\alias' for EACH other topic documented here.
\title{
This function allows the user to calculate distance between each point in vector and another point. 
}
\description{
Haversine formula is used to calculate the distance between each point in a vector and another point specified by the user. Output is in kilometers.}
\usage{
calcDist_Geo(latlon, lat, lon)
}
%- maybe also 'usage' for other objects documented here.
\arguments{
  \item{latlon}{
Matrix that includes latitude longitude in degrees (not radians). Latitude and longitude in columns.
}
  \item{lat}{
Latitude of additional point.
}
  \item{lon}{
Longitude of additional point.}
}
\value{
Returns vector of length N that is the distance in kilometers of each point in the vector to the specified point.
}
\references{
%% ~put references to the literature/web site here ~
}
\author{
Florian M. Hollenbach}
\note{
%%  ~~further notes~~
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

##Distance Calculation with one point
dist <- calcDist_Geo(latlon = as.matrix(data),
                    lat = point[1],
                    lon = point[2])

}