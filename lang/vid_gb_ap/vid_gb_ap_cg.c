/*****************************************************/
/**  Autogenerated clustergen voice for vid_gb_ap    */
/*****************************************************/

#include "cst_string.h"
#include "cst_cg.h"
#include "cst_cart.h"

extern const cst_cart * const vid_gb_ap_f0_carts[];

extern const cst_cart * const vid_gb_ap_17_mcep_carts[];
#define vid_gb_ap_17_num_channels 174
#define vid_gb_ap_17_num_frames 63610
extern uint16_t * vid_gb_ap_17_model_vectors[];

extern const cst_cart * const vid_gb_ap_12_mcep_carts[];
#define vid_gb_ap_12_num_channels 174
#define vid_gb_ap_12_num_frames 64087
extern uint16_t * vid_gb_ap_12_model_vectors[];

extern const cst_cart * const vid_gb_ap_01_mcep_carts[];
#define vid_gb_ap_01_num_channels 174
#define vid_gb_ap_01_num_frames 62802
extern uint16_t * vid_gb_ap_01_model_vectors[];

#define vid_gb_ap_num_param_models 3
int vid_gb_ap_num_channels_table[] = {
   vid_gb_ap_17_num_channels,
   vid_gb_ap_12_num_channels,
   vid_gb_ap_01_num_channels,
0};
int vid_gb_ap_num_frames_table[] = {
   vid_gb_ap_17_num_frames,
   vid_gb_ap_12_num_frames,
   vid_gb_ap_01_num_frames,
0};
uint16_t **vid_gb_ap_model_vectors_table[] = {
   vid_gb_ap_17_model_vectors,
   vid_gb_ap_12_model_vectors,
   vid_gb_ap_01_model_vectors,
NULL};
const cst_cart * const *vid_gb_ap_mcep_carts_table[] = {
   vid_gb_ap_17_mcep_carts,
   vid_gb_ap_12_mcep_carts,
   vid_gb_ap_01_mcep_carts,
NULL};
extern const dur_stat * vid_gb_ap_cg_08_dur_stats[];
extern const cst_cart vid_gb_ap_cg_08_dur_cart;
extern const dur_stat * vid_gb_ap_cg_10_dur_stats[];
extern const cst_cart vid_gb_ap_cg_10_dur_cart;
extern const dur_stat * vid_gb_ap_cg_17_dur_stats[];
extern const cst_cart vid_gb_ap_cg_17_dur_cart;
#define vid_gb_ap_num_dur_models 3
const dur_stat **vid_gb_ap_dur_stats_table[] = {
   vid_gb_ap_cg_08_dur_stats,
   vid_gb_ap_cg_10_dur_stats,
   vid_gb_ap_cg_17_dur_stats,
NULL};
const cst_cart *vid_gb_ap_dur_cart_table[] = {
   &vid_gb_ap_cg_08_dur_cart,
   &vid_gb_ap_cg_10_dur_cart,
   &vid_gb_ap_cg_17_dur_cart,
NULL};
extern const char * const *vid_gb_ap_phone_states[];

const char * const vid_gb_ap_types[] = {
   "aa_1",
   "aa_2",
   "aa_3",
   "ae_1",
   "ae_2",
   "ae_3",
   "ah_1",
   "ah_2",
   "ah_3",
   "ao_1",
   "ao_2",
   "ao_3",
   "aw_1",
   "aw_2",
   "aw_3",
   "ax_1",
   "ax_2",
   "ax_3",
   "ay_1",
   "ay_2",
   "ay_3",
   "b_1",
   "b_2",
   "b_3",
   "ch_1",
   "ch_2",
   "ch_3",
   "d_1",
   "d_2",
   "d_3",
   "dh_1",
   "dh_2",
   "dh_3",
   "eh_1",
   "eh_2",
   "eh_3",
   "er_1",
   "er_2",
   "er_3",
   "ey_1",
   "ey_2",
   "ey_3",
   "f_1",
   "f_2",
   "f_3",
   "g_1",
   "g_2",
   "g_3",
   "hh_1",
   "hh_2",
   "hh_3",
   "ih_1",
   "ih_2",
   "ih_3",
   "iy_1",
   "iy_2",
   "iy_3",
   "jh_1",
   "jh_2",
   "jh_3",
   "k_1",
   "k_2",
   "k_3",
   "l_1",
   "l_2",
   "l_3",
   "m_1",
   "m_2",
   "m_3",
   "n_1",
   "n_2",
   "n_3",
   "ng_1",
   "ng_2",
   "ng_3",
   "ow_1",
   "ow_2",
   "ow_3",
   "oy_1",
   "oy_2",
   "oy_3",
   "p_1",
   "p_2",
   "p_3",
   "pau_1",
   "pau_2",
   "pau_3",
   "pau_5",
   "r_1",
   "r_2",
   "r_3",
   "s_1",
   "s_2",
   "s_3",
   "sh_1",
   "sh_2",
   "sh_3",
   "t_1",
   "t_2",
   "t_3",
   "th_1",
   "th_2",
   "th_3",
   "uh_1",
   "uh_2",
   "uh_3",
   "uw_1",
   "uw_2",
   "uw_3",
   "v_1",
   "v_2",
   "v_3",
   "w_1",
   "w_2",
   "w_3",
   "y_1",
   "y_2",
   "y_3",
   "z_1",
   "z_2",
   "z_3",
   "zh_1",
   "zh_2",
   "zh_3",
   NULL};
#define vid_gb_ap_num_types  124

const float vid_gb_ap_model_min[] = { 
   -0.588235,
   0.000000,
   -9.210340,
   0.000000,
   -1.295270,
   0.000000,
   -3.091170,
   0.000000,
   -0.877067,
   0.000000,
   -1.029930,
   0.000000,
   -0.663199,
   0.000000,
   -1.231290,
   0.000000,
   -0.613454,
   0.000000,
   -1.262730,
   0.000000,
   -0.804441,
   0.000000,
   -0.602654,
   0.000000,
   -0.726566,
   0.000000,
   -0.730955,
   0.000000,
   -0.484999,
   0.000000,
   -0.786323,
   0.000000,
   -0.560853,
   0.000000,
   -0.577436,
   0.000000,
   -0.412999,
   0.000000,
   -0.519863,
   0.000000,
   -0.408409,
   0.000000,
   -0.470819,
   0.000000,
   -0.533522,
   0.000000,
   -0.451806,
   0.000000,
   -0.428151,
   0.000000,
   -0.437225,
   0.000000,
   -0.357392,
   0.000000,
   -0.458919,
   0.000000,
   -0.406400,
   0.000000,
   -0.392045,
   0.000000,
   -0.407545,
   0.000000,
   -0.337539,
   0.000000,
   -0.368795,
   0.000000,
   -0.265885,
   0.000000,
   -0.374449,
   0.000000,
   -0.253618,
   0.000000,
   -0.346829,
   0.000000,
   -0.278579,
   0.000000,
   -0.262430,
   0.000000,
   -0.247850,
   0.000000,
   -0.347825,
   0.000000,
   -2.644910,
   0.000000,
   -0.473091,
   0.000000,
   -0.612976,
   0.000000,
   -0.395584,
   0.000000,
   -0.284866,
   0.000000,
   -0.258788,
   0.000000,
   -0.479318,
   0.000000,
   -0.260565,
   0.000000,
   -0.262168,
   0.000000,
   -0.207348,
   0.000000,
   -0.165426,
   0.000000,
   -0.111894,
   0.000000,
   -0.182206,
   0.000000,
   -0.143869,
   0.000000,
   -0.111879,
   0.000000,
   -0.116750,
   0.000000,
   -0.117602,
   0.000000,
   -0.086411,
   0.000000,
   -0.129285,
   0.000000,
   -0.089216,
   0.000000,
   -0.093676,
   0.000000,
   -0.093317,
   0.000000,
   -0.074605,
   0.000000,
   -0.071515,
   0.000000,
   -0.071621,
   0.000000,
   -0.063064,
   0.000000,
   -0.089243,
   0.000000,
   -0.063918,
   0.000000,
   -0.073667,
   0.000000,
   -0.059117,
   0.000000,
   -0.060855,
   0.000000,
   -0.064161,
   0.000000,
   -0.063455,
   0.000000,
   -0.067279,
   0.000000,
   -0.059613,
   0.000000,
   -0.047636,
   0.000000,
   -0.052402,
   0.000000,
   -0.046411,
   0.000000,
   -0.041200,
   0.000000,
   -0.049257,
   0.000000,
   0.096551,
   0.000145,
   0.086663,
   0.000481,
   0.087960,
   0.000547,
   0.087247,
   0.000179,
   0.086456,
   0.000077,
   0.000000,
   0.000000,
};
const float vid_gb_ap_model_range[] = { 
   173.179245,
   69.286102,
   16.951340,
   7.272210,
   5.214490,
   1.396610,
   4.884440,
   1.198770,
   2.824617,
   0.737429,
   2.414510,
   0.642065,
   2.351639,
   0.661294,
   2.399770,
   0.629931,
   1.833634,
   0.569196,
   2.004830,
   0.587765,
   1.751898,
   0.538493,
   1.493541,
   0.415650,
   1.508067,
   0.529462,
   1.171321,
   0.406862,
   1.174172,
   0.380044,
   1.364738,
   0.393660,
   1.343440,
   0.365580,
   1.061687,
   0.402683,
   1.021407,
   0.368493,
   0.946755,
   0.344808,
   0.977475,
   0.351933,
   0.969074,
   0.326978,
   1.000478,
   0.294700,
   0.925189,
   0.309733,
   0.968114,
   0.359947,
   0.793504,
   0.332163,
   0.713764,
   0.302876,
   0.702461,
   0.278309,
   0.751589,
   0.244073,
   0.740497,
   0.297959,
   0.632404,
   0.256408,
   0.611090,
   0.252865,
   0.713641,
   0.226198,
   0.585393,
   0.272619,
   0.614907,
   0.245760,
   0.533846,
   0.253958,
   0.628647,
   0.251448,
   0.536751,
   0.212681,
   0.524747,
   0.219884,
   0.490965,
   0.177708,
   0.614188,
   0.213945,
   6.639810,
   3.206590,
   1.223869,
   0.497234,
   1.105785,
   0.361694,
   0.671882,
   0.274167,
   0.537609,
   0.238456,
   0.556710,
   0.230825,
   0.718952,
   0.238355,
   0.488458,
   0.194455,
   0.472077,
   0.209143,
   0.338569,
   0.165139,
   0.285532,
   0.149229,
   0.327649,
   0.141545,
   0.304524,
   0.143076,
   0.262478,
   0.119382,
   0.192046,
   0.126095,
   0.227625,
   0.121512,
   0.205001,
   0.118765,
   0.167529,
   0.105504,
   0.223584,
   0.116194,
   0.175628,
   0.108706,
   0.178607,
   0.101168,
   0.170616,
   0.107939,
   0.155583,
   0.094854,
   0.160449,
   0.095188,
   0.146568,
   0.091587,
   0.136847,
   0.095651,
   0.147787,
   0.102889,
   0.129245,
   0.081319,
   0.152108,
   0.077285,
   0.119282,
   0.081911,
   0.126764,
   0.089321,
   0.124453,
   0.076398,
   0.126381,
   0.089557,
   0.121083,
   0.080674,
   0.116939,
   0.076016,
   0.108200,
   0.085839,
   0.107445,
   0.081608,
   0.098970,
   0.072235,
   0.079771,
   0.074156,
   0.095139,
   0.077587,
   0.903184,
   0.411879,
   0.707494,
   0.309119,
   0.593215,
   0.271225,
   0.421784,
   0.233918,
   0.356623,
   0.239510,
   10.000000,
   5.163980,
};
const float vid_gb_ap_dynwin[] = { -0.5, 0.0, 0.5 };
#define vid_gb_ap_dynwinsize 3
const double vid_gb_ap_me_filter_0[] = {
0.000000, 0.000007, 0.000026, 0.000049, 0.000065, 0.000062, 0.000028, -0.000052, -0.000189, -0.000393, -0.000670, -0.001020, -0.001439, -0.001914, -0.002426, -0.002948, -0.003448, -0.003883, -0.004211, -0.004381, -0.004344, -0.004051, -0.003453, -0.002511, -0.001190, 0.000535, 0.002674, 0.005227, 0.008178, 0.011497, 0.015138, 0.019040, 0.023132, 0.027330, 0.031542, 0.035670, 0.039614, 0.043274, 0.046556, 0.049373, 0.051649, 0.053321, 0.054344, 0.054688, 0.054344, 0.053321, 0.051649
};
const double vid_gb_ap_me_filter_1[] = {
0.000000, -0.000016, -0.000053, -0.000066, 0.000016, 0.000241, 0.000599, 0.000992, 0.001255, 0.001218, 0.000784, 0.000000, -0.000926, -0.001683, -0.001979, -0.001687, -0.000949, -0.000185, 0.000033, -0.000787, -0.002788, -0.005564, -0.008130, -0.009125, -0.007237, -0.001716, 0.007155, 0.017847, 0.027744, 0.033706, 0.032930, 0.023873, 0.006976, -0.015103, -0.037853, -0.055876, -0.064223, -0.059762, -0.042179, -0.014315, 0.018327, 0.048795, 0.070350, 0.078125, 0.070350, 0.048795, 0.018327
};
const double vid_gb_ap_me_filter_2[] = {
0.000000, -0.000003, 0.000012, 0.000143, 0.000192, -0.000217, -0.000658, -0.000316, 0.000256, -0.000089, -0.000296, 0.001443, 0.003055, 0.000621, -0.003908, -0.004040, 0.000084, 0.001062, -0.001591, 0.001142, 0.009453, 0.008859, -0.005487, -0.015184, -0.006792, 0.003775, -0.000597, -0.004001, 0.013770, 0.030025, 0.008391, -0.031940, -0.035116, -0.001394, 0.009387, -0.011799, 0.005561, 0.076309, 0.085834, -0.044967, -0.184440, -0.126635, 0.102871, 0.234375, 0.102871, -0.126635, -0.184440
};
const double vid_gb_ap_me_filter_3[] = {
0.000000, -0.000013, 0.000017, 0.000000, 0.000119, -0.000053, -0.000608, 0.000817, 0.000410, -0.001298, 0.000361, 0.000000, 0.001231, 0.000147, -0.004416, 0.003759, 0.003148, -0.005600, 0.000772, 0.000000, 0.003754, 0.002337, -0.014086, 0.008155, 0.011729, -0.014511, 0.000229, 0.000000, 0.008068, 0.010352, -0.035384, 0.012534, 0.035487, -0.033515, -0.004128, 0.000000, 0.017386, 0.042503, -0.109493, 0.015257, 0.172947, -0.165851, -0.087558, 0.250000, -0.087558, -0.165851, 0.172947
};
const double vid_gb_ap_me_filter_4[] = {
0.000000, -0.000006, 0.000049, -0.000129, 0.000184, -0.000145, 0.000035, -0.000008, 0.000281, -0.000955, 0.001844, -0.002463, 0.002245, -0.000921, -0.001191, 0.003196, -0.004049, 0.003220, -0.001207, -0.000487, 0.000051, 0.003521, -0.009526, 0.015470, -0.018068, 0.014988, -0.006429, -0.004431, 0.012655, -0.014074, 0.007939, 0.001817, -0.007719, 0.002175, 0.018215, -0.049588, 0.080829, -0.097220, 0.086529, -0.044978, -0.019697, 0.089842, -0.143822, 0.164062, -0.143822, 0.089842, -0.019697
};
const double * const vid_gb_ap_me_h[] = {
   vid_gb_ap_me_filter_0,
   vid_gb_ap_me_filter_1,
   vid_gb_ap_me_filter_2,
   vid_gb_ap_me_filter_3,
   vid_gb_ap_me_filter_4
};

const cst_cg_db vid_gb_ap_cg_db = {
  "vid_gb_ap",
  vid_gb_ap_types,
  vid_gb_ap_num_types,
  44100,
  100.000000,28.000000,
  vid_gb_ap_f0_carts,
  vid_gb_ap_num_param_models,
  vid_gb_ap_mcep_carts_table,
  NULL,NULL,
  vid_gb_ap_num_channels_table,
  vid_gb_ap_num_frames_table,
  vid_gb_ap_model_vectors_table,
  0,0,NULL,
  vid_gb_ap_model_min,
  vid_gb_ap_model_range,
  0.005000, /* frame_advance */
  vid_gb_ap_num_dur_models,
  vid_gb_ap_dur_stats_table,
  vid_gb_ap_dur_cart_table,
  vid_gb_ap_phone_states,
  1, /* 1 if mlpg required */
  (float *)vid_gb_ap_dynwin,
  vid_gb_ap_dynwinsize,
  0.544000, /* mlsa_alpha */
  0.400000, /* mlsa_beta */
  0, /* cg:multimodel */
  1, /* cg:mixed_excitation */
  5,48, /* filter sizes */
  vid_gb_ap_me_h, 
  0, // cg:spamf0
  1.5 /* gain */
};
