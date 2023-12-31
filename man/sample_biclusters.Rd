% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{sample_biclusters}
\alias{sample_biclusters}
\title{Sample a list of biclusters.}
\usage{
sample_biclusters(bics, mat)
}
\arguments{
\item{bics}{A list of validated bicluster objects.}

\item{mat}{The numeric matrix, that was used to generate the biclusters.}
}
\value{
A list of \link{bicluster} objects.
}
\description{
The function generates a list of biclusters given an input list of 
biclusters, where each bicluster has the same number or rows and columns, 
but with sampled entries from a uniform distribution of all rows and 
columns is the matrix.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# bics <- c(run_fabia(m), run_isa(m), run_plaid(m))
# sample_biclusters(bics, m)

}
