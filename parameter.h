#define DATA_OUT_CH 1
#define DATA_OUT_DIM 28

#define CONV1_IN_DIM 28
#define CONV1_IN_CH 1
#define CONV1_KER_DIM 5
#define CONV1_PAD 2
#define CONV1_STRIDE 1
#define CONV1_OUT_CH 32
#define CONV1_OUT_DIM 28

#define POOL1_IN_DIM 28
#define POOL1_IN_CH 32
#define POOL1_KER_DIM 3
#define POOL1_STRIDE 2
#define POOL1_PAD 0
#define POOL1_OUT_DIM 14

#define RELU1_OUT_CH 32
#define RELU1_OUT_DIM 14

#define CONV2_IN_DIM 14
#define CONV2_IN_CH 32
#define CONV2_KER_DIM 5
#define CONV2_PAD 2
#define CONV2_STRIDE 1
#define CONV2_OUT_CH 32
#define CONV2_OUT_DIM 14

#define RELU2_OUT_CH 32
#define RELU2_OUT_DIM 14

#define POOL2_IN_DIM 14
#define POOL2_IN_CH 32
#define POOL2_KER_DIM 3
#define POOL2_STRIDE 2
#define POOL2_PAD 0
#define POOL2_OUT_DIM 7

#define CONV3_IN_DIM 7
#define CONV3_IN_CH 32
#define CONV3_KER_DIM 5
#define CONV3_PAD 2
#define CONV3_STRIDE 1
#define CONV3_OUT_CH 64
#define CONV3_OUT_DIM 7

#define RELU3_OUT_CH 64
#define RELU3_OUT_DIM 7

#define POOL3_IN_DIM 7
#define POOL3_IN_CH 64
#define POOL3_KER_DIM 3
#define POOL3_STRIDE 2
#define POOL3_PAD 0
#define POOL3_OUT_DIM 3

#define IP1_IN_DIM 576
#define IP1_OUT_DIM 10

#define DATA_RSHIFT -1
#define CONV1_BIAS_LSHIFT 0
#define CONV1_OUT_RSHIFT 9
#define CONV2_BIAS_LSHIFT 0
#define CONV2_OUT_RSHIFT 10
#define CONV3_BIAS_LSHIFT 0
#define CONV3_OUT_RSHIFT 7
#define IP1_BIAS_LSHIFT 0
#define IP1_OUT_RSHIFT 4
