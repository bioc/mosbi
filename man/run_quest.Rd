% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/run_algorithms.R
\name{run_quest}
\alias{run_quest}
\title{Run the Quest biclustering algorithm}
\usage{
run_quest(data_matrix, minRow = 2, minCol = 2, ...)
}
\arguments{
\item{data_matrix}{A numeric matrix.}

\item{minRow}{Same parameters as in \link{filter_bicluster_size}.}

\item{minCol}{Same parameters as in \link{filter_bicluster_size}.}

\item{...}{Other parameters forwarded to the \link[biclust]{BCQuest}
function.}
}
\value{
a list of \link{bicluster} objects.
}
\description{
The function executes the \link[biclust]{BCQuest} biclustering algorithm,
returning a list of biclusters converted into bicluster objects
compatible with this package.
If the algorithm fails to run, an empty list is returned.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# run_quest(m)

}
