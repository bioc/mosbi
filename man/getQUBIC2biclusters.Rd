% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{getQUBIC2biclusters}
\alias{getQUBIC2biclusters}
\title{Extract QUBIC2 biclusters}
\usage{
getQUBIC2biclusters(filename, transposed = FALSE)
}
\arguments{
\item{filename}{Path to the QUBIC2 results file.}

\item{transposed}{Set to TRUE, if the
biclustering was performed on a tranposed matrix.}
}
\value{
A list of validated bicluster 
objects (See \code{\link{validate_bicluster}}).
}
\description{
Extract biclusters from a QUBIC2 "*.blocks" file. 
Row and column names are not added to the bicluster objects.
}
\examples{
a <- "PathToQUBIC2output.txt"
# Not run: getQUBIC2biclusters(a)

}
