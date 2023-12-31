% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{is_subset_or_identical}
\alias{is_subset_or_identical}
\title{Check if a bicluster is a subset (in rows AND columns) 
of identical to another bicluster.}
\usage{
is_subset_or_identical(bic1, bic2)
}
\arguments{
\item{bic1}{A bicluster.}

\item{bic2}{A bicluster.}
}
\value{
1 if bic1 is a subset of bic2, 2 if bic 1 is 
identical to bic2, 0 else.
}
\description{
Check if a bicluster is a subset (in rows AND columns) 
of identical to another bicluster.
}
\examples{
is_subset_or_identical(bicluster(row=c(1,2,3,4), column=c(1,2,3,4)),
    bicluster(row=c(1,2,3,4), column=c(1,2,3,4)))
    
}
