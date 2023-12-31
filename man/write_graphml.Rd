% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{write_graphml}
\alias{write_graphml}
\title{Save adjacency matrix as GraphML file}
\usage{
write_graphml(m, filename, cols)
}
\arguments{
\item{m}{A symmetric numeric matrix (Adjacency matrix). Rownames 
are considered as node names.}

\item{filename}{Name of the resulting GraphML 
file (should end with ".gml").}

\item{cols}{Node colors.}
}
\value{
0 if successful.
}
\description{
Save and adjacency matrix as returned by \code{\link{full_graph}} or 
1 - \code{\link{distance_matrix}} as a GraphML file.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# bics <- c(run_fabia(m), run_isa(m), run_plaid(m))
# bn <- bicluster_network(bics, m)
# write_graphml(apply_threshold(bn), "testfile.txt")

}
