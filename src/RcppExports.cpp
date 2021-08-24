// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// replace_threshold
IntegerMatrix replace_threshold(IntegerMatrix m, int threshold);
RcppExport SEXP _mosbi_replace_threshold(SEXP mSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_threshold(m, threshold));
    return rcpp_result_gen;
END_RCPP
}
// attribute_graph
List attribute_graph(const List bics, const NumericMatrix m, String MARGIN);
RcppExport SEXP _mosbi_attribute_graph(SEXP bicsSEXP, SEXP mSEXP, SEXP MARGINSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< String >::type MARGIN(MARGINSEXP);
    rcpp_result_gen = Rcpp::wrap(attribute_graph(bics, m, MARGIN));
    return rcpp_result_gen;
END_RCPP
}
// attributeConnector
DataFrame attributeConnector(IntegerMatrix mat, LogicalVector otherclasses, bool useOther);
RcppExport SEXP _mosbi_attributeConnector(SEXP matSEXP, SEXP otherclassesSEXP, SEXP useOtherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type otherclasses(otherclassesSEXP);
    Rcpp::traits::input_parameter< bool >::type useOther(useOtherSEXP);
    rcpp_result_gen = Rcpp::wrap(attributeConnector(mat, otherclasses, useOther));
    return rcpp_result_gen;
END_RCPP
}
// attr_overlap
DataFrame attr_overlap(List bics, bool named);
RcppExport SEXP _mosbi_attr_overlap(SEXP bicsSEXP, SEXP namedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< bool >::type named(namedSEXP);
    rcpp_result_gen = Rcpp::wrap(attr_overlap(bics, named));
    return rcpp_result_gen;
END_RCPP
}
// occurance_matrix
NumericMatrix occurance_matrix(const List bics, const NumericMatrix mat);
RcppExport SEXP _mosbi_occurance_matrix(SEXP bicsSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(occurance_matrix(bics, mat));
    return rcpp_result_gen;
END_RCPP
}
// occurance_table
DataFrame occurance_table(const List bics, const NumericMatrix mat, double threshold);
RcppExport SEXP _mosbi_occurance_table(SEXP bicsSEXP, SEXP matSEXP, SEXP thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(occurance_table(bics, mat, threshold));
    return rcpp_result_gen;
END_RCPP
}
// validate_bicluster
bool validate_bicluster(S4 bic, unsigned int minRow, unsigned int minCol);
RcppExport SEXP _mosbi_validate_bicluster(SEXP bicSEXP, SEXP minRowSEXP, SEXP minColSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type bic(bicSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type minRow(minRowSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type minCol(minColSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_bicluster(bic, minRow, minCol));
    return rcpp_result_gen;
END_RCPP
}
// transpose_bicluster
S4 transpose_bicluster(S4 bic);
RcppExport SEXP _mosbi_transpose_bicluster(SEXP bicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type bic(bicSEXP);
    rcpp_result_gen = Rcpp::wrap(transpose_bicluster(bic));
    return rcpp_result_gen;
END_RCPP
}
// clean_bicluster_list
List clean_bicluster_list(List bics);
RcppExport SEXP _mosbi_clean_bicluster_list(SEXP bicsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    rcpp_result_gen = Rcpp::wrap(clean_bicluster_list(bics));
    return rcpp_result_gen;
END_RCPP
}
// is_subset_or_identical
int is_subset_or_identical(S4& bic1, S4& bic2);
RcppExport SEXP _mosbi_is_subset_or_identical(SEXP bic1SEXP, SEXP bic2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4& >::type bic1(bic1SEXP);
    Rcpp::traits::input_parameter< S4& >::type bic2(bic2SEXP);
    rcpp_result_gen = Rcpp::wrap(is_subset_or_identical(bic1, bic2));
    return rcpp_result_gen;
END_RCPP
}
// filter_subsets
List filter_subsets(List bics);
RcppExport SEXP _mosbi_filter_subsets(SEXP bicsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_subsets(bics));
    return rcpp_result_gen;
END_RCPP
}
// zero_subsetting
NumericVector zero_subsetting(NumericVector v);
RcppExport SEXP _mosbi_zero_subsetting(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(zero_subsetting(v));
    return rcpp_result_gen;
END_RCPP
}
// cpp_matrix_subsetting
NumericMatrix cpp_matrix_subsetting(NumericMatrix m, S4 bic);
RcppExport SEXP _mosbi_cpp_matrix_subsetting(SEXP mSEXP, SEXP bicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< S4 >::type bic(bicSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_matrix_subsetting(m, bic));
    return rcpp_result_gen;
END_RCPP
}
// filter_bicluster_size
List filter_bicluster_size(List bics, unsigned int minRow, unsigned int minCol);
RcppExport SEXP _mosbi_filter_bicluster_size(SEXP bicsSEXP, SEXP minRowSEXP, SEXP minColSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type minRow(minRowSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type minCol(minColSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_bicluster_size(bics, minRow, minCol));
    return rcpp_result_gen;
END_RCPP
}
// write_graphml
int write_graphml(NumericMatrix m, String filename, CharacterVector cols);
RcppExport SEXP _mosbi_write_graphml(SEXP mSEXP, SEXP filenameSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(write_graphml(m, filename, cols));
    return rcpp_result_gen;
END_RCPP
}
// detect_elements
int detect_elements(List bics, String MARGIN);
RcppExport SEXP _mosbi_detect_elements(SEXP bicsSEXP, SEXP MARGINSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< String >::type MARGIN(MARGINSEXP);
    rcpp_result_gen = Rcpp::wrap(detect_elements(bics, MARGIN));
    return rcpp_result_gen;
END_RCPP
}
// similarity_matrix
NumericMatrix similarity_matrix(List bics, String MARGIN, const int metric, bool prob_scale, const int mat_row, const int mat_col, bool prl);
RcppExport SEXP _mosbi_similarity_matrix(SEXP bicsSEXP, SEXP MARGINSEXP, SEXP metricSEXP, SEXP prob_scaleSEXP, SEXP mat_rowSEXP, SEXP mat_colSEXP, SEXP prlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< String >::type MARGIN(MARGINSEXP);
    Rcpp::traits::input_parameter< const int >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< bool >::type prob_scale(prob_scaleSEXP);
    Rcpp::traits::input_parameter< const int >::type mat_row(mat_rowSEXP);
    Rcpp::traits::input_parameter< const int >::type mat_col(mat_colSEXP);
    Rcpp::traits::input_parameter< bool >::type prl(prlSEXP);
    rcpp_result_gen = Rcpp::wrap(similarity_matrix(bics, MARGIN, metric, prob_scale, mat_row, mat_col, prl));
    return rcpp_result_gen;
END_RCPP
}
// distance_matrix
NumericMatrix distance_matrix(List bics, String MARGIN, const int metric);
RcppExport SEXP _mosbi_distance_matrix(SEXP bicsSEXP, SEXP MARGINSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< String >::type MARGIN(MARGINSEXP);
    Rcpp::traits::input_parameter< const int >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(distance_matrix(bics, MARGIN, metric));
    return rcpp_result_gen;
END_RCPP
}
// p_overlap
double p_overlap(const int& x, const int& y, const int& k, const int& n);
RcppExport SEXP _mosbi_p_overlap(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(p_overlap(x, y, k, n));
    return rcpp_result_gen;
END_RCPP
}
// p_overlap_higher
double p_overlap_higher(const int& x, const int& y, const int& k, const int& n);
RcppExport SEXP _mosbi_p_overlap_higher(SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const int& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int& >::type k(kSEXP);
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(p_overlap_higher(x, y, k, n));
    return rcpp_result_gen;
END_RCPP
}
// p_overlap_2d
double p_overlap_2d(const int& ov_x, const int& ov_y, const int& s1x, const int& s1y, const int& s2x, const int& s2y, const int& mat_x, const int& mat_y);
RcppExport SEXP _mosbi_p_overlap_2d(SEXP ov_xSEXP, SEXP ov_ySEXP, SEXP s1xSEXP, SEXP s1ySEXP, SEXP s2xSEXP, SEXP s2ySEXP, SEXP mat_xSEXP, SEXP mat_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type ov_x(ov_xSEXP);
    Rcpp::traits::input_parameter< const int& >::type ov_y(ov_ySEXP);
    Rcpp::traits::input_parameter< const int& >::type s1x(s1xSEXP);
    Rcpp::traits::input_parameter< const int& >::type s1y(s1ySEXP);
    Rcpp::traits::input_parameter< const int& >::type s2x(s2xSEXP);
    Rcpp::traits::input_parameter< const int& >::type s2y(s2ySEXP);
    Rcpp::traits::input_parameter< const int& >::type mat_x(mat_xSEXP);
    Rcpp::traits::input_parameter< const int& >::type mat_y(mat_ySEXP);
    rcpp_result_gen = Rcpp::wrap(p_overlap_2d(ov_x, ov_y, s1x, s1y, s2x, s2y, mat_x, mat_y));
    return rcpp_result_gen;
END_RCPP
}
// p_overlap_2d_higher
double p_overlap_2d_higher(const int& ov_x, const int& ov_y, const int& s1x, const int& s1y, const int& s2x, const int& s2y, const int& mat_x, const int& mat_y);
RcppExport SEXP _mosbi_p_overlap_2d_higher(SEXP ov_xSEXP, SEXP ov_ySEXP, SEXP s1xSEXP, SEXP s1ySEXP, SEXP s2xSEXP, SEXP s2ySEXP, SEXP mat_xSEXP, SEXP mat_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type ov_x(ov_xSEXP);
    Rcpp::traits::input_parameter< const int& >::type ov_y(ov_ySEXP);
    Rcpp::traits::input_parameter< const int& >::type s1x(s1xSEXP);
    Rcpp::traits::input_parameter< const int& >::type s1y(s1ySEXP);
    Rcpp::traits::input_parameter< const int& >::type s2x(s2xSEXP);
    Rcpp::traits::input_parameter< const int& >::type s2y(s2ySEXP);
    Rcpp::traits::input_parameter< const int& >::type mat_x(mat_xSEXP);
    Rcpp::traits::input_parameter< const int& >::type mat_y(mat_ySEXP);
    rcpp_result_gen = Rcpp::wrap(p_overlap_2d_higher(ov_x, ov_y, s1x, s1y, s2x, s2y, mat_x, mat_y));
    return rcpp_result_gen;
END_RCPP
}
// NoBFBiclusters
int NoBFBiclusters(String filename);
RcppExport SEXP _mosbi_NoBFBiclusters(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(NoBFBiclusters(filename));
    return rcpp_result_gen;
END_RCPP
}
// getBFCluster
S4 getBFCluster(String filename, int cluster);
RcppExport SEXP _mosbi_getBFCluster(SEXP filenameSEXP, SEXP clusterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type cluster(clusterSEXP);
    rcpp_result_gen = Rcpp::wrap(getBFCluster(filename, cluster));
    return rcpp_result_gen;
END_RCPP
}
// getallBFClusters
List getallBFClusters(String filename);
RcppExport SEXP _mosbi_getallBFClusters(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(getallBFClusters(filename));
    return rcpp_result_gen;
END_RCPP
}
// getQUBIC2biclusters
List getQUBIC2biclusters(String filename, bool transposed);
RcppExport SEXP _mosbi_getQUBIC2biclusters(SEXP filenameSEXP, SEXP transposedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type transposed(transposedSEXP);
    rcpp_result_gen = Rcpp::wrap(getQUBIC2biclusters(filename, transposed));
    return rcpp_result_gen;
END_RCPP
}
// full_graph
NumericMatrix full_graph(const List bics, const NumericMatrix m, double const rr_weight, double const rc_weight, double const cc_weight, const int weighting);
RcppExport SEXP _mosbi_full_graph(SEXP bicsSEXP, SEXP mSEXP, SEXP rr_weightSEXP, SEXP rc_weightSEXP, SEXP cc_weightSEXP, SEXP weightingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< double const >::type rr_weight(rr_weightSEXP);
    Rcpp::traits::input_parameter< double const >::type rc_weight(rc_weightSEXP);
    Rcpp::traits::input_parameter< double const >::type cc_weight(cc_weightSEXP);
    Rcpp::traits::input_parameter< const int >::type weighting(weightingSEXP);
    rcpp_result_gen = Rcpp::wrap(full_graph(bics, m, rr_weight, rc_weight, cc_weight, weighting));
    return rcpp_result_gen;
END_RCPP
}
// has_names
bool has_names(NumericMatrix m);
RcppExport SEXP _mosbi_has_names(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(has_names(m));
    return rcpp_result_gen;
END_RCPP
}
// check_names
void check_names(NumericMatrix m);
RcppExport SEXP _mosbi_check_names(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    check_names(m);
    return R_NilValue;
END_RCPP
}
// replace_values
IntegerMatrix replace_values(IntegerMatrix mat, int threshold, bool replace_higher);
RcppExport SEXP _mosbi_replace_values(SEXP matSEXP, SEXP thresholdSEXP, SEXP replace_higherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type replace_higher(replace_higherSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_values(mat, threshold, replace_higher));
    return rcpp_result_gen;
END_RCPP
}
// replace_values_float
NumericMatrix replace_values_float(NumericMatrix mat, double threshold, bool replace_higher);
RcppExport SEXP _mosbi_replace_values_float(SEXP matSEXP, SEXP thresholdSEXP, SEXP replace_higherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< bool >::type replace_higher(replace_higherSEXP);
    rcpp_result_gen = Rcpp::wrap(replace_values_float(mat, threshold, replace_higher));
    return rcpp_result_gen;
END_RCPP
}
// network_edge_strength
IntegerMatrix network_edge_strength(IntegerMatrix adjm);
RcppExport SEXP _mosbi_network_edge_strength(SEXP adjmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type adjm(adjmSEXP);
    rcpp_result_gen = Rcpp::wrap(network_edge_strength(adjm));
    return rcpp_result_gen;
END_RCPP
}
// network_edge_strength_float
NumericMatrix network_edge_strength_float(NumericMatrix adjm, int steps, double maximum);
RcppExport SEXP _mosbi_network_edge_strength_float(SEXP adjmSEXP, SEXP stepsSEXP, SEXP maximumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type adjm(adjmSEXP);
    Rcpp::traits::input_parameter< int >::type steps(stepsSEXP);
    Rcpp::traits::input_parameter< double >::type maximum(maximumSEXP);
    rcpp_result_gen = Rcpp::wrap(network_edge_strength_float(adjm, steps, maximum));
    return rcpp_result_gen;
END_RCPP
}
// rowhistogram
NumericVector rowhistogram(List bic);
RcppExport SEXP _mosbi_rowhistogram(SEXP bicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bic(bicSEXP);
    rcpp_result_gen = Rcpp::wrap(rowhistogram(bic));
    return rcpp_result_gen;
END_RCPP
}
// colhistogram
NumericVector colhistogram(List bic);
RcppExport SEXP _mosbi_colhistogram(SEXP bicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bic(bicSEXP);
    rcpp_result_gen = Rcpp::wrap(colhistogram(bic));
    return rcpp_result_gen;
END_RCPP
}
// algohistogram
CharacterVector algohistogram(List bic);
RcppExport SEXP _mosbi_algohistogram(SEXP bicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bic(bicSEXP);
    rcpp_result_gen = Rcpp::wrap(algohistogram(bic));
    return rcpp_result_gen;
END_RCPP
}
// sample_biclusters
List sample_biclusters(List bics, NumericMatrix mat);
RcppExport SEXP _mosbi_sample_biclusters(SEXP bicsSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type bics(bicsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_biclusters(bics, mat));
    return rcpp_result_gen;
END_RCPP
}
// write_matrix
int write_matrix(NumericMatrix m, String filename, bool qubic2_format);
RcppExport SEXP _mosbi_write_matrix(SEXP mSEXP, SEXP filenameSEXP, SEXP qubic2_formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< bool >::type qubic2_format(qubic2_formatSEXP);
    rcpp_result_gen = Rcpp::wrap(write_matrix(m, filename, qubic2_format));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mosbi_replace_threshold", (DL_FUNC) &_mosbi_replace_threshold, 2},
    {"_mosbi_attribute_graph", (DL_FUNC) &_mosbi_attribute_graph, 3},
    {"_mosbi_attributeConnector", (DL_FUNC) &_mosbi_attributeConnector, 3},
    {"_mosbi_attr_overlap", (DL_FUNC) &_mosbi_attr_overlap, 2},
    {"_mosbi_occurance_matrix", (DL_FUNC) &_mosbi_occurance_matrix, 2},
    {"_mosbi_occurance_table", (DL_FUNC) &_mosbi_occurance_table, 3},
    {"_mosbi_validate_bicluster", (DL_FUNC) &_mosbi_validate_bicluster, 3},
    {"_mosbi_transpose_bicluster", (DL_FUNC) &_mosbi_transpose_bicluster, 1},
    {"_mosbi_clean_bicluster_list", (DL_FUNC) &_mosbi_clean_bicluster_list, 1},
    {"_mosbi_is_subset_or_identical", (DL_FUNC) &_mosbi_is_subset_or_identical, 2},
    {"_mosbi_filter_subsets", (DL_FUNC) &_mosbi_filter_subsets, 1},
    {"_mosbi_zero_subsetting", (DL_FUNC) &_mosbi_zero_subsetting, 1},
    {"_mosbi_cpp_matrix_subsetting", (DL_FUNC) &_mosbi_cpp_matrix_subsetting, 2},
    {"_mosbi_filter_bicluster_size", (DL_FUNC) &_mosbi_filter_bicluster_size, 3},
    {"_mosbi_write_graphml", (DL_FUNC) &_mosbi_write_graphml, 3},
    {"_mosbi_detect_elements", (DL_FUNC) &_mosbi_detect_elements, 2},
    {"_mosbi_similarity_matrix", (DL_FUNC) &_mosbi_similarity_matrix, 7},
    {"_mosbi_distance_matrix", (DL_FUNC) &_mosbi_distance_matrix, 3},
    {"_mosbi_p_overlap", (DL_FUNC) &_mosbi_p_overlap, 4},
    {"_mosbi_p_overlap_higher", (DL_FUNC) &_mosbi_p_overlap_higher, 4},
    {"_mosbi_p_overlap_2d", (DL_FUNC) &_mosbi_p_overlap_2d, 8},
    {"_mosbi_p_overlap_2d_higher", (DL_FUNC) &_mosbi_p_overlap_2d_higher, 8},
    {"_mosbi_NoBFBiclusters", (DL_FUNC) &_mosbi_NoBFBiclusters, 1},
    {"_mosbi_getBFCluster", (DL_FUNC) &_mosbi_getBFCluster, 2},
    {"_mosbi_getallBFClusters", (DL_FUNC) &_mosbi_getallBFClusters, 1},
    {"_mosbi_getQUBIC2biclusters", (DL_FUNC) &_mosbi_getQUBIC2biclusters, 2},
    {"_mosbi_full_graph", (DL_FUNC) &_mosbi_full_graph, 6},
    {"_mosbi_has_names", (DL_FUNC) &_mosbi_has_names, 1},
    {"_mosbi_check_names", (DL_FUNC) &_mosbi_check_names, 1},
    {"_mosbi_replace_values", (DL_FUNC) &_mosbi_replace_values, 3},
    {"_mosbi_replace_values_float", (DL_FUNC) &_mosbi_replace_values_float, 3},
    {"_mosbi_network_edge_strength", (DL_FUNC) &_mosbi_network_edge_strength, 1},
    {"_mosbi_network_edge_strength_float", (DL_FUNC) &_mosbi_network_edge_strength_float, 3},
    {"_mosbi_rowhistogram", (DL_FUNC) &_mosbi_rowhistogram, 1},
    {"_mosbi_colhistogram", (DL_FUNC) &_mosbi_colhistogram, 1},
    {"_mosbi_algohistogram", (DL_FUNC) &_mosbi_algohistogram, 1},
    {"_mosbi_sample_biclusters", (DL_FUNC) &_mosbi_sample_biclusters, 2},
    {"_mosbi_write_matrix", (DL_FUNC) &_mosbi_write_matrix, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_mosbi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
