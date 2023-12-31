% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/bicluster_net_methods.R
\name{cooccurrence_net_to_igraph}
\alias{cooccurrence_net_to_igraph}
\title{Convert a co-occurence network to an igraph graph object}
\usage{
cooccurrence_net_to_igraph(occ_net)
}
\arguments{
\item{occ_net}{An object of class \code{cooccurrence_net}.}
}
\value{
An \code{igraph::\link[igraph]{graph}} object.
}
\description{
The function converts a \code{\link{cooccurrence_net}} object into an
igraph graph object.
The \code{threshold} is used as a cutoff for the edges of the network.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# bics <- c(run_fabia(m), run_isa(m), run_plaid(m))
# fn <- feature_network(bics, m)
# cooccurrence_net_to_igraph(fn)


}
