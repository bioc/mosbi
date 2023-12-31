% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/bicluster_net_methods.R
\name{bicluster_net_to_igraph,bicluster_net-method}
\alias{bicluster_net_to_igraph,bicluster_net-method}
\title{Convert Bicluster network to an igraph graph object}
\usage{
\S4method{bicluster_net_to_igraph}{bicluster_net}(bic_net)
}
\arguments{
\item{bic_net}{An object of class \code{bicluster_net}.}
}
\value{
An \code{igraph::\link[igraph]{graph}} object.
}
\description{
The function converts a \code{\link{bicluster_net}} object into an igraph
graph object.
The \code{threshold} is used as a cutoff for the edges of the network.
}
\examples{
m <- matrix(seq(1:16), nrow=4)
# m <- matrix(rnorm(10000), nrow=100)
# bics <- c(run_fabia(m), run_isa(m), run_plaid(m))
# bn <- bicluster_network(bics, m)
# bicluster_net_to_igraph(bn)

}
