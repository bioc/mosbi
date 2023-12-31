% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{algohistogram}
\alias{algohistogram}
\title{Get list the list of algorithms from a list of bicluster objects.}
\usage{
algohistogram(bic)
}
\arguments{
\item{bic}{A list  of bicluster objects.}
}
\value{
A character vector with the extracted biclustering algorithms 
used for each bicluster of the input list.
}
\description{
Can be used for .g. histograms.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# bics <- c(run_fabia(m), run_isa(m), run_plaid(m))
# algohistogram(bics)

}
