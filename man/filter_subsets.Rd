% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{filter_subsets}
\alias{filter_subsets}
\title{Remove all biclusters from a list, that are identical
or perfect subsets from each other.
Additionally all invalid biclusters are 
removed (See \code{\link{validate_bicluster}}).}
\usage{
filter_subsets(bics)
}
\arguments{
\item{bics}{A list of bicluster objects}
}
\value{
A list of bicluster objects, where 
perfects subsets or identical biclusters are deleted.
}
\description{
Remove all biclusters from a list, that are identical
or perfect subsets from each other.
Additionally all invalid biclusters are 
removed (See \code{\link{validate_bicluster}}).
}
\examples{
filter_subsets(list(bicluster(row=c(1,2,3,4), column=c(1,2,3,4)),
    bicluster(row=c(1,2,3,4), column=c(1,2,3,4))))
    
}
