#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define VERSION 5
#define BUFFER_SIZE 775

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} mrtlQg24_ctx_t;

void init_ctx(mrtlQg24_ctx_t *ctx) {
    ctx->id = 5801;
    ctx->coefficient = 6.4;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} ptziwMLP_ctx_t;

void init_ctx(ptziwMLP_ctx_t *ctx) {
    ctx->id = 6821;
    ctx->coefficient = 9.0;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} SIvA48Bl_ctx_t;

void init_ctx(SIvA48Bl_ctx_t *ctx) {
    ctx->id = 8253;
    ctx->coefficient = 8.3;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} LQOI8J7U_ctx_t;

void init_ctx(LQOI8J7U_ctx_t *ctx) {
    ctx->id = 4457;
    ctx->coefficient = 4.4;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ykKn7L3r_ctx_t;

void init_ctx(ykKn7L3r_ctx_t *ctx) {
    ctx->id = 4710;
    ctx->coefficient = 7.2;
    ctx->flags = 6;
}

int compute_0U3oSzj(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} fEbD7TXD_ctx_t;

void init_ctx(fEbD7TXD_ctx_t *ctx) {
    ctx->id = 4090;
    ctx->coefficient = 0.7;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} IwqpRTjO_ctx_t;

void init_ctx(IwqpRTjO_ctx_t *ctx) {
    ctx->id = 2096;
    ctx->coefficient = 1.4;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 1LadxNia_ctx_t;

void init_ctx(1LadxNia_ctx_t *ctx) {
    ctx->id = 7226;
    ctx->coefficient = 1.3;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} qVKs3iVY_ctx_t;

void init_ctx(qVKs3iVY_ctx_t *ctx) {
    ctx->id = 2264;
    ctx->coefficient = 2.9;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} ZioJ8yIo_ctx_t;

void init_ctx(ZioJ8yIo_ctx_t *ctx) {
    ctx->id = 5269;
    ctx->coefficient = 6.3;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} hGOOkVu1_ctx_t;

void init_ctx(hGOOkVu1_ctx_t *ctx) {
    ctx->id = 5596;
    ctx->coefficient = 6.4;
    ctx->flags = 21;
}

int compute_5DSp7zB(int input) {
    int result = input * 32;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 1IX5sPuk_ctx_t;

void init_ctx(1IX5sPuk_ctx_t *ctx) {
    ctx->id = 6380;
    ctx->coefficient = 0.4;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} YBfCceav_ctx_t;

void init_ctx(YBfCceav_ctx_t *ctx) {
    ctx->id = 2257;
    ctx->coefficient = 2.9;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} BzWLvql7_ctx_t;

void init_ctx(BzWLvql7_ctx_t *ctx) {
    ctx->id = 6016;
    ctx->coefficient = 0.3;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} yctKhFI0_ctx_t;

void init_ctx(yctKhFI0_ctx_t *ctx) {
    ctx->id = 7648;
    ctx->coefficient = 7.8;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} n0pqpe5n_ctx_t;

void init_ctx(n0pqpe5n_ctx_t *ctx) {
    ctx->id = 8065;
    ctx->coefficient = 3.8;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} fm4w3iT7_ctx_t;

void init_ctx(fm4w3iT7_ctx_t *ctx) {
    ctx->id = 8797;
    ctx->coefficient = 0.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} sH0R5y1N_ctx_t;

void init_ctx(sH0R5y1N_ctx_t *ctx) {
    ctx->id = 7843;
    ctx->coefficient = 0.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} n1Y2YL4X_ctx_t;

void init_ctx(n1Y2YL4X_ctx_t *ctx) {
    ctx->id = 8726;
    ctx->coefficient = 8.5;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} p2HaWHfr_ctx_t;

void init_ctx(p2HaWHfr_ctx_t *ctx) {
    ctx->id = 7051;
    ctx->coefficient = 8.0;
    ctx->flags = 247;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} QO4PqU65_ctx_t;

void init_ctx(QO4PqU65_ctx_t *ctx) {
    ctx->id = 3371;
    ctx->coefficient = 4.7;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} oLJ14vmg_ctx_t;

void init_ctx(oLJ14vmg_ctx_t *ctx) {
    ctx->id = 1152;
    ctx->coefficient = 1.9;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} PUh5qWmz_ctx_t;

void init_ctx(PUh5qWmz_ctx_t *ctx) {
    ctx->id = 9837;
    ctx->coefficient = 6.8;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} W3I8pQC5_ctx_t;

void init_ctx(W3I8pQC5_ctx_t *ctx) {
    ctx->id = 7797;
    ctx->coefficient = 7.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 4kdJ7SSK_ctx_t;

void init_ctx(4kdJ7SSK_ctx_t *ctx) {
    ctx->id = 8490;
    ctx->coefficient = 6.3;
    ctx->flags = 138;
}

int compute_ojrvqB9(int input) {
    int result = input * 70;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_Qxyb1bp(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} K1UFxC2V_ctx_t;

void init_ctx(K1UFxC2V_ctx_t *ctx) {
    ctx->id = 8722;
    ctx->coefficient = 4.0;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} xPHPWY4k_ctx_t;

void init_ctx(xPHPWY4k_ctx_t *ctx) {
    ctx->id = 2914;
    ctx->coefficient = 6.3;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} cDu2NgQK_ctx_t;

void init_ctx(cDu2NgQK_ctx_t *ctx) {
    ctx->id = 2852;
    ctx->coefficient = 9.7;
    ctx->flags = 219;
}

int compute_fLa65wM(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_FbOKOfS(int input) {
    int result = input * 13;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} xWcL9V7Y_ctx_t;

void init_ctx(xWcL9V7Y_ctx_t *ctx) {
    ctx->id = 5140;
    ctx->coefficient = 0.2;
    ctx->flags = 234;
}

int compute_Ix4p5T2(int input) {
    int result = input * 3;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} RhOUxJmn_ctx_t;

void init_ctx(RhOUxJmn_ctx_t *ctx) {
    ctx->id = 7480;
    ctx->coefficient = 4.4;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 8ygfaVhn_ctx_t;

void init_ctx(8ygfaVhn_ctx_t *ctx) {
    ctx->id = 3133;
    ctx->coefficient = 6.3;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 5MPLsxph_ctx_t;

void init_ctx(5MPLsxph_ctx_t *ctx) {
    ctx->id = 2638;
    ctx->coefficient = 8.2;
    ctx->flags = 193;
}

int compute_zMrq1B6(int input) {
    int result = input * 34;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} uupyCzmm_ctx_t;

void init_ctx(uupyCzmm_ctx_t *ctx) {
    ctx->id = 3921;
    ctx->coefficient = 4.4;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} bbn8A5QY_ctx_t;

void init_ctx(bbn8A5QY_ctx_t *ctx) {
    ctx->id = 4705;
    ctx->coefficient = 6.5;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} ZUsHwuyY_ctx_t;

void init_ctx(ZUsHwuyY_ctx_t *ctx) {
    ctx->id = 6151;
    ctx->coefficient = 8.0;
    ctx->flags = 200;
}

int compute_wS8pIla(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_MO2J6lz(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} jtcT0ywu_ctx_t;

void init_ctx(jtcT0ywu_ctx_t *ctx) {
    ctx->id = 8028;
    ctx->coefficient = 5.4;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} THdUhG0b_ctx_t;

void init_ctx(THdUhG0b_ctx_t *ctx) {
    ctx->id = 7461;
    ctx->coefficient = 9.3;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} WpdnO5zU_ctx_t;

void init_ctx(WpdnO5zU_ctx_t *ctx) {
    ctx->id = 2947;
    ctx->coefficient = 4.4;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 4SCn7Nbp_ctx_t;

void init_ctx(4SCn7Nbp_ctx_t *ctx) {
    ctx->id = 5917;
    ctx->coefficient = 7.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} LFEMUoaS_ctx_t;

void init_ctx(LFEMUoaS_ctx_t *ctx) {
    ctx->id = 5310;
    ctx->coefficient = 9.2;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} IC0AMxnN_ctx_t;

void init_ctx(IC0AMxnN_ctx_t *ctx) {
    ctx->id = 2062;
    ctx->coefficient = 4.0;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} x1VBsx7d_ctx_t;

void init_ctx(x1VBsx7d_ctx_t *ctx) {
    ctx->id = 3401;
    ctx->coefficient = 8.2;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RlEGfbqp_ctx_t;

void init_ctx(RlEGfbqp_ctx_t *ctx) {
    ctx->id = 6177;
    ctx->coefficient = 3.4;
    ctx->flags = 73;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} Usp5plr4_ctx_t;

void init_ctx(Usp5plr4_ctx_t *ctx) {
    ctx->id = 6230;
    ctx->coefficient = 9.1;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} k7GtoXs4_ctx_t;

void init_ctx(k7GtoXs4_ctx_t *ctx) {
    ctx->id = 5369;
    ctx->coefficient = 6.9;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} vz7KGEfy_ctx_t;

void init_ctx(vz7KGEfy_ctx_t *ctx) {
    ctx->id = 7828;
    ctx->coefficient = 3.3;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} mYNlT0sm_ctx_t;

void init_ctx(mYNlT0sm_ctx_t *ctx) {
    ctx->id = 9880;
    ctx->coefficient = 6.8;
    ctx->flags = 242;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} aJNxlkf1_ctx_t;

void init_ctx(aJNxlkf1_ctx_t *ctx) {
    ctx->id = 2620;
    ctx->coefficient = 8.9;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Q2wFn2Ml_ctx_t;

void init_ctx(Q2wFn2Ml_ctx_t *ctx) {
    ctx->id = 6267;
    ctx->coefficient = 3.6;
    ctx->flags = 81;
}

int compute_60yYP1q(int input) {
    int result = input * 56;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Au0HDj5E_ctx_t;

void init_ctx(Au0HDj5E_ctx_t *ctx) {
    ctx->id = 6957;
    ctx->coefficient = 1.2;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} n2WKlBPx_ctx_t;

void init_ctx(n2WKlBPx_ctx_t *ctx) {
    ctx->id = 4392;
    ctx->coefficient = 2.5;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} infEBQqr_ctx_t;

void init_ctx(infEBQqr_ctx_t *ctx) {
    ctx->id = 5931;
    ctx->coefficient = 7.3;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} UotqBfci_ctx_t;

void init_ctx(UotqBfci_ctx_t *ctx) {
    ctx->id = 5912;
    ctx->coefficient = 6.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} UcLRKRV9_ctx_t;

void init_ctx(UcLRKRV9_ctx_t *ctx) {
    ctx->id = 7494;
    ctx->coefficient = 7.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} jP6598Ms_ctx_t;

void init_ctx(jP6598Ms_ctx_t *ctx) {
    ctx->id = 7332;
    ctx->coefficient = 9.3;
    ctx->flags = 55;
}

int compute_LXJ4TDY(int input) {
    int result = input * 70;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_Fi7yFls(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} Dn95i7Hy_ctx_t;

void init_ctx(Dn95i7Hy_ctx_t *ctx) {
    ctx->id = 4591;
    ctx->coefficient = 7.7;
    ctx->flags = 44;
}

int compute_Z0Aez1i(int input) {
    int result = input * 50;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} KU9T6bYj_ctx_t;

void init_ctx(KU9T6bYj_ctx_t *ctx) {
    ctx->id = 3440;
    ctx->coefficient = 4.0;
    ctx->flags = 92;
}

int compute_k08iuTi(int input) {
    int result = input * 56;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_rS9ZeVV(int input) {
    int result = input * 45;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} E1hqgN9u_ctx_t;

void init_ctx(E1hqgN9u_ctx_t *ctx) {
    ctx->id = 6558;
    ctx->coefficient = 4.3;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} X9kqsePF_ctx_t;

void init_ctx(X9kqsePF_ctx_t *ctx) {
    ctx->id = 2624;
    ctx->coefficient = 2.2;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} A0rPIUKF_ctx_t;

void init_ctx(A0rPIUKF_ctx_t *ctx) {
    ctx->id = 7277;
    ctx->coefficient = 1.3;
    ctx->flags = 25;
}

int compute_aMZF1x5(int input) {
    int result = input * 64;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_7j7I5YC(int input) {
    int result = input * 41;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} WggoQVfr_ctx_t;

void init_ctx(WggoQVfr_ctx_t *ctx) {
    ctx->id = 3675;
    ctx->coefficient = 4.2;
    ctx->flags = 119;
}

int compute_Yys1Wh6(int input) {
    int result = input * 4;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} a1pFnS1g_ctx_t;

void init_ctx(a1pFnS1g_ctx_t *ctx) {
    ctx->id = 9366;
    ctx->coefficient = 5.8;
    ctx->flags = 38;
}

int compute_ExoVyRd(int input) {
    int result = input * 67;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} nQEt2WKc_ctx_t;

void init_ctx(nQEt2WKc_ctx_t *ctx) {
    ctx->id = 1269;
    ctx->coefficient = 6.3;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} QP1rIQcC_ctx_t;

void init_ctx(QP1rIQcC_ctx_t *ctx) {
    ctx->id = 3989;
    ctx->coefficient = 2.3;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} PYrcdzXK_ctx_t;

void init_ctx(PYrcdzXK_ctx_t *ctx) {
    ctx->id = 7610;
    ctx->coefficient = 6.4;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} sWBj31XJ_ctx_t;

void init_ctx(sWBj31XJ_ctx_t *ctx) {
    ctx->id = 3850;
    ctx->coefficient = 6.6;
    ctx->flags = 147;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} qtTzYyEx_ctx_t;

void init_ctx(qtTzYyEx_ctx_t *ctx) {
    ctx->id = 1383;
    ctx->coefficient = 4.7;
    ctx->flags = 84;
}

int compute_PXfNr2S(int input) {
    int result = input * 60;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} LkJjBnLr_ctx_t;

void init_ctx(LkJjBnLr_ctx_t *ctx) {
    ctx->id = 8050;
    ctx->coefficient = 4.7;
    ctx->flags = 57;
}

int compute_GoFKEaM(int input) {
    int result = input * 41;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_43x28XZ(int input) {
    int result = input * 18;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_rDYAt2r(int input) {
    int result = input * 21;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 3OErMUqz_ctx_t;

void init_ctx(3OErMUqz_ctx_t *ctx) {
    ctx->id = 1116;
    ctx->coefficient = 8.5;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} g3AQNPVa_ctx_t;

void init_ctx(g3AQNPVa_ctx_t *ctx) {
    ctx->id = 9645;
    ctx->coefficient = 5.0;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} GkdV6NsR_ctx_t;

void init_ctx(GkdV6NsR_ctx_t *ctx) {
    ctx->id = 2384;
    ctx->coefficient = 9.3;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 6lByYLzH_ctx_t;

void init_ctx(6lByYLzH_ctx_t *ctx) {
    ctx->id = 1971;
    ctx->coefficient = 6.4;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} s7RJQskX_ctx_t;

void init_ctx(s7RJQskX_ctx_t *ctx) {
    ctx->id = 1093;
    ctx->coefficient = 6.1;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QA6wJDDS_ctx_t;

void init_ctx(QA6wJDDS_ctx_t *ctx) {
    ctx->id = 3349;
    ctx->coefficient = 8.1;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} ORPYp5lc_ctx_t;

void init_ctx(ORPYp5lc_ctx_t *ctx) {
    ctx->id = 3162;
    ctx->coefficient = 5.8;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} n6D6avwX_ctx_t;

void init_ctx(n6D6avwX_ctx_t *ctx) {
    ctx->id = 9207;
    ctx->coefficient = 4.9;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} fj4l4zY3_ctx_t;

void init_ctx(fj4l4zY3_ctx_t *ctx) {
    ctx->id = 2333;
    ctx->coefficient = 8.1;
    ctx->flags = 172;
}

int compute_Zlq5lTb(int input) {
    int result = input * 43;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_30e3afT(int input) {
    int result = input * 27;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_KoahtiU(int input) {
    int result = input * 49;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 4NdsKE8Q_ctx_t;

void init_ctx(4NdsKE8Q_ctx_t *ctx) {
    ctx->id = 2158;
    ctx->coefficient = 3.7;
    ctx->flags = 201;
}

int compute_OyY1c7h(int input) {
    int result = input * 4;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} GVPIxXT7_ctx_t;

void init_ctx(GVPIxXT7_ctx_t *ctx) {
    ctx->id = 3283;
    ctx->coefficient = 0.3;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} ejbeCPpU_ctx_t;

void init_ctx(ejbeCPpU_ctx_t *ctx) {
    ctx->id = 3630;
    ctx->coefficient = 9.8;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 7Dkfdch2_ctx_t;

void init_ctx(7Dkfdch2_ctx_t *ctx) {
    ctx->id = 3614;
    ctx->coefficient = 1.5;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 57qi97p6_ctx_t;

void init_ctx(57qi97p6_ctx_t *ctx) {
    ctx->id = 6974;
    ctx->coefficient = 6.4;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} V0cEwgKU_ctx_t;

void init_ctx(V0cEwgKU_ctx_t *ctx) {
    ctx->id = 8045;
    ctx->coefficient = 5.2;
    ctx->flags = 214;
}

int compute_MHPF4j3(int input) {
    int result = input * 63;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

int compute_L7b6Nap(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 7wZwjW5M_ctx_t;

void init_ctx(7wZwjW5M_ctx_t *ctx) {
    ctx->id = 4936;
    ctx->coefficient = 0.2;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Lb11kiya_ctx_t;

void init_ctx(Lb11kiya_ctx_t *ctx) {
    ctx->id = 3555;
    ctx->coefficient = 8.2;
    ctx->flags = 197;
}

int compute_iGCH6Oe(int input) {
    int result = input * 27;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 6gzmquy1_ctx_t;

void init_ctx(6gzmquy1_ctx_t *ctx) {
    ctx->id = 3429;
    ctx->coefficient = 8.6;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 7d8SMNLF_ctx_t;

void init_ctx(7d8SMNLF_ctx_t *ctx) {
    ctx->id = 2010;
    ctx->coefficient = 0.6;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} bQ96WvqU_ctx_t;

void init_ctx(bQ96WvqU_ctx_t *ctx) {
    ctx->id = 4221;
    ctx->coefficient = 3.5;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} bF4PAcgV_ctx_t;

void init_ctx(bF4PAcgV_ctx_t *ctx) {
    ctx->id = 6166;
    ctx->coefficient = 4.1;
    ctx->flags = 113;
}

int compute_H0arD70(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} Z5p9ddmV_ctx_t;

void init_ctx(Z5p9ddmV_ctx_t *ctx) {
    ctx->id = 2017;
    ctx->coefficient = 3.4;
    ctx->flags = 72;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 9Wc8GDy0_ctx_t;

void init_ctx(9Wc8GDy0_ctx_t *ctx) {
    ctx->id = 6985;
    ctx->coefficient = 9.2;
    ctx->flags = 187;
}

int compute_JgmmIKA(int input) {
    int result = input * 61;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} b5yo1yPW_ctx_t;

void init_ctx(b5yo1yPW_ctx_t *ctx) {
    ctx->id = 3065;
    ctx->coefficient = 7.9;
    ctx->flags = 236;
}

int compute_G4dSxrp(int input) {
    int result = input * 25;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 3FsGmzJ1_ctx_t;

void init_ctx(3FsGmzJ1_ctx_t *ctx) {
    ctx->id = 6830;
    ctx->coefficient = 5.7;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 1vigJySk_ctx_t;

void init_ctx(1vigJySk_ctx_t *ctx) {
    ctx->id = 5544;
    ctx->coefficient = 0.5;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} cOPfvVZC_ctx_t;

void init_ctx(cOPfvVZC_ctx_t *ctx) {
    ctx->id = 3496;
    ctx->coefficient = 7.5;
    ctx->flags = 236;
}

int compute_EnMFdLy(int input) {
    int result = input * 7;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} AYr3awr8_ctx_t;

void init_ctx(AYr3awr8_ctx_t *ctx) {
    ctx->id = 3341;
    ctx->coefficient = 3.9;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 465qkXOO_ctx_t;

void init_ctx(465qkXOO_ctx_t *ctx) {
    ctx->id = 2300;
    ctx->coefficient = 5.3;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} CyGLJaju_ctx_t;

void init_ctx(CyGLJaju_ctx_t *ctx) {
    ctx->id = 4819;
    ctx->coefficient = 8.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ht4Ub3ix_ctx_t;

void init_ctx(ht4Ub3ix_ctx_t *ctx) {
    ctx->id = 4573;
    ctx->coefficient = 0.6;
    ctx->flags = 230;
}

int compute_rOyWFf9(int input) {
    int result = input * 45;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 3EqxTg1M_ctx_t;

void init_ctx(3EqxTg1M_ctx_t *ctx) {
    ctx->id = 2970;
    ctx->coefficient = 0.6;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} wpXTZQDA_ctx_t;

void init_ctx(wpXTZQDA_ctx_t *ctx) {
    ctx->id = 9241;
    ctx->coefficient = 1.2;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} SHTkIEuh_ctx_t;

void init_ctx(SHTkIEuh_ctx_t *ctx) {
    ctx->id = 1909;
    ctx->coefficient = 8.6;
    ctx->flags = 188;
}

int compute_8WcVrAO(int input) {
    int result = input * 35;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} vu8497dj_ctx_t;

void init_ctx(vu8497dj_ctx_t *ctx) {
    ctx->id = 4287;
    ctx->coefficient = 2.1;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 4pRYqS7a_ctx_t;

void init_ctx(4pRYqS7a_ctx_t *ctx) {
    ctx->id = 6239;
    ctx->coefficient = 8.3;
    ctx->flags = 174;
}

int compute_SSNdiT1(int input) {
    int result = input * 15;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} dHZkJKMh_ctx_t;

void init_ctx(dHZkJKMh_ctx_t *ctx) {
    ctx->id = 9159;
    ctx->coefficient = 9.3;
    ctx->flags = 72;
}

int compute_GLU99re(int input) {
    int result = input * 65;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} RTKC2gCk_ctx_t;

void init_ctx(RTKC2gCk_ctx_t *ctx) {
    ctx->id = 3127;
    ctx->coefficient = 4.0;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} NUHj13ww_ctx_t;

void init_ctx(NUHj13ww_ctx_t *ctx) {
    ctx->id = 1686;
    ctx->coefficient = 8.1;
    ctx->flags = 197;
}

int compute_fqhEg0B(int input) {
    int result = input * 58;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} G1mCbq8m_ctx_t;

void init_ctx(G1mCbq8m_ctx_t *ctx) {
    ctx->id = 3857;
    ctx->coefficient = 2.9;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} iLlz3jJX_ctx_t;

void init_ctx(iLlz3jJX_ctx_t *ctx) {
    ctx->id = 6872;
    ctx->coefficient = 6.2;
    ctx->flags = 70;
}

int compute_LGJmSdz(int input) {
    int result = input * 18;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 0UU6bYZ9_ctx_t;

void init_ctx(0UU6bYZ9_ctx_t *ctx) {
    ctx->id = 4985;
    ctx->coefficient = 7.7;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} djs9JcnO_ctx_t;

void init_ctx(djs9JcnO_ctx_t *ctx) {
    ctx->id = 1042;
    ctx->coefficient = 3.7;
    ctx->flags = 124;
}

int compute_BADpAXz(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 06FdDulg_ctx_t;

void init_ctx(06FdDulg_ctx_t *ctx) {
    ctx->id = 7725;
    ctx->coefficient = 6.1;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} esNBeyQK_ctx_t;

void init_ctx(esNBeyQK_ctx_t *ctx) {
    ctx->id = 6861;
    ctx->coefficient = 1.4;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} EnPhOM8b_ctx_t;

void init_ctx(EnPhOM8b_ctx_t *ctx) {
    ctx->id = 1157;
    ctx->coefficient = 2.9;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} QGcMSnU1_ctx_t;

void init_ctx(QGcMSnU1_ctx_t *ctx) {
    ctx->id = 6820;
    ctx->coefficient = 8.5;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 4YnxMM9U_ctx_t;

void init_ctx(4YnxMM9U_ctx_t *ctx) {
    ctx->id = 9718;
    ctx->coefficient = 9.2;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} cW1esZyV_ctx_t;

void init_ctx(cW1esZyV_ctx_t *ctx) {
    ctx->id = 1385;
    ctx->coefficient = 5.5;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} gsC0y239_ctx_t;

void init_ctx(gsC0y239_ctx_t *ctx) {
    ctx->id = 1446;
    ctx->coefficient = 1.6;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} dDWVgFp0_ctx_t;

void init_ctx(dDWVgFp0_ctx_t *ctx) {
    ctx->id = 9832;
    ctx->coefficient = 2.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} gbYZWOoO_ctx_t;

void init_ctx(gbYZWOoO_ctx_t *ctx) {
    ctx->id = 5804;
    ctx->coefficient = 6.3;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} Dj6hYJvR_ctx_t;

void init_ctx(Dj6hYJvR_ctx_t *ctx) {
    ctx->id = 4954;
    ctx->coefficient = 0.1;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} N3MXh3rm_ctx_t;

void init_ctx(N3MXh3rm_ctx_t *ctx) {
    ctx->id = 8301;
    ctx->coefficient = 8.2;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ZbXnu6yH_ctx_t;

void init_ctx(ZbXnu6yH_ctx_t *ctx) {
    ctx->id = 8803;
    ctx->coefficient = 2.6;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 5fsZTmSc_ctx_t;

void init_ctx(5fsZTmSc_ctx_t *ctx) {
    ctx->id = 9855;
    ctx->coefficient = 3.0;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} QWK0nbzQ_ctx_t;

void init_ctx(QWK0nbzQ_ctx_t *ctx) {
    ctx->id = 9448;
    ctx->coefficient = 3.9;
    ctx->flags = 244;
}

int compute_AKmKMyd(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} VrOmWRzF_ctx_t;

void init_ctx(VrOmWRzF_ctx_t *ctx) {
    ctx->id = 4403;
    ctx->coefficient = 1.6;
    ctx->flags = 34;
}

int compute_ca7gAiA(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} baCW3rOL_ctx_t;

void init_ctx(baCW3rOL_ctx_t *ctx) {
    ctx->id = 7645;
    ctx->coefficient = 5.3;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} TOCKepQd_ctx_t;

void init_ctx(TOCKepQd_ctx_t *ctx) {
    ctx->id = 4492;
    ctx->coefficient = 0.9;
    ctx->flags = 233;
}

int compute_LZRWtPC(int input) {
    int result = input * 48;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} XAxq8OMC_ctx_t;

void init_ctx(XAxq8OMC_ctx_t *ctx) {
    ctx->id = 9974;
    ctx->coefficient = 4.7;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Pn1o6JPi_ctx_t;

void init_ctx(Pn1o6JPi_ctx_t *ctx) {
    ctx->id = 1074;
    ctx->coefficient = 8.9;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} 7JrFQwkt_ctx_t;

void init_ctx(7JrFQwkt_ctx_t *ctx) {
    ctx->id = 2295;
    ctx->coefficient = 5.5;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 9sIWVzGn_ctx_t;

void init_ctx(9sIWVzGn_ctx_t *ctx) {
    ctx->id = 3102;
    ctx->coefficient = 1.0;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} jv5eEQmU_ctx_t;

void init_ctx(jv5eEQmU_ctx_t *ctx) {
    ctx->id = 8443;
    ctx->coefficient = 5.9;
    ctx->flags = 4;
}

int compute_vBjyNCg(int input) {
    int result = input * 21;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} QPcch8bH_ctx_t;

void init_ctx(QPcch8bH_ctx_t *ctx) {
    ctx->id = 7921;
    ctx->coefficient = 3.0;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} c8ZyXKt8_ctx_t;

void init_ctx(c8ZyXKt8_ctx_t *ctx) {
    ctx->id = 1001;
    ctx->coefficient = 0.6;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} WO3Lf3ZM_ctx_t;

void init_ctx(WO3Lf3ZM_ctx_t *ctx) {
    ctx->id = 4047;
    ctx->coefficient = 1.9;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} lcAf4PGq_ctx_t;

void init_ctx(lcAf4PGq_ctx_t *ctx) {
    ctx->id = 4506;
    ctx->coefficient = 5.6;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} vaX6hqaD_ctx_t;

void init_ctx(vaX6hqaD_ctx_t *ctx) {
    ctx->id = 8916;
    ctx->coefficient = 0.6;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} rW6gQZwO_ctx_t;

void init_ctx(rW6gQZwO_ctx_t *ctx) {
    ctx->id = 9645;
    ctx->coefficient = 5.3;
    ctx->flags = 105;
}

int compute_fFymqm3(int input) {
    int result = input * 3;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} sW4gBtE4_ctx_t;

void init_ctx(sW4gBtE4_ctx_t *ctx) {
    ctx->id = 1350;
    ctx->coefficient = 5.3;
    ctx->flags = 244;
}

int compute_LHhJ7mq(int input) {
    int result = input * 9;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} jNEXnDrz_ctx_t;

void init_ctx(jNEXnDrz_ctx_t *ctx) {
    ctx->id = 2035;
    ctx->coefficient = 9.2;
    ctx->flags = 94;
}

int compute_zkdEkg5(int input) {
    int result = input * 24;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_1bLLuQY(int input) {
    int result = input * 10;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} JP1bpUiZ_ctx_t;

void init_ctx(JP1bpUiZ_ctx_t *ctx) {
    ctx->id = 3012;
    ctx->coefficient = 9.3;
    ctx->flags = 247;
}

int compute_FGAgHpR(int input) {
    int result = input * 38;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 0yObfreP_ctx_t;

void init_ctx(0yObfreP_ctx_t *ctx) {
    ctx->id = 1190;
    ctx->coefficient = 9.1;
    ctx->flags = 34;
}

int compute_dNFrCWf(int input) {
    int result = input * 45;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

int compute_Q4lWqgW(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} UPZdUf81_ctx_t;

void init_ctx(UPZdUf81_ctx_t *ctx) {
    ctx->id = 5604;
    ctx->coefficient = 0.5;
    ctx->flags = 240;
}

int compute_ofTTxMy(int input) {
    int result = input * 21;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

int compute_MKbkYOn(int input) {
    int result = input * 51;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_FTWhuhC(int input) {
    int result = input * 33;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} UhnvdAVP_ctx_t;

void init_ctx(UhnvdAVP_ctx_t *ctx) {
    ctx->id = 9472;
    ctx->coefficient = 5.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 0x6Huq4K_ctx_t;

void init_ctx(0x6Huq4K_ctx_t *ctx) {
    ctx->id = 4470;
    ctx->coefficient = 7.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} fFw8pB6g_ctx_t;

void init_ctx(fFw8pB6g_ctx_t *ctx) {
    ctx->id = 2121;
    ctx->coefficient = 3.0;
    ctx->flags = 131;
}

int compute_0FYtBJT(int input) {
    int result = input * 56;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_wiLr3Vj(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 8SyqmKy0_ctx_t;

void init_ctx(8SyqmKy0_ctx_t *ctx) {
    ctx->id = 8301;
    ctx->coefficient = 1.2;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} QgjfvyFU_ctx_t;

void init_ctx(QgjfvyFU_ctx_t *ctx) {
    ctx->id = 4545;
    ctx->coefficient = 3.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 5kayV6Yh_ctx_t;

void init_ctx(5kayV6Yh_ctx_t *ctx) {
    ctx->id = 3850;
    ctx->coefficient = 4.0;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 3MgsggbZ_ctx_t;

void init_ctx(3MgsggbZ_ctx_t *ctx) {
    ctx->id = 8646;
    ctx->coefficient = 0.5;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} dQjOL3q8_ctx_t;

void init_ctx(dQjOL3q8_ctx_t *ctx) {
    ctx->id = 7419;
    ctx->coefficient = 8.7;
    ctx->flags = 97;
}

int compute_U7C56Oz(int input) {
    int result = input * 37;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} xLmizxhi_ctx_t;

void init_ctx(xLmizxhi_ctx_t *ctx) {
    ctx->id = 9926;
    ctx->coefficient = 1.4;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} c1t15zA0_ctx_t;

void init_ctx(c1t15zA0_ctx_t *ctx) {
    ctx->id = 4682;
    ctx->coefficient = 6.5;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} ooAw9rCS_ctx_t;

void init_ctx(ooAw9rCS_ctx_t *ctx) {
    ctx->id = 8266;
    ctx->coefficient = 9.2;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} rYLaAEJH_ctx_t;

void init_ctx(rYLaAEJH_ctx_t *ctx) {
    ctx->id = 1591;
    ctx->coefficient = 8.1;
    ctx->flags = 237;
}

int compute_9xIQsDv(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 2DuHEpHH_ctx_t;

void init_ctx(2DuHEpHH_ctx_t *ctx) {
    ctx->id = 4342;
    ctx->coefficient = 2.7;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} uuBBuj4J_ctx_t;

void init_ctx(uuBBuj4J_ctx_t *ctx) {
    ctx->id = 4237;
    ctx->coefficient = 6.7;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} RLoCsh5r_ctx_t;

void init_ctx(RLoCsh5r_ctx_t *ctx) {
    ctx->id = 4612;
    ctx->coefficient = 6.9;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 9IW0p9Nw_ctx_t;

void init_ctx(9IW0p9Nw_ctx_t *ctx) {
    ctx->id = 4867;
    ctx->coefficient = 3.9;
    ctx->flags = 39;
}

int compute_cZRheLe(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 6cXOEYYt_ctx_t;

void init_ctx(6cXOEYYt_ctx_t *ctx) {
    ctx->id = 1945;
    ctx->coefficient = 9.9;
    ctx->flags = 92;
}

int compute_TbLmQjd(int input) {
    int result = input * 3;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 74T2aF1i_ctx_t;

void init_ctx(74T2aF1i_ctx_t *ctx) {
    ctx->id = 8345;
    ctx->coefficient = 5.1;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} rudPoeW8_ctx_t;

void init_ctx(rudPoeW8_ctx_t *ctx) {
    ctx->id = 8822;
    ctx->coefficient = 2.2;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} IrHkS7lF_ctx_t;

void init_ctx(IrHkS7lF_ctx_t *ctx) {
    ctx->id = 3406;
    ctx->coefficient = 0.4;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} UBGPG6HR_ctx_t;

void init_ctx(UBGPG6HR_ctx_t *ctx) {
    ctx->id = 2371;
    ctx->coefficient = 1.9;
    ctx->flags = 255;
}

int compute_0RYrk1A(int input) {
    int result = input * 48;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} YHmb4MRc_ctx_t;

void init_ctx(YHmb4MRc_ctx_t *ctx) {
    ctx->id = 5938;
    ctx->coefficient = 3.1;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} qDyOE5iO_ctx_t;

void init_ctx(qDyOE5iO_ctx_t *ctx) {
    ctx->id = 1046;
    ctx->coefficient = 7.5;
    ctx->flags = 161;
}

int compute_ev5xybC(int input) {
    int result = input * 13;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} hFBdTRSL_ctx_t;

void init_ctx(hFBdTRSL_ctx_t *ctx) {
    ctx->id = 7697;
    ctx->coefficient = 7.4;
    ctx->flags = 7;
}

int compute_y2z3jLW(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} JzwmNQy3_ctx_t;

void init_ctx(JzwmNQy3_ctx_t *ctx) {
    ctx->id = 8812;
    ctx->coefficient = 4.4;
    ctx->flags = 37;
}

int compute_nCIqHPV(int input) {
    int result = input * 16;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} CnzCrIMg_ctx_t;

void init_ctx(CnzCrIMg_ctx_t *ctx) {
    ctx->id = 8367;
    ctx->coefficient = 5.4;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} LmBzzxEL_ctx_t;

void init_ctx(LmBzzxEL_ctx_t *ctx) {
    ctx->id = 6819;
    ctx->coefficient = 9.1;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} dul7RSrA_ctx_t;

void init_ctx(dul7RSrA_ctx_t *ctx) {
    ctx->id = 4357;
    ctx->coefficient = 0.4;
    ctx->flags = 186;
}

int compute_yRAsK4K(int input) {
    int result = input * 19;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_QZsZUpZ(int input) {
    int result = input * 62;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 6XRXNSEW_ctx_t;

void init_ctx(6XRXNSEW_ctx_t *ctx) {
    ctx->id = 1229;
    ctx->coefficient = 1.0;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} LE24AzI7_ctx_t;

void init_ctx(LE24AzI7_ctx_t *ctx) {
    ctx->id = 6380;
    ctx->coefficient = 9.3;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} FXMu7Ajw_ctx_t;

void init_ctx(FXMu7Ajw_ctx_t *ctx) {
    ctx->id = 6548;
    ctx->coefficient = 6.0;
    ctx->flags = 42;
}

int compute_51esgEX(int input) {
    int result = input * 65;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_BSkyEyQ(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_QziwHKc(int input) {
    int result = input * 36;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} aBFOGTxn_ctx_t;

void init_ctx(aBFOGTxn_ctx_t *ctx) {
    ctx->id = 4338;
    ctx->coefficient = 9.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} YBSu2rYR_ctx_t;

void init_ctx(YBSu2rYR_ctx_t *ctx) {
    ctx->id = 3009;
    ctx->coefficient = 9.4;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} N1O9hlW4_ctx_t;

void init_ctx(N1O9hlW4_ctx_t *ctx) {
    ctx->id = 4857;
    ctx->coefficient = 2.8;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} e5jvVxqt_ctx_t;

void init_ctx(e5jvVxqt_ctx_t *ctx) {
    ctx->id = 4867;
    ctx->coefficient = 1.3;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} lkKnCBuh_ctx_t;

void init_ctx(lkKnCBuh_ctx_t *ctx) {
    ctx->id = 4762;
    ctx->coefficient = 10.0;
    ctx->flags = 78;
}

int compute_6WCDBpp(int input) {
    int result = input * 29;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 0tkyEogw_ctx_t;

void init_ctx(0tkyEogw_ctx_t *ctx) {
    ctx->id = 7607;
    ctx->coefficient = 2.5;
    ctx->flags = 224;
}

int compute_Dvyzcyb(int input) {
    int result = input * 37;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} GRFPl1A9_ctx_t;

void init_ctx(GRFPl1A9_ctx_t *ctx) {
    ctx->id = 9093;
    ctx->coefficient = 7.4;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} V6fdXDcy_ctx_t;

void init_ctx(V6fdXDcy_ctx_t *ctx) {
    ctx->id = 8019;
    ctx->coefficient = 0.1;
    ctx->flags = 108;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} y5KXarso_ctx_t;

void init_ctx(y5KXarso_ctx_t *ctx) {
    ctx->id = 1943;
    ctx->coefficient = 3.9;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} 5RjbaZC2_ctx_t;

void init_ctx(5RjbaZC2_ctx_t *ctx) {
    ctx->id = 5327;
    ctx->coefficient = 1.2;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} uhisNf66_ctx_t;

void init_ctx(uhisNf66_ctx_t *ctx) {
    ctx->id = 9270;
    ctx->coefficient = 1.1;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} d9fJZONa_ctx_t;

void init_ctx(d9fJZONa_ctx_t *ctx) {
    ctx->id = 8629;
    ctx->coefficient = 0.1;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Wa63nZEg_ctx_t;

void init_ctx(Wa63nZEg_ctx_t *ctx) {
    ctx->id = 1843;
    ctx->coefficient = 2.1;
    ctx->flags = 11;
}

int compute_IaIcSW9(int input) {
    int result = input * 68;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} WFjJ6Rrq_ctx_t;

void init_ctx(WFjJ6Rrq_ctx_t *ctx) {
    ctx->id = 8465;
    ctx->coefficient = 7.6;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} JdGQjLSf_ctx_t;

void init_ctx(JdGQjLSf_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 7.4;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} T3JWA0Uv_ctx_t;

void init_ctx(T3JWA0Uv_ctx_t *ctx) {
    ctx->id = 4458;
    ctx->coefficient = 9.3;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} k3DinjKl_ctx_t;

void init_ctx(k3DinjKl_ctx_t *ctx) {
    ctx->id = 1703;
    ctx->coefficient = 6.5;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 7YFKsdi7_ctx_t;

void init_ctx(7YFKsdi7_ctx_t *ctx) {
    ctx->id = 8176;
    ctx->coefficient = 5.9;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} PQJ6FCBG_ctx_t;

void init_ctx(PQJ6FCBG_ctx_t *ctx) {
    ctx->id = 6302;
    ctx->coefficient = 4.0;
    ctx->flags = 6;
}

int compute_OO5TfRU(int input) {
    int result = input * 22;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} SYieFdEc_ctx_t;

void init_ctx(SYieFdEc_ctx_t *ctx) {
    ctx->id = 8974;
    ctx->coefficient = 8.9;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} iltMQ3Ob_ctx_t;

void init_ctx(iltMQ3Ob_ctx_t *ctx) {
    ctx->id = 1875;
    ctx->coefficient = 3.4;
    ctx->flags = 222;
}

int compute_nx5YJaJ(int input) {
    int result = input * 39;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} jsUqhxxX_ctx_t;

void init_ctx(jsUqhxxX_ctx_t *ctx) {
    ctx->id = 8017;
    ctx->coefficient = 1.8;
    ctx->flags = 67;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} LyFnUyUs_ctx_t;

void init_ctx(LyFnUyUs_ctx_t *ctx) {
    ctx->id = 5884;
    ctx->coefficient = 2.4;
    ctx->flags = 229;
}

int compute_NiVjLAk(int input) {
    int result = input * 48;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} hxUZuqvh_ctx_t;

void init_ctx(hxUZuqvh_ctx_t *ctx) {
    ctx->id = 1793;
    ctx->coefficient = 5.8;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} R1A6dg2O_ctx_t;

void init_ctx(R1A6dg2O_ctx_t *ctx) {
    ctx->id = 1512;
    ctx->coefficient = 6.5;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} KIy2iMzT_ctx_t;

void init_ctx(KIy2iMzT_ctx_t *ctx) {
    ctx->id = 8896;
    ctx->coefficient = 9.1;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} ruEbgRNi_ctx_t;

void init_ctx(ruEbgRNi_ctx_t *ctx) {
    ctx->id = 2102;
    ctx->coefficient = 6.9;
    ctx->flags = 28;
}

int compute_GKGmEhK(int input) {
    int result = input * 54;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_sta14H0(int input) {
    int result = input * 29;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} A1DGcz01_ctx_t;

void init_ctx(A1DGcz01_ctx_t *ctx) {
    ctx->id = 8440;
    ctx->coefficient = 6.8;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 8kAkImkp_ctx_t;

void init_ctx(8kAkImkp_ctx_t *ctx) {
    ctx->id = 3596;
    ctx->coefficient = 7.5;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} frGdoF7Q_ctx_t;

void init_ctx(frGdoF7Q_ctx_t *ctx) {
    ctx->id = 2294;
    ctx->coefficient = 4.0;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} WKuBZTAv_ctx_t;

void init_ctx(WKuBZTAv_ctx_t *ctx) {
    ctx->id = 4544;
    ctx->coefficient = 7.8;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} BBZ7KQrt_ctx_t;

void init_ctx(BBZ7KQrt_ctx_t *ctx) {
    ctx->id = 1423;
    ctx->coefficient = 4.1;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} 9sB4fRIC_ctx_t;

void init_ctx(9sB4fRIC_ctx_t *ctx) {
    ctx->id = 2283;
    ctx->coefficient = 7.8;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} o8tP6GYC_ctx_t;

void init_ctx(o8tP6GYC_ctx_t *ctx) {
    ctx->id = 4967;
    ctx->coefficient = 9.3;
    ctx->flags = 251;
}

int compute_GjHG8Wh(int input) {
    int result = input * 62;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} B3hwsWdQ_ctx_t;

void init_ctx(B3hwsWdQ_ctx_t *ctx) {
    ctx->id = 3541;
    ctx->coefficient = 4.0;
    ctx->flags = 116;
}

int compute_giXGNyH(int input) {
    int result = input * 55;
    for(int i = 0; i < 5; i++) result += (i * 5);
    return result;
}

int compute_5TL4ajC(int input) {
    int result = input * 25;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} YPyUN82m_ctx_t;

void init_ctx(YPyUN82m_ctx_t *ctx) {
    ctx->id = 7350;
    ctx->coefficient = 2.8;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} Grt6SJ0p_ctx_t;

void init_ctx(Grt6SJ0p_ctx_t *ctx) {
    ctx->id = 1549;
    ctx->coefficient = 3.8;
    ctx->flags = 158;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} K3I66A1m_ctx_t;

void init_ctx(K3I66A1m_ctx_t *ctx) {
    ctx->id = 1378;
    ctx->coefficient = 1.8;
    ctx->flags = 99;
}

int compute_PMvlcca(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} teDGYYv1_ctx_t;

void init_ctx(teDGYYv1_ctx_t *ctx) {
    ctx->id = 6593;
    ctx->coefficient = 6.0;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} yoSGcXRv_ctx_t;

void init_ctx(yoSGcXRv_ctx_t *ctx) {
    ctx->id = 5437;
    ctx->coefficient = 3.2;
    ctx->flags = 251;
}

int compute_uAV70ki(int input) {
    int result = input * 16;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

int compute_Fpr0k7P(int input) {
    int result = input * 44;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} jT9G02Ah_ctx_t;

void init_ctx(jT9G02Ah_ctx_t *ctx) {
    ctx->id = 5517;
    ctx->coefficient = 4.4;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 6OOD9bR5_ctx_t;

void init_ctx(6OOD9bR5_ctx_t *ctx) {
    ctx->id = 1698;
    ctx->coefficient = 5.9;
    ctx->flags = 169;
}

int compute_QZBodOg(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_WBSoqHv(int input) {
    int result = input * 33;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} FVuYIoj2_ctx_t;

void init_ctx(FVuYIoj2_ctx_t *ctx) {
    ctx->id = 6709;
    ctx->coefficient = 0.4;
    ctx->flags = 226;
}

int compute_T64NylH(int input) {
    int result = input * 54;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} YvsNobIQ_ctx_t;

void init_ctx(YvsNobIQ_ctx_t *ctx) {
    ctx->id = 6506;
    ctx->coefficient = 6.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} PCBocY2n_ctx_t;

void init_ctx(PCBocY2n_ctx_t *ctx) {
    ctx->id = 1167;
    ctx->coefficient = 2.3;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ZPIQN5xT_ctx_t;

void init_ctx(ZPIQN5xT_ctx_t *ctx) {
    ctx->id = 1598;
    ctx->coefficient = 9.8;
    ctx->flags = 39;
}

int compute_NUabdkq(int input) {
    int result = input * 27;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} AOAuqHxU_ctx_t;

void init_ctx(AOAuqHxU_ctx_t *ctx) {
    ctx->id = 1811;
    ctx->coefficient = 0.5;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} PDcwZyY1_ctx_t;

void init_ctx(PDcwZyY1_ctx_t *ctx) {
    ctx->id = 8424;
    ctx->coefficient = 0.9;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} uCXJYTQk_ctx_t;

void init_ctx(uCXJYTQk_ctx_t *ctx) {
    ctx->id = 8420;
    ctx->coefficient = 8.1;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} oAVL8tuj_ctx_t;

void init_ctx(oAVL8tuj_ctx_t *ctx) {
    ctx->id = 9524;
    ctx->coefficient = 4.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} k1VJydGX_ctx_t;

void init_ctx(k1VJydGX_ctx_t *ctx) {
    ctx->id = 7482;
    ctx->coefficient = 7.0;
    ctx->flags = 104;
}

int compute_pFYviyY(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} ew24YQYj_ctx_t;

void init_ctx(ew24YQYj_ctx_t *ctx) {
    ctx->id = 5407;
    ctx->coefficient = 6.2;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} rUoQXvnM_ctx_t;

void init_ctx(rUoQXvnM_ctx_t *ctx) {
    ctx->id = 2625;
    ctx->coefficient = 8.7;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} zQGmXbjF_ctx_t;

void init_ctx(zQGmXbjF_ctx_t *ctx) {
    ctx->id = 1238;
    ctx->coefficient = 9.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} RCkAhGQu_ctx_t;

void init_ctx(RCkAhGQu_ctx_t *ctx) {
    ctx->id = 1321;
    ctx->coefficient = 5.2;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} VVFZWAZU_ctx_t;

void init_ctx(VVFZWAZU_ctx_t *ctx) {
    ctx->id = 6110;
    ctx->coefficient = 6.8;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} JDWErb80_ctx_t;

void init_ctx(JDWErb80_ctx_t *ctx) {
    ctx->id = 7385;
    ctx->coefficient = 6.0;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} BQM60iLi_ctx_t;

void init_ctx(BQM60iLi_ctx_t *ctx) {
    ctx->id = 1173;
    ctx->coefficient = 0.6;
    ctx->flags = 83;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} MnhgzDhk_ctx_t;

void init_ctx(MnhgzDhk_ctx_t *ctx) {
    ctx->id = 1638;
    ctx->coefficient = 6.5;
    ctx->flags = 193;
}

int compute_G9hqLZN(int input) {
    int result = input * 8;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} eEiun9GD_ctx_t;

void init_ctx(eEiun9GD_ctx_t *ctx) {
    ctx->id = 2333;
    ctx->coefficient = 4.7;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} ECC5zUnA_ctx_t;

void init_ctx(ECC5zUnA_ctx_t *ctx) {
    ctx->id = 8033;
    ctx->coefficient = 0.8;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 3W3vpebM_ctx_t;

void init_ctx(3W3vpebM_ctx_t *ctx) {
    ctx->id = 3135;
    ctx->coefficient = 7.7;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} PFywHxt0_ctx_t;

void init_ctx(PFywHxt0_ctx_t *ctx) {
    ctx->id = 2489;
    ctx->coefficient = 2.9;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} vl67HkvQ_ctx_t;

void init_ctx(vl67HkvQ_ctx_t *ctx) {
    ctx->id = 4315;
    ctx->coefficient = 2.9;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} aLw1ldxD_ctx_t;

void init_ctx(aLw1ldxD_ctx_t *ctx) {
    ctx->id = 1255;
    ctx->coefficient = 2.2;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} ABETGNVg_ctx_t;

void init_ctx(ABETGNVg_ctx_t *ctx) {
    ctx->id = 2231;
    ctx->coefficient = 6.8;
    ctx->flags = 230;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 0M3UhKGC_ctx_t;

void init_ctx(0M3UhKGC_ctx_t *ctx) {
    ctx->id = 9343;
    ctx->coefficient = 0.9;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} xO2N0ZUt_ctx_t;

void init_ctx(xO2N0ZUt_ctx_t *ctx) {
    ctx->id = 6832;
    ctx->coefficient = 1.9;
    ctx->flags = 212;
}

int compute_00SkSoh(int input) {
    int result = input * 59;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} Py06cQCC_ctx_t;

void init_ctx(Py06cQCC_ctx_t *ctx) {
    ctx->id = 9851;
    ctx->coefficient = 6.5;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} wcjQl8Oz_ctx_t;

void init_ctx(wcjQl8Oz_ctx_t *ctx) {
    ctx->id = 2949;
    ctx->coefficient = 8.1;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} CWrDp9PN_ctx_t;

void init_ctx(CWrDp9PN_ctx_t *ctx) {
    ctx->id = 1061;
    ctx->coefficient = 3.3;
    ctx->flags = 213;
}

int compute_iTIUoLq(int input) {
    int result = input * 8;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_N8BUtez(int input) {
    int result = input * 10;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Q95ihy4M_ctx_t;

void init_ctx(Q95ihy4M_ctx_t *ctx) {
    ctx->id = 6963;
    ctx->coefficient = 3.8;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} EdAxV7sG_ctx_t;

void init_ctx(EdAxV7sG_ctx_t *ctx) {
    ctx->id = 7271;
    ctx->coefficient = 3.6;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} M05Ui12a_ctx_t;

void init_ctx(M05Ui12a_ctx_t *ctx) {
    ctx->id = 7597;
    ctx->coefficient = 10.0;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} bUMrUKHP_ctx_t;

void init_ctx(bUMrUKHP_ctx_t *ctx) {
    ctx->id = 9479;
    ctx->coefficient = 6.0;
    ctx->flags = 184;
}

int compute_bRdVwCb(int input) {
    int result = input * 24;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 9kTFdEPx_ctx_t;

void init_ctx(9kTFdEPx_ctx_t *ctx) {
    ctx->id = 9507;
    ctx->coefficient = 3.6;
    ctx->flags = 12;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} z3eKVUgz_ctx_t;

void init_ctx(z3eKVUgz_ctx_t *ctx) {
    ctx->id = 3883;
    ctx->coefficient = 2.2;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} pcG9Qnwj_ctx_t;

void init_ctx(pcG9Qnwj_ctx_t *ctx) {
    ctx->id = 7209;
    ctx->coefficient = 5.3;
    ctx->flags = 211;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} jBYBVn4I_ctx_t;

void init_ctx(jBYBVn4I_ctx_t *ctx) {
    ctx->id = 3610;
    ctx->coefficient = 1.2;
    ctx->flags = 252;
}

int compute_wIt5Lcb(int input) {
    int result = input * 68;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 7scLLP3c_ctx_t;

void init_ctx(7scLLP3c_ctx_t *ctx) {
    ctx->id = 6309;
    ctx->coefficient = 7.3;
    ctx->flags = 231;
}

int compute_qTvRq3U(int input) {
    int result = input * 63;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_q4ppN5m(int input) {
    int result = input * 53;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_PH69Qu8(int input) {
    int result = input * 55;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} ok0xcioL_ctx_t;

void init_ctx(ok0xcioL_ctx_t *ctx) {
    ctx->id = 8574;
    ctx->coefficient = 8.6;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} WyQqCO8x_ctx_t;

void init_ctx(WyQqCO8x_ctx_t *ctx) {
    ctx->id = 4713;
    ctx->coefficient = 2.3;
    ctx->flags = 123;
}

int compute_DjS8ydq(int input) {
    int result = input * 38;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_tgDppIi(int input) {
    int result = input * 64;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_xGTyNiL(int input) {
    int result = input * 21;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} vEZMAhj9_ctx_t;

void init_ctx(vEZMAhj9_ctx_t *ctx) {
    ctx->id = 9999;
    ctx->coefficient = 9.2;
    ctx->flags = 170;
}

int compute_8eCwdaw(int input) {
    int result = input * 47;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 51XYtTyg_ctx_t;

void init_ctx(51XYtTyg_ctx_t *ctx) {
    ctx->id = 6683;
    ctx->coefficient = 4.3;
    ctx->flags = 191;
}

int compute_N4N4MGr(int input) {
    int result = input * 35;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} Zv1XCYvW_ctx_t;

void init_ctx(Zv1XCYvW_ctx_t *ctx) {
    ctx->id = 6168;
    ctx->coefficient = 6.9;
    ctx->flags = 222;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} noCN25mE_ctx_t;

void init_ctx(noCN25mE_ctx_t *ctx) {
    ctx->id = 7022;
    ctx->coefficient = 8.9;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} l8eCgE6t_ctx_t;

void init_ctx(l8eCgE6t_ctx_t *ctx) {
    ctx->id = 9322;
    ctx->coefficient = 5.5;
    ctx->flags = 61;
}

int compute_GNub5pQ(int input) {
    int result = input * 8;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} WlPRKGgH_ctx_t;

void init_ctx(WlPRKGgH_ctx_t *ctx) {
    ctx->id = 4437;
    ctx->coefficient = 3.7;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} MOPwnu6e_ctx_t;

void init_ctx(MOPwnu6e_ctx_t *ctx) {
    ctx->id = 5263;
    ctx->coefficient = 3.6;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} TTak3VHi_ctx_t;

void init_ctx(TTak3VHi_ctx_t *ctx) {
    ctx->id = 8516;
    ctx->coefficient = 1.9;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} mATEUEzx_ctx_t;

void init_ctx(mATEUEzx_ctx_t *ctx) {
    ctx->id = 1638;
    ctx->coefficient = 3.7;
    ctx->flags = 174;
}

int compute_vItL2ni(int input) {
    int result = input * 62;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} Gch0IieH_ctx_t;

void init_ctx(Gch0IieH_ctx_t *ctx) {
    ctx->id = 6220;
    ctx->coefficient = 5.3;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} NeoPcZUQ_ctx_t;

void init_ctx(NeoPcZUQ_ctx_t *ctx) {
    ctx->id = 9984;
    ctx->coefficient = 5.6;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} hHaGJres_ctx_t;

void init_ctx(hHaGJres_ctx_t *ctx) {
    ctx->id = 8484;
    ctx->coefficient = 6.6;
    ctx->flags = 168;
}

int compute_YurFD2Q(int input) {
    int result = input * 29;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

int compute_Q4W4RoN(int input) {
    int result = input * 48;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 2ftNgqO1_ctx_t;

void init_ctx(2ftNgqO1_ctx_t *ctx) {
    ctx->id = 6093;
    ctx->coefficient = 2.3;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} aohwzKkW_ctx_t;

void init_ctx(aohwzKkW_ctx_t *ctx) {
    ctx->id = 4890;
    ctx->coefficient = 9.9;
    ctx->flags = 93;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 2v1nKFF8_ctx_t;

void init_ctx(2v1nKFF8_ctx_t *ctx) {
    ctx->id = 3790;
    ctx->coefficient = 7.4;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Smp374GL_ctx_t;

void init_ctx(Smp374GL_ctx_t *ctx) {
    ctx->id = 9798;
    ctx->coefficient = 6.4;
    ctx->flags = 0;
}

int compute_wxclHX1(int input) {
    int result = input * 40;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} YtdSPnCT_ctx_t;

void init_ctx(YtdSPnCT_ctx_t *ctx) {
    ctx->id = 3299;
    ctx->coefficient = 5.7;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 9d2BLQyw_ctx_t;

void init_ctx(9d2BLQyw_ctx_t *ctx) {
    ctx->id = 8955;
    ctx->coefficient = 7.6;
    ctx->flags = 52;
}

int compute_57KWnFv(int input) {
    int result = input * 32;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_4juucts(int input) {
    int result = input * 46;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} vzRblupx_ctx_t;

void init_ctx(vzRblupx_ctx_t *ctx) {
    ctx->id = 2327;
    ctx->coefficient = 3.5;
    ctx->flags = 204;
}

int compute_7XjnJzb(int input) {
    int result = input * 67;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} nTVrhRuy_ctx_t;

void init_ctx(nTVrhRuy_ctx_t *ctx) {
    ctx->id = 5416;
    ctx->coefficient = 4.6;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} f21B7skj_ctx_t;

void init_ctx(f21B7skj_ctx_t *ctx) {
    ctx->id = 2544;
    ctx->coefficient = 7.0;
    ctx->flags = 251;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 6kxiBNUf_ctx_t;

void init_ctx(6kxiBNUf_ctx_t *ctx) {
    ctx->id = 5342;
    ctx->coefficient = 6.0;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} ca2CIPCy_ctx_t;

void init_ctx(ca2CIPCy_ctx_t *ctx) {
    ctx->id = 1208;
    ctx->coefficient = 7.1;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} icP5otnK_ctx_t;

void init_ctx(icP5otnK_ctx_t *ctx) {
    ctx->id = 6943;
    ctx->coefficient = 6.1;
    ctx->flags = 127;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} oTFH0kYA_ctx_t;

void init_ctx(oTFH0kYA_ctx_t *ctx) {
    ctx->id = 4898;
    ctx->coefficient = 2.9;
    ctx->flags = 96;
}

int compute_9YCBiZb(int input) {
    int result = input * 11;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_K3RUho7(int input) {
    int result = input * 53;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

int compute_jIfhAzZ(int input) {
    int result = input * 24;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ydzBR6hs_ctx_t;

void init_ctx(ydzBR6hs_ctx_t *ctx) {
    ctx->id = 5251;
    ctx->coefficient = 2.0;
    ctx->flags = 14;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} epWgnfGP_ctx_t;

void init_ctx(epWgnfGP_ctx_t *ctx) {
    ctx->id = 9598;
    ctx->coefficient = 8.1;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 5G6ssjws_ctx_t;

void init_ctx(5G6ssjws_ctx_t *ctx) {
    ctx->id = 3792;
    ctx->coefficient = 8.4;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} NNQAll1t_ctx_t;

void init_ctx(NNQAll1t_ctx_t *ctx) {
    ctx->id = 8031;
    ctx->coefficient = 2.4;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} FdopL4fb_ctx_t;

void init_ctx(FdopL4fb_ctx_t *ctx) {
    ctx->id = 3967;
    ctx->coefficient = 0.2;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} kXuGEfi6_ctx_t;

void init_ctx(kXuGEfi6_ctx_t *ctx) {
    ctx->id = 5449;
    ctx->coefficient = 9.0;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} N6NBNf1L_ctx_t;

void init_ctx(N6NBNf1L_ctx_t *ctx) {
    ctx->id = 8318;
    ctx->coefficient = 5.0;
    ctx->flags = 167;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} oNhYf2BY_ctx_t;

void init_ctx(oNhYf2BY_ctx_t *ctx) {
    ctx->id = 5111;
    ctx->coefficient = 5.1;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 00z0nlCI_ctx_t;

void init_ctx(00z0nlCI_ctx_t *ctx) {
    ctx->id = 5828;
    ctx->coefficient = 4.5;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} RB50TxVE_ctx_t;

void init_ctx(RB50TxVE_ctx_t *ctx) {
    ctx->id = 8127;
    ctx->coefficient = 1.3;
    ctx->flags = 72;
}

int compute_VUo3nHr(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_C7qttID(int input) {
    int result = input * 43;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} wxj0k6gj_ctx_t;

void init_ctx(wxj0k6gj_ctx_t *ctx) {
    ctx->id = 5687;
    ctx->coefficient = 7.5;
    ctx->flags = 138;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} pa68U8gm_ctx_t;

void init_ctx(pa68U8gm_ctx_t *ctx) {
    ctx->id = 9743;
    ctx->coefficient = 4.5;
    ctx->flags = 161;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} AHneOldI_ctx_t;

void init_ctx(AHneOldI_ctx_t *ctx) {
    ctx->id = 9497;
    ctx->coefficient = 5.1;
    ctx->flags = 235;
}

int compute_bdOYfcB(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} SgrxPH3u_ctx_t;

void init_ctx(SgrxPH3u_ctx_t *ctx) {
    ctx->id = 4319;
    ctx->coefficient = 5.9;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} uvOaK5zL_ctx_t;

void init_ctx(uvOaK5zL_ctx_t *ctx) {
    ctx->id = 7424;
    ctx->coefficient = 0.6;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} S367N9CU_ctx_t;

void init_ctx(S367N9CU_ctx_t *ctx) {
    ctx->id = 3414;
    ctx->coefficient = 7.0;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} FJdAbFBU_ctx_t;

void init_ctx(FJdAbFBU_ctx_t *ctx) {
    ctx->id = 7130;
    ctx->coefficient = 5.1;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} H3CRmwmE_ctx_t;

void init_ctx(H3CRmwmE_ctx_t *ctx) {
    ctx->id = 7002;
    ctx->coefficient = 1.6;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 64Mk32rd_ctx_t;

void init_ctx(64Mk32rd_ctx_t *ctx) {
    ctx->id = 5570;
    ctx->coefficient = 2.1;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} x466NVzU_ctx_t;

void init_ctx(x466NVzU_ctx_t *ctx) {
    ctx->id = 3405;
    ctx->coefficient = 8.7;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} wPjK1N1e_ctx_t;

void init_ctx(wPjK1N1e_ctx_t *ctx) {
    ctx->id = 1148;
    ctx->coefficient = 5.5;
    ctx->flags = 123;
}

int compute_4Q6foYc(int input) {
    int result = input * 28;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} o2n1u2xZ_ctx_t;

void init_ctx(o2n1u2xZ_ctx_t *ctx) {
    ctx->id = 7244;
    ctx->coefficient = 2.3;
    ctx->flags = 115;
}

int compute_q54i4kF(int input) {
    int result = input * 27;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_5ExL6Eb(int input) {
    int result = input * 50;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7Y9wmRpk_ctx_t;

void init_ctx(7Y9wmRpk_ctx_t *ctx) {
    ctx->id = 7494;
    ctx->coefficient = 5.5;
    ctx->flags = 69;
}

int compute_6ftVMeP(int input) {
    int result = input * 56;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_7DdsplE(int input) {
    int result = input * 15;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_H2fMeEw(int input) {
    int result = input * 15;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 8nFzC3Q2_ctx_t;

void init_ctx(8nFzC3Q2_ctx_t *ctx) {
    ctx->id = 7520;
    ctx->coefficient = 3.6;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} oR0QUP8H_ctx_t;

void init_ctx(oR0QUP8H_ctx_t *ctx) {
    ctx->id = 1149;
    ctx->coefficient = 9.8;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} QEZKAQdi_ctx_t;

void init_ctx(QEZKAQdi_ctx_t *ctx) {
    ctx->id = 3423;
    ctx->coefficient = 3.5;
    ctx->flags = 162;
}

int compute_6ERsL4Y(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_Ug3SSaC(int input) {
    int result = input * 10;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} imfIiuE1_ctx_t;

void init_ctx(imfIiuE1_ctx_t *ctx) {
    ctx->id = 5148;
    ctx->coefficient = 2.0;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} 7HKt0HFM_ctx_t;

void init_ctx(7HKt0HFM_ctx_t *ctx) {
    ctx->id = 5682;
    ctx->coefficient = 3.2;
    ctx->flags = 204;
}

int compute_oog62e4(int input) {
    int result = input * 34;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 5O1POZFp_ctx_t;

void init_ctx(5O1POZFp_ctx_t *ctx) {
    ctx->id = 8635;
    ctx->coefficient = 7.4;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} NzTEJ2Op_ctx_t;

void init_ctx(NzTEJ2Op_ctx_t *ctx) {
    ctx->id = 6539;
    ctx->coefficient = 2.3;
    ctx->flags = 147;
}

int compute_xqAF4iL(int input) {
    int result = input * 62;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Dr60gwV9_ctx_t;

void init_ctx(Dr60gwV9_ctx_t *ctx) {
    ctx->id = 9448;
    ctx->coefficient = 4.4;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} VlziZlBJ_ctx_t;

void init_ctx(VlziZlBJ_ctx_t *ctx) {
    ctx->id = 1592;
    ctx->coefficient = 7.0;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} enVN3EY3_ctx_t;

void init_ctx(enVN3EY3_ctx_t *ctx) {
    ctx->id = 9272;
    ctx->coefficient = 1.5;
    ctx->flags = 36;
}

int compute_fI2o2XI(int input) {
    int result = input * 49;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} jMpoF3cK_ctx_t;

void init_ctx(jMpoF3cK_ctx_t *ctx) {
    ctx->id = 4292;
    ctx->coefficient = 4.0;
    ctx->flags = 1;
}

int compute_nKC0xjP(int input) {
    int result = input * 42;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} uBuKIsIQ_ctx_t;

void init_ctx(uBuKIsIQ_ctx_t *ctx) {
    ctx->id = 2921;
    ctx->coefficient = 6.8;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} kSbqwCo5_ctx_t;

void init_ctx(kSbqwCo5_ctx_t *ctx) {
    ctx->id = 6351;
    ctx->coefficient = 6.1;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} f4crxBQW_ctx_t;

void init_ctx(f4crxBQW_ctx_t *ctx) {
    ctx->id = 2146;
    ctx->coefficient = 5.1;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} GaREheLS_ctx_t;

void init_ctx(GaREheLS_ctx_t *ctx) {
    ctx->id = 4934;
    ctx->coefficient = 10.0;
    ctx->flags = 101;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7zOGeOtX_ctx_t;

void init_ctx(7zOGeOtX_ctx_t *ctx) {
    ctx->id = 6800;
    ctx->coefficient = 7.7;
    ctx->flags = 41;
}

int compute_biFoWdN(int input) {
    int result = input * 68;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

int compute_CIvB8xC(int input) {
    int result = input * 21;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} qhG5ZKnR_ctx_t;

void init_ctx(qhG5ZKnR_ctx_t *ctx) {
    ctx->id = 7703;
    ctx->coefficient = 7.4;
    ctx->flags = 44;
}

int compute_UqTsP6D(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} jWzP6Rok_ctx_t;

void init_ctx(jWzP6Rok_ctx_t *ctx) {
    ctx->id = 9027;
    ctx->coefficient = 8.0;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} x6OKmH6U_ctx_t;

void init_ctx(x6OKmH6U_ctx_t *ctx) {
    ctx->id = 3699;
    ctx->coefficient = 8.0;
    ctx->flags = 243;
}

int compute_i5zfuLt(int input) {
    int result = input * 26;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} Em2RczPB_ctx_t;

void init_ctx(Em2RczPB_ctx_t *ctx) {
    ctx->id = 7799;
    ctx->coefficient = 10.0;
    ctx->flags = 126;
}

int compute_0hxc78c(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} qTj5gPYo_ctx_t;

void init_ctx(qTj5gPYo_ctx_t *ctx) {
    ctx->id = 6254;
    ctx->coefficient = 3.7;
    ctx->flags = 88;
}

int compute_R2GPmvN(int input) {
    int result = input * 37;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_ZQFz4S8(int input) {
    int result = input * 67;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_L7UAwxZ(int input) {
    int result = input * 26;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} w82cNhLw_ctx_t;

void init_ctx(w82cNhLw_ctx_t *ctx) {
    ctx->id = 7916;
    ctx->coefficient = 2.4;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 4IsBsSPi_ctx_t;

void init_ctx(4IsBsSPi_ctx_t *ctx) {
    ctx->id = 6338;
    ctx->coefficient = 3.9;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} vbN3I0Yl_ctx_t;

void init_ctx(vbN3I0Yl_ctx_t *ctx) {
    ctx->id = 2286;
    ctx->coefficient = 1.4;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} oL5uCHLI_ctx_t;

void init_ctx(oL5uCHLI_ctx_t *ctx) {
    ctx->id = 5094;
    ctx->coefficient = 3.9;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} oZhepUvm_ctx_t;

void init_ctx(oZhepUvm_ctx_t *ctx) {
    ctx->id = 6119;
    ctx->coefficient = 4.2;
    ctx->flags = 24;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} VKhzvSwc_ctx_t;

void init_ctx(VKhzvSwc_ctx_t *ctx) {
    ctx->id = 1425;
    ctx->coefficient = 1.9;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ULGAjfIR_ctx_t;

void init_ctx(ULGAjfIR_ctx_t *ctx) {
    ctx->id = 8615;
    ctx->coefficient = 1.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} KRsTNIb4_ctx_t;

void init_ctx(KRsTNIb4_ctx_t *ctx) {
    ctx->id = 1278;
    ctx->coefficient = 9.9;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} AoitjoUi_ctx_t;

void init_ctx(AoitjoUi_ctx_t *ctx) {
    ctx->id = 3852;
    ctx->coefficient = 0.8;
    ctx->flags = 202;
}

int compute_xFbzY2i(int input) {
    int result = input * 50;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 5CgIejUO_ctx_t;

void init_ctx(5CgIejUO_ctx_t *ctx) {
    ctx->id = 8233;
    ctx->coefficient = 2.9;
    ctx->flags = 168;
}

int compute_1O13oTP(int input) {
    int result = input * 55;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_BCZiZqZ(int input) {
    int result = input * 28;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} v9tVDA4d_ctx_t;

void init_ctx(v9tVDA4d_ctx_t *ctx) {
    ctx->id = 4844;
    ctx->coefficient = 5.7;
    ctx->flags = 17;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 3MZgRBwX_ctx_t;

void init_ctx(3MZgRBwX_ctx_t *ctx) {
    ctx->id = 1289;
    ctx->coefficient = 4.3;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} nwSOvtmn_ctx_t;

void init_ctx(nwSOvtmn_ctx_t *ctx) {
    ctx->id = 5128;
    ctx->coefficient = 7.7;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} HAHVEm0G_ctx_t;

void init_ctx(HAHVEm0G_ctx_t *ctx) {
    ctx->id = 2077;
    ctx->coefficient = 5.7;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} aHW24Vsw_ctx_t;

void init_ctx(aHW24Vsw_ctx_t *ctx) {
    ctx->id = 5174;
    ctx->coefficient = 8.2;
    ctx->flags = 223;
}

int compute_MQxU1HM(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} a3qAKX87_ctx_t;

void init_ctx(a3qAKX87_ctx_t *ctx) {
    ctx->id = 6491;
    ctx->coefficient = 9.6;
    ctx->flags = 157;
}

int compute_MeizlLq(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

int compute_bRpjmPn(int input) {
    int result = input * 19;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} bpnNHQeL_ctx_t;

void init_ctx(bpnNHQeL_ctx_t *ctx) {
    ctx->id = 4766;
    ctx->coefficient = 4.8;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} DI6ehzAY_ctx_t;

void init_ctx(DI6ehzAY_ctx_t *ctx) {
    ctx->id = 5344;
    ctx->coefficient = 5.2;
    ctx->flags = 130;
}

int compute_DAPGpYe(int input) {
    int result = input * 10;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} smOX4kgT_ctx_t;

void init_ctx(smOX4kgT_ctx_t *ctx) {
    ctx->id = 7870;
    ctx->coefficient = 0.8;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} v7q5fMjM_ctx_t;

void init_ctx(v7q5fMjM_ctx_t *ctx) {
    ctx->id = 8872;
    ctx->coefficient = 4.1;
    ctx->flags = 102;
}

int compute_M3iOWEk(int input) {
    int result = input * 6;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} SxDl8auH_ctx_t;

void init_ctx(SxDl8auH_ctx_t *ctx) {
    ctx->id = 2118;
    ctx->coefficient = 3.5;
    ctx->flags = 246;
}

int compute_4a3vPH0(int input) {
    int result = input * 23;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_CVGHyvT(int input) {
    int result = input * 7;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_2mxdMRU(int input) {
    int result = input * 4;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} rXrZzEQk_ctx_t;

void init_ctx(rXrZzEQk_ctx_t *ctx) {
    ctx->id = 6289;
    ctx->coefficient = 8.0;
    ctx->flags = 154;
}

int compute_flXM1vb(int input) {
    int result = input * 43;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_1xo9wZq(int input) {
    int result = input * 34;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 2W364qtH_ctx_t;

void init_ctx(2W364qtH_ctx_t *ctx) {
    ctx->id = 3223;
    ctx->coefficient = 7.2;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} HZ62t9TE_ctx_t;

void init_ctx(HZ62t9TE_ctx_t *ctx) {
    ctx->id = 9178;
    ctx->coefficient = 2.4;
    ctx->flags = 253;
}

int compute_g5huByq(int input) {
    int result = input * 46;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} GTRYx2W4_ctx_t;

void init_ctx(GTRYx2W4_ctx_t *ctx) {
    ctx->id = 5387;
    ctx->coefficient = 0.7;
    ctx->flags = 107;
}

int compute_zNhFPBR(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_6dCbX70(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_GlxtWxr(int input) {
    int result = input * 31;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_LJsrwLG(int input) {
    int result = input * 8;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} c0hH3WqF_ctx_t;

void init_ctx(c0hH3WqF_ctx_t *ctx) {
    ctx->id = 4734;
    ctx->coefficient = 5.1;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} dVHp7rIx_ctx_t;

void init_ctx(dVHp7rIx_ctx_t *ctx) {
    ctx->id = 6634;
    ctx->coefficient = 0.1;
    ctx->flags = 42;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} NYNAs2So_ctx_t;

void init_ctx(NYNAs2So_ctx_t *ctx) {
    ctx->id = 6209;
    ctx->coefficient = 7.6;
    ctx->flags = 135;
}

int compute_zAz4z4l(int input) {
    int result = input * 3;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} Zdnj0iYu_ctx_t;

void init_ctx(Zdnj0iYu_ctx_t *ctx) {
    ctx->id = 1089;
    ctx->coefficient = 4.5;
    ctx->flags = 12;
}

int compute_nbscKGX(int input) {
    int result = input * 61;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_dovCGGm(int input) {
    int result = input * 47;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

int compute_DEeiull(int input) {
    int result = input * 69;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} bVaQatGK_ctx_t;

void init_ctx(bVaQatGK_ctx_t *ctx) {
    ctx->id = 2573;
    ctx->coefficient = 4.2;
    ctx->flags = 80;
}

int compute_e7fXbtW(int input) {
    int result = input * 9;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} E4QA662f_ctx_t;

void init_ctx(E4QA662f_ctx_t *ctx) {
    ctx->id = 2589;
    ctx->coefficient = 2.2;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 5UKkoyRv_ctx_t;

void init_ctx(5UKkoyRv_ctx_t *ctx) {
    ctx->id = 9550;
    ctx->coefficient = 0.8;
    ctx->flags = 177;
}

int compute_17kCyqy(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_cYwH90W(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 7gojL8bM_ctx_t;

void init_ctx(7gojL8bM_ctx_t *ctx) {
    ctx->id = 9489;
    ctx->coefficient = 2.3;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} js6tR3an_ctx_t;

void init_ctx(js6tR3an_ctx_t *ctx) {
    ctx->id = 8977;
    ctx->coefficient = 9.6;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} CySti3Y3_ctx_t;

void init_ctx(CySti3Y3_ctx_t *ctx) {
    ctx->id = 8161;
    ctx->coefficient = 3.8;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} oEOFX2FP_ctx_t;

void init_ctx(oEOFX2FP_ctx_t *ctx) {
    ctx->id = 1025;
    ctx->coefficient = 5.1;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} Q0UEVBMQ_ctx_t;

void init_ctx(Q0UEVBMQ_ctx_t *ctx) {
    ctx->id = 2248;
    ctx->coefficient = 4.9;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} wrIOuuvq_ctx_t;

void init_ctx(wrIOuuvq_ctx_t *ctx) {
    ctx->id = 9802;
    ctx->coefficient = 7.3;
    ctx->flags = 107;
}

int compute_5laad3X(int input) {
    int result = input * 14;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} AefDwE05_ctx_t;

void init_ctx(AefDwE05_ctx_t *ctx) {
    ctx->id = 5772;
    ctx->coefficient = 8.0;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 3AzK7RiC_ctx_t;

void init_ctx(3AzK7RiC_ctx_t *ctx) {
    ctx->id = 1962;
    ctx->coefficient = 9.3;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} U8nUv4M6_ctx_t;

void init_ctx(U8nUv4M6_ctx_t *ctx) {
    ctx->id = 2320;
    ctx->coefficient = 2.1;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} YGri3GTu_ctx_t;

void init_ctx(YGri3GTu_ctx_t *ctx) {
    ctx->id = 8276;
    ctx->coefficient = 0.8;
    ctx->flags = 86;
}

int compute_NLEWwPG(int input) {
    int result = input * 42;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} mcfEl8mW_ctx_t;

void init_ctx(mcfEl8mW_ctx_t *ctx) {
    ctx->id = 6841;
    ctx->coefficient = 1.8;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} InxTBvzT_ctx_t;

void init_ctx(InxTBvzT_ctx_t *ctx) {
    ctx->id = 7831;
    ctx->coefficient = 9.0;
    ctx->flags = 173;
}

int compute_pjbijbY(int input) {
    int result = input * 26;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 1jBxtWRn_ctx_t;

void init_ctx(1jBxtWRn_ctx_t *ctx) {
    ctx->id = 6516;
    ctx->coefficient = 8.7;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 64wl5rvF_ctx_t;

void init_ctx(64wl5rvF_ctx_t *ctx) {
    ctx->id = 6430;
    ctx->coefficient = 0.6;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 9t4IJQiN_ctx_t;

void init_ctx(9t4IJQiN_ctx_t *ctx) {
    ctx->id = 3978;
    ctx->coefficient = 5.1;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} YQ64fPrR_ctx_t;

void init_ctx(YQ64fPrR_ctx_t *ctx) {
    ctx->id = 7926;
    ctx->coefficient = 7.8;
    ctx->flags = 93;
}

int compute_QyJymWF(int input) {
    int result = input * 63;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} Ncxq6Dff_ctx_t;

void init_ctx(Ncxq6Dff_ctx_t *ctx) {
    ctx->id = 4768;
    ctx->coefficient = 9.0;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 9I6JpjY6_ctx_t;

void init_ctx(9I6JpjY6_ctx_t *ctx) {
    ctx->id = 5306;
    ctx->coefficient = 7.1;
    ctx->flags = 96;
}

int compute_1VVZHt2(int input) {
    int result = input * 69;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} jD31Ccqd_ctx_t;

void init_ctx(jD31Ccqd_ctx_t *ctx) {
    ctx->id = 6474;
    ctx->coefficient = 2.8;
    ctx->flags = 251;
}

int compute_UOBIBq3(int input) {
    int result = input * 20;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} juVm53oW_ctx_t;

void init_ctx(juVm53oW_ctx_t *ctx) {
    ctx->id = 8155;
    ctx->coefficient = 5.5;
    ctx->flags = 248;
}

int compute_11PpQq9(int input) {
    int result = input * 36;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} uCXoZ6BK_ctx_t;

void init_ctx(uCXoZ6BK_ctx_t *ctx) {
    ctx->id = 2283;
    ctx->coefficient = 3.9;
    ctx->flags = 172;
}

int compute_gdNsMzK(int input) {
    int result = input * 23;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} iM2MZQ7p_ctx_t;

void init_ctx(iM2MZQ7p_ctx_t *ctx) {
    ctx->id = 1557;
    ctx->coefficient = 8.8;
    ctx->flags = 94;
}

int compute_V5PXlxp(int input) {
    int result = input * 58;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_w4L2TO2(int input) {
    int result = input * 12;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_mpXEmQr(int input) {
    int result = input * 15;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ZcLVYPXd_ctx_t;

void init_ctx(ZcLVYPXd_ctx_t *ctx) {
    ctx->id = 5454;
    ctx->coefficient = 7.9;
    ctx->flags = 192;
}

int compute_K0oQLyJ(int input) {
    int result = input * 27;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 501oD2wP_ctx_t;

void init_ctx(501oD2wP_ctx_t *ctx) {
    ctx->id = 2224;
    ctx->coefficient = 9.0;
    ctx->flags = 110;
}

int compute_9W4py6P(int input) {
    int result = input * 51;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 7qRfPE7q_ctx_t;

void init_ctx(7qRfPE7q_ctx_t *ctx) {
    ctx->id = 1027;
    ctx->coefficient = 1.5;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} PysRKv8O_ctx_t;

void init_ctx(PysRKv8O_ctx_t *ctx) {
    ctx->id = 8815;
    ctx->coefficient = 5.3;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 8PBeosBJ_ctx_t;

void init_ctx(8PBeosBJ_ctx_t *ctx) {
    ctx->id = 5607;
    ctx->coefficient = 4.7;
    ctx->flags = 121;
}

int compute_fvNX6ta(int input) {
    int result = input * 54;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_gnYs47B(int input) {
    int result = input * 5;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} zmp5FKJS_ctx_t;

void init_ctx(zmp5FKJS_ctx_t *ctx) {
    ctx->id = 9144;
    ctx->coefficient = 0.5;
    ctx->flags = 212;
}

int compute_SUr3c5i(int input) {
    int result = input * 58;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} GHKAmM4b_ctx_t;

void init_ctx(GHKAmM4b_ctx_t *ctx) {
    ctx->id = 1450;
    ctx->coefficient = 2.4;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ZKThN4VW_ctx_t;

void init_ctx(ZKThN4VW_ctx_t *ctx) {
    ctx->id = 1980;
    ctx->coefficient = 2.3;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} lJaSVQxT_ctx_t;

void init_ctx(lJaSVQxT_ctx_t *ctx) {
    ctx->id = 2093;
    ctx->coefficient = 2.1;
    ctx->flags = 183;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} My3E0I6p_ctx_t;

void init_ctx(My3E0I6p_ctx_t *ctx) {
    ctx->id = 3657;
    ctx->coefficient = 1.0;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} eq8saVYW_ctx_t;

void init_ctx(eq8saVYW_ctx_t *ctx) {
    ctx->id = 4855;
    ctx->coefficient = 8.4;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} LZYVBbGm_ctx_t;

void init_ctx(LZYVBbGm_ctx_t *ctx) {
    ctx->id = 1790;
    ctx->coefficient = 6.0;
    ctx->flags = 154;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 0jS0Ob3G_ctx_t;

void init_ctx(0jS0Ob3G_ctx_t *ctx) {
    ctx->id = 3404;
    ctx->coefficient = 8.1;
    ctx->flags = 106;
}

int compute_g3mM2XA(int input) {
    int result = input * 58;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} OklZAjj6_ctx_t;

void init_ctx(OklZAjj6_ctx_t *ctx) {
    ctx->id = 4112;
    ctx->coefficient = 8.6;
    ctx->flags = 12;
}

int compute_pubRzc3(int input) {
    int result = input * 22;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_rKMu8vA(int input) {
    int result = input * 41;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_JkjETK9(int input) {
    int result = input * 19;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_sx6Fji9(int input) {
    int result = input * 63;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} TLWEeE0Q_ctx_t;

void init_ctx(TLWEeE0Q_ctx_t *ctx) {
    ctx->id = 9323;
    ctx->coefficient = 4.8;
    ctx->flags = 1;
}

int compute_pJUp01u(int input) {
    int result = input * 28;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} WSgcirnc_ctx_t;

void init_ctx(WSgcirnc_ctx_t *ctx) {
    ctx->id = 1723;
    ctx->coefficient = 0.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} MmKpx926_ctx_t;

void init_ctx(MmKpx926_ctx_t *ctx) {
    ctx->id = 3608;
    ctx->coefficient = 3.2;
    ctx->flags = 143;
}

int compute_oU0Z3hp(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

int compute_vNSwQIH(int input) {
    int result = input * 70;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Kbd0urHf_ctx_t;

void init_ctx(Kbd0urHf_ctx_t *ctx) {
    ctx->id = 2274;
    ctx->coefficient = 3.8;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} IhAYQkAj_ctx_t;

void init_ctx(IhAYQkAj_ctx_t *ctx) {
    ctx->id = 3755;
    ctx->coefficient = 4.8;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} csVxrfvB_ctx_t;

void init_ctx(csVxrfvB_ctx_t *ctx) {
    ctx->id = 1791;
    ctx->coefficient = 6.9;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} S82KkzG3_ctx_t;

void init_ctx(S82KkzG3_ctx_t *ctx) {
    ctx->id = 9506;
    ctx->coefficient = 6.8;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} HwGVwfRR_ctx_t;

void init_ctx(HwGVwfRR_ctx_t *ctx) {
    ctx->id = 2227;
    ctx->coefficient = 5.9;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} dt0bW4gE_ctx_t;

void init_ctx(dt0bW4gE_ctx_t *ctx) {
    ctx->id = 4477;
    ctx->coefficient = 6.2;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 606SOrWl_ctx_t;

void init_ctx(606SOrWl_ctx_t *ctx) {
    ctx->id = 9961;
    ctx->coefficient = 7.0;
    ctx->flags = 231;
}

int compute_0DDiRCl(int input) {
    int result = input * 27;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_mX4YNsK(int input) {
    int result = input * 55;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

int compute_XZMKH0T(int input) {
    int result = input * 3;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} UOG1tff7_ctx_t;

void init_ctx(UOG1tff7_ctx_t *ctx) {
    ctx->id = 9577;
    ctx->coefficient = 2.3;
    ctx->flags = 79;
}

int compute_BNKCh8d(int input) {
    int result = input * 31;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} 0fd6ncLF_ctx_t;

void init_ctx(0fd6ncLF_ctx_t *ctx) {
    ctx->id = 2180;
    ctx->coefficient = 7.3;
    ctx->flags = 224;
}

int compute_tlXQw0f(int input) {
    int result = input * 63;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_2pcKvZ9(int input) {
    int result = input * 27;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

int compute_1tmC18q(int input) {
    int result = input * 62;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} szsGfQPO_ctx_t;

void init_ctx(szsGfQPO_ctx_t *ctx) {
    ctx->id = 3713;
    ctx->coefficient = 5.2;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} gqgll0e1_ctx_t;

void init_ctx(gqgll0e1_ctx_t *ctx) {
    ctx->id = 9236;
    ctx->coefficient = 4.4;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} IveCZkd6_ctx_t;

void init_ctx(IveCZkd6_ctx_t *ctx) {
    ctx->id = 5321;
    ctx->coefficient = 3.6;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} sHs0DxlI_ctx_t;

void init_ctx(sHs0DxlI_ctx_t *ctx) {
    ctx->id = 9524;
    ctx->coefficient = 2.5;
    ctx->flags = 17;
}

int compute_pNt9NCe(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} P8jNUJCN_ctx_t;

void init_ctx(P8jNUJCN_ctx_t *ctx) {
    ctx->id = 1048;
    ctx->coefficient = 7.7;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} q4WZH1hh_ctx_t;

void init_ctx(q4WZH1hh_ctx_t *ctx) {
    ctx->id = 7921;
    ctx->coefficient = 0.7;
    ctx->flags = 176;
}

int compute_FE8sjiK(int input) {
    int result = input * 42;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} MJxcPvgf_ctx_t;

void init_ctx(MJxcPvgf_ctx_t *ctx) {
    ctx->id = 1645;
    ctx->coefficient = 2.4;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} nNU7aYIS_ctx_t;

void init_ctx(nNU7aYIS_ctx_t *ctx) {
    ctx->id = 5785;
    ctx->coefficient = 1.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Tbuz5LpH_ctx_t;

void init_ctx(Tbuz5LpH_ctx_t *ctx) {
    ctx->id = 8215;
    ctx->coefficient = 4.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} KSPzy30V_ctx_t;

void init_ctx(KSPzy30V_ctx_t *ctx) {
    ctx->id = 1236;
    ctx->coefficient = 1.7;
    ctx->flags = 103;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 9f0FlL3L_ctx_t;

void init_ctx(9f0FlL3L_ctx_t *ctx) {
    ctx->id = 2328;
    ctx->coefficient = 8.9;
    ctx->flags = 217;
}

int compute_TQkuNAj(int input) {
    int result = input * 30;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} oCf1zZyN_ctx_t;

void init_ctx(oCf1zZyN_ctx_t *ctx) {
    ctx->id = 1021;
    ctx->coefficient = 1.6;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} GN0Xh49B_ctx_t;

void init_ctx(GN0Xh49B_ctx_t *ctx) {
    ctx->id = 1070;
    ctx->coefficient = 3.2;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0sC488LY_ctx_t;

void init_ctx(0sC488LY_ctx_t *ctx) {
    ctx->id = 6945;
    ctx->coefficient = 2.3;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} 1h1voU1X_ctx_t;

void init_ctx(1h1voU1X_ctx_t *ctx) {
    ctx->id = 1273;
    ctx->coefficient = 2.4;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} z2fu9ZAi_ctx_t;

void init_ctx(z2fu9ZAi_ctx_t *ctx) {
    ctx->id = 6568;
    ctx->coefficient = 6.8;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} H87XcqsT_ctx_t;

void init_ctx(H87XcqsT_ctx_t *ctx) {
    ctx->id = 3593;
    ctx->coefficient = 6.1;
    ctx->flags = 30;
}

int compute_Ik8RqQO(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

int compute_017OFmP(int input) {
    int result = input * 70;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} gg4AS39V_ctx_t;

void init_ctx(gg4AS39V_ctx_t *ctx) {
    ctx->id = 2379;
    ctx->coefficient = 6.9;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} W7t4NI2Q_ctx_t;

void init_ctx(W7t4NI2Q_ctx_t *ctx) {
    ctx->id = 8387;
    ctx->coefficient = 5.6;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} YXCTdtKq_ctx_t;

void init_ctx(YXCTdtKq_ctx_t *ctx) {
    ctx->id = 8870;
    ctx->coefficient = 4.6;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} cOxc0CYI_ctx_t;

void init_ctx(cOxc0CYI_ctx_t *ctx) {
    ctx->id = 6949;
    ctx->coefficient = 4.9;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} ajVG0m7h_ctx_t;

void init_ctx(ajVG0m7h_ctx_t *ctx) {
    ctx->id = 9492;
    ctx->coefficient = 7.4;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} mkD6P15e_ctx_t;

void init_ctx(mkD6P15e_ctx_t *ctx) {
    ctx->id = 1910;
    ctx->coefficient = 6.4;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} OWxrmNdH_ctx_t;

void init_ctx(OWxrmNdH_ctx_t *ctx) {
    ctx->id = 1302;
    ctx->coefficient = 5.3;
    ctx->flags = 136;
}

int compute_f06coav(int input) {
    int result = input * 59;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} jz6lbiCY_ctx_t;

void init_ctx(jz6lbiCY_ctx_t *ctx) {
    ctx->id = 3558;
    ctx->coefficient = 5.6;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} tbSp1LPg_ctx_t;

void init_ctx(tbSp1LPg_ctx_t *ctx) {
    ctx->id = 1089;
    ctx->coefficient = 0.4;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} t8aFhuhN_ctx_t;

void init_ctx(t8aFhuhN_ctx_t *ctx) {
    ctx->id = 2165;
    ctx->coefficient = 4.4;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} XFOaMd9d_ctx_t;

void init_ctx(XFOaMd9d_ctx_t *ctx) {
    ctx->id = 6754;
    ctx->coefficient = 3.2;
    ctx->flags = 90;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} trl52vZ1_ctx_t;

void init_ctx(trl52vZ1_ctx_t *ctx) {
    ctx->id = 7293;
    ctx->coefficient = 10.0;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} UAAPvke6_ctx_t;

void init_ctx(UAAPvke6_ctx_t *ctx) {
    ctx->id = 6442;
    ctx->coefficient = 2.4;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} JICvaYRa_ctx_t;

void init_ctx(JICvaYRa_ctx_t *ctx) {
    ctx->id = 8730;
    ctx->coefficient = 9.7;
    ctx->flags = 20;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 4vLI6dZK_ctx_t;

void init_ctx(4vLI6dZK_ctx_t *ctx) {
    ctx->id = 5254;
    ctx->coefficient = 5.0;
    ctx->flags = 79;
}

int compute_JRaLmUD(int input) {
    int result = input * 53;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

int compute_dHnOggs(int input) {
    int result = input * 28;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 8JsGrxo5_ctx_t;

void init_ctx(8JsGrxo5_ctx_t *ctx) {
    ctx->id = 2652;
    ctx->coefficient = 9.6;
    ctx->flags = 106;
}

int compute_qR4OTxv(int input) {
    int result = input * 3;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_VCj14gV(int input) {
    int result = input * 66;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} beUxtBKl_ctx_t;

void init_ctx(beUxtBKl_ctx_t *ctx) {
    ctx->id = 2423;
    ctx->coefficient = 5.9;
    ctx->flags = 62;
}

int compute_VNP4E33(int input) {
    int result = input * 48;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

int compute_eiOcjQy(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} DYMgWaHp_ctx_t;

void init_ctx(DYMgWaHp_ctx_t *ctx) {
    ctx->id = 1144;
    ctx->coefficient = 6.2;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} d8cAnKu0_ctx_t;

void init_ctx(d8cAnKu0_ctx_t *ctx) {
    ctx->id = 6030;
    ctx->coefficient = 0.1;
    ctx->flags = 16;
}

int compute_hTLphNl(int input) {
    int result = input * 59;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} H0FhCmYL_ctx_t;

void init_ctx(H0FhCmYL_ctx_t *ctx) {
    ctx->id = 5333;
    ctx->coefficient = 7.0;
    ctx->flags = 183;
}

int compute_KFjoAWk(int input) {
    int result = input * 29;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} Pi2M9JWM_ctx_t;

void init_ctx(Pi2M9JWM_ctx_t *ctx) {
    ctx->id = 7719;
    ctx->coefficient = 9.7;
    ctx->flags = 146;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} C0ahP7Fa_ctx_t;

void init_ctx(C0ahP7Fa_ctx_t *ctx) {
    ctx->id = 7903;
    ctx->coefficient = 2.3;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} UGdYRjai_ctx_t;

void init_ctx(UGdYRjai_ctx_t *ctx) {
    ctx->id = 8874;
    ctx->coefficient = 0.6;
    ctx->flags = 225;
}

int compute_NQNdC5z(int input) {
    int result = input * 64;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} BxERM5ef_ctx_t;

void init_ctx(BxERM5ef_ctx_t *ctx) {
    ctx->id = 2884;
    ctx->coefficient = 1.2;
    ctx->flags = 184;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} dJ9tfjpT_ctx_t;

void init_ctx(dJ9tfjpT_ctx_t *ctx) {
    ctx->id = 1320;
    ctx->coefficient = 8.7;
    ctx->flags = 253;
}

int compute_B8S8kCf(int input) {
    int result = input * 28;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} zEJ1OyTd_ctx_t;

void init_ctx(zEJ1OyTd_ctx_t *ctx) {
    ctx->id = 5180;
    ctx->coefficient = 3.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} mxCb9Ha4_ctx_t;

void init_ctx(mxCb9Ha4_ctx_t *ctx) {
    ctx->id = 1289;
    ctx->coefficient = 7.6;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} CQEfG5dv_ctx_t;

void init_ctx(CQEfG5dv_ctx_t *ctx) {
    ctx->id = 9537;
    ctx->coefficient = 5.5;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} DXdgLLfe_ctx_t;

void init_ctx(DXdgLLfe_ctx_t *ctx) {
    ctx->id = 6920;
    ctx->coefficient = 7.1;
    ctx->flags = 156;
}

int compute_P4j0DxI(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

int compute_Z7LJ5bn(int input) {
    int result = input * 37;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} TinXAexl_ctx_t;

void init_ctx(TinXAexl_ctx_t *ctx) {
    ctx->id = 3213;
    ctx->coefficient = 3.3;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} mBrtxNCf_ctx_t;

void init_ctx(mBrtxNCf_ctx_t *ctx) {
    ctx->id = 5126;
    ctx->coefficient = 5.2;
    ctx->flags = 211;
}

int compute_3adiBuC(int input) {
    int result = input * 70;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_hMBeGr9(int input) {
    int result = input * 19;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_IN4ZvFs(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} V2OaJwvt_ctx_t;

void init_ctx(V2OaJwvt_ctx_t *ctx) {
    ctx->id = 7727;
    ctx->coefficient = 6.8;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} AMqwc4uF_ctx_t;

void init_ctx(AMqwc4uF_ctx_t *ctx) {
    ctx->id = 6449;
    ctx->coefficient = 3.6;
    ctx->flags = 12;
}

int compute_mKAJArM(int input) {
    int result = input * 18;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_BPSWgbX(int input) {
    int result = input * 45;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} rD00XQtc_ctx_t;

void init_ctx(rD00XQtc_ctx_t *ctx) {
    ctx->id = 7643;
    ctx->coefficient = 0.7;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eh9mzl2S_ctx_t;

void init_ctx(eh9mzl2S_ctx_t *ctx) {
    ctx->id = 9399;
    ctx->coefficient = 2.5;
    ctx->flags = 62;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} FYeBeGfT_ctx_t;

void init_ctx(FYeBeGfT_ctx_t *ctx) {
    ctx->id = 6771;
    ctx->coefficient = 8.1;
    ctx->flags = 29;
}

int compute_H0dE66S(int input) {
    int result = input * 46;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Z8LsgCyy_ctx_t;

void init_ctx(Z8LsgCyy_ctx_t *ctx) {
    ctx->id = 8442;
    ctx->coefficient = 3.8;
    ctx->flags = 120;
}

int compute_sBTdojQ(int input) {
    int result = input * 16;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} hgfC548F_ctx_t;

void init_ctx(hgfC548F_ctx_t *ctx) {
    ctx->id = 9871;
    ctx->coefficient = 1.2;
    ctx->flags = 210;
}

int compute_smjaeWJ(int input) {
    int result = input * 6;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} qdcUsrlT_ctx_t;

void init_ctx(qdcUsrlT_ctx_t *ctx) {
    ctx->id = 4526;
    ctx->coefficient = 2.8;
    ctx->flags = 55;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} UpmBF6lB_ctx_t;

void init_ctx(UpmBF6lB_ctx_t *ctx) {
    ctx->id = 4852;
    ctx->coefficient = 5.4;
    ctx->flags = 187;
}

int compute_ddxIV3J(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} g7BxQ52M_ctx_t;

void init_ctx(g7BxQ52M_ctx_t *ctx) {
    ctx->id = 3497;
    ctx->coefficient = 5.4;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} zYmY928e_ctx_t;

void init_ctx(zYmY928e_ctx_t *ctx) {
    ctx->id = 7034;
    ctx->coefficient = 0.1;
    ctx->flags = 136;
}

int compute_8dFU8OS(int input) {
    int result = input * 55;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_4Evdnrq(int input) {
    int result = input * 38;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} jPJBUZij_ctx_t;

void init_ctx(jPJBUZij_ctx_t *ctx) {
    ctx->id = 3561;
    ctx->coefficient = 9.0;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 7M294jqw_ctx_t;

void init_ctx(7M294jqw_ctx_t *ctx) {
    ctx->id = 7144;
    ctx->coefficient = 4.0;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} EiSFoFah_ctx_t;

void init_ctx(EiSFoFah_ctx_t *ctx) {
    ctx->id = 8636;
    ctx->coefficient = 6.4;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} mC2BuOJA_ctx_t;

void init_ctx(mC2BuOJA_ctx_t *ctx) {
    ctx->id = 1666;
    ctx->coefficient = 1.3;
    ctx->flags = 160;
}

int compute_JqfBV8N(int input) {
    int result = input * 51;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_Q3PFgrn(int input) {
    int result = input * 54;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} wnppRoRn_ctx_t;

void init_ctx(wnppRoRn_ctx_t *ctx) {
    ctx->id = 7847;
    ctx->coefficient = 3.0;
    ctx->flags = 133;
}

int compute_GEQZ07Z(int input) {
    int result = input * 60;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} hGhAeP0b_ctx_t;

void init_ctx(hGhAeP0b_ctx_t *ctx) {
    ctx->id = 2435;
    ctx->coefficient = 2.1;
    ctx->flags = 19;
}

int compute_F8S7OaO(int input) {
    int result = input * 64;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} ViYdgGAA_ctx_t;

void init_ctx(ViYdgGAA_ctx_t *ctx) {
    ctx->id = 2944;
    ctx->coefficient = 2.0;
    ctx->flags = 88;
}

int compute_mkFAnwg(int input) {
    int result = input * 56;
    for(int i = 0; i < 18; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} OqrYg2bn_ctx_t;

void init_ctx(OqrYg2bn_ctx_t *ctx) {
    ctx->id = 5235;
    ctx->coefficient = 6.8;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} HMCTK9XC_ctx_t;

void init_ctx(HMCTK9XC_ctx_t *ctx) {
    ctx->id = 1841;
    ctx->coefficient = 8.0;
    ctx->flags = 8;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} fh0Ed2ed_ctx_t;

void init_ctx(fh0Ed2ed_ctx_t *ctx) {
    ctx->id = 6572;
    ctx->coefficient = 8.3;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} QEv9IVRt_ctx_t;

void init_ctx(QEv9IVRt_ctx_t *ctx) {
    ctx->id = 7032;
    ctx->coefficient = 6.5;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} Wq9ySi7W_ctx_t;

void init_ctx(Wq9ySi7W_ctx_t *ctx) {
    ctx->id = 9572;
    ctx->coefficient = 5.2;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} 6Z24k7Ir_ctx_t;

void init_ctx(6Z24k7Ir_ctx_t *ctx) {
    ctx->id = 1333;
    ctx->coefficient = 6.6;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} p1esaGIc_ctx_t;

void init_ctx(p1esaGIc_ctx_t *ctx) {
    ctx->id = 9667;
    ctx->coefficient = 3.4;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} u3BhjXbX_ctx_t;

void init_ctx(u3BhjXbX_ctx_t *ctx) {
    ctx->id = 9978;
    ctx->coefficient = 3.0;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} lv1FzN9a_ctx_t;

void init_ctx(lv1FzN9a_ctx_t *ctx) {
    ctx->id = 1665;
    ctx->coefficient = 7.8;
    ctx->flags = 145;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} fjygwt4R_ctx_t;

void init_ctx(fjygwt4R_ctx_t *ctx) {
    ctx->id = 5121;
    ctx->coefficient = 4.7;
    ctx->flags = 219;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} ac6pX2yK_ctx_t;

void init_ctx(ac6pX2yK_ctx_t *ctx) {
    ctx->id = 8238;
    ctx->coefficient = 7.9;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} FkpNViiz_ctx_t;

void init_ctx(FkpNViiz_ctx_t *ctx) {
    ctx->id = 5234;
    ctx->coefficient = 3.6;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} pSOe08XZ_ctx_t;

void init_ctx(pSOe08XZ_ctx_t *ctx) {
    ctx->id = 3712;
    ctx->coefficient = 0.9;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 9TrAdKKG_ctx_t;

void init_ctx(9TrAdKKG_ctx_t *ctx) {
    ctx->id = 7611;
    ctx->coefficient = 0.3;
    ctx->flags = 0;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} RUILlG8Q_ctx_t;

void init_ctx(RUILlG8Q_ctx_t *ctx) {
    ctx->id = 4031;
    ctx->coefficient = 10.0;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} 9RhHGSXA_ctx_t;

void init_ctx(9RhHGSXA_ctx_t *ctx) {
    ctx->id = 8319;
    ctx->coefficient = 9.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} QKSXIu50_ctx_t;

void init_ctx(QKSXIu50_ctx_t *ctx) {
    ctx->id = 1709;
    ctx->coefficient = 2.5;
    ctx->flags = 35;
}

int compute_tQAPjLF(int input) {
    int result = input * 31;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_tWBja0g(int input) {
    int result = input * 40;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_0WBGQSt(int input) {
    int result = input * 47;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} b37Jv2FK_ctx_t;

void init_ctx(b37Jv2FK_ctx_t *ctx) {
    ctx->id = 1336;
    ctx->coefficient = 9.8;
    ctx->flags = 150;
}

int compute_9syPG37(int input) {
    int result = input * 31;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} fOys2OYp_ctx_t;

void init_ctx(fOys2OYp_ctx_t *ctx) {
    ctx->id = 2096;
    ctx->coefficient = 6.9;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} AEM1ogr2_ctx_t;

void init_ctx(AEM1ogr2_ctx_t *ctx) {
    ctx->id = 7747;
    ctx->coefficient = 8.4;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} bmBzJ5hh_ctx_t;

void init_ctx(bmBzJ5hh_ctx_t *ctx) {
    ctx->id = 6811;
    ctx->coefficient = 2.3;
    ctx->flags = 111;
}

int compute_dUMQxHk(int input) {
    int result = input * 20;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} XXbMwPew_ctx_t;

void init_ctx(XXbMwPew_ctx_t *ctx) {
    ctx->id = 4497;
    ctx->coefficient = 6.1;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} DHlFKMA1_ctx_t;

void init_ctx(DHlFKMA1_ctx_t *ctx) {
    ctx->id = 2385;
    ctx->coefficient = 4.8;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} aXTYqLLW_ctx_t;

void init_ctx(aXTYqLLW_ctx_t *ctx) {
    ctx->id = 8583;
    ctx->coefficient = 5.1;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 0C7TeiFF_ctx_t;

void init_ctx(0C7TeiFF_ctx_t *ctx) {
    ctx->id = 4625;
    ctx->coefficient = 8.9;
    ctx->flags = 79;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} kbT9o1wD_ctx_t;

void init_ctx(kbT9o1wD_ctx_t *ctx) {
    ctx->id = 1063;
    ctx->coefficient = 6.2;
    ctx->flags = 78;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} DHhNad4O_ctx_t;

void init_ctx(DHhNad4O_ctx_t *ctx) {
    ctx->id = 5366;
    ctx->coefficient = 1.4;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} BuVLglVW_ctx_t;

void init_ctx(BuVLglVW_ctx_t *ctx) {
    ctx->id = 9656;
    ctx->coefficient = 2.5;
    ctx->flags = 215;
}

int compute_xaeV3Hm(int input) {
    int result = input * 23;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 1dOCXnGQ_ctx_t;

void init_ctx(1dOCXnGQ_ctx_t *ctx) {
    ctx->id = 6563;
    ctx->coefficient = 5.3;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} qVjsyWjT_ctx_t;

void init_ctx(qVjsyWjT_ctx_t *ctx) {
    ctx->id = 5416;
    ctx->coefficient = 7.3;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} BFnLERO3_ctx_t;

void init_ctx(BFnLERO3_ctx_t *ctx) {
    ctx->id = 7763;
    ctx->coefficient = 3.1;
    ctx->flags = 84;
}

int compute_9MOmQY3(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} fKNEnqGd_ctx_t;

void init_ctx(fKNEnqGd_ctx_t *ctx) {
    ctx->id = 6899;
    ctx->coefficient = 1.1;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} BYzTIDnv_ctx_t;

void init_ctx(BYzTIDnv_ctx_t *ctx) {
    ctx->id = 7179;
    ctx->coefficient = 4.9;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} ChE0eNgY_ctx_t;

void init_ctx(ChE0eNgY_ctx_t *ctx) {
    ctx->id = 7243;
    ctx->coefficient = 2.7;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} zVldgp4j_ctx_t;

void init_ctx(zVldgp4j_ctx_t *ctx) {
    ctx->id = 3708;
    ctx->coefficient = 6.9;
    ctx->flags = 216;
}

int compute_EshRqiQ(int input) {
    int result = input * 14;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_t9j4KYJ(int input) {
    int result = input * 13;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} ziSQnAm6_ctx_t;

void init_ctx(ziSQnAm6_ctx_t *ctx) {
    ctx->id = 9212;
    ctx->coefficient = 9.0;
    ctx->flags = 241;
}

int compute_a8xew1l(int input) {
    int result = input * 67;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_L4YmDna(int input) {
    int result = input * 16;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} WSS5vRLC_ctx_t;

void init_ctx(WSS5vRLC_ctx_t *ctx) {
    ctx->id = 1153;
    ctx->coefficient = 4.8;
    ctx->flags = 212;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ALjv8YPX_ctx_t;

void init_ctx(ALjv8YPX_ctx_t *ctx) {
    ctx->id = 9847;
    ctx->coefficient = 1.8;
    ctx->flags = 75;
}

int compute_Sm0CHN7(int input) {
    int result = input * 4;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

int compute_zQAvLYE(int input) {
    int result = input * 18;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} H9ZadnlC_ctx_t;

void init_ctx(H9ZadnlC_ctx_t *ctx) {
    ctx->id = 2471;
    ctx->coefficient = 9.6;
    ctx->flags = 172;
}

int compute_LUNUdYS(int input) {
    int result = input * 39;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} wKPvfyNj_ctx_t;

void init_ctx(wKPvfyNj_ctx_t *ctx) {
    ctx->id = 7353;
    ctx->coefficient = 4.6;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} eh4Z1h1h_ctx_t;

void init_ctx(eh4Z1h1h_ctx_t *ctx) {
    ctx->id = 5255;
    ctx->coefficient = 8.7;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} IiZYSP8p_ctx_t;

void init_ctx(IiZYSP8p_ctx_t *ctx) {
    ctx->id = 7899;
    ctx->coefficient = 6.0;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} z5KnDNe2_ctx_t;

void init_ctx(z5KnDNe2_ctx_t *ctx) {
    ctx->id = 4616;
    ctx->coefficient = 6.7;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} LLRoOeCU_ctx_t;

void init_ctx(LLRoOeCU_ctx_t *ctx) {
    ctx->id = 2736;
    ctx->coefficient = 8.7;
    ctx->flags = 9;
}

int compute_NK2qPrT(int input) {
    int result = input * 10;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

int compute_MloN2Gp(int input) {
    int result = input * 9;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_zec8Yg2(int input) {
    int result = input * 47;
    for(int i = 0; i < 9; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} tYINvgnu_ctx_t;

void init_ctx(tYINvgnu_ctx_t *ctx) {
    ctx->id = 6711;
    ctx->coefficient = 0.3;
    ctx->flags = 104;
}

int compute_gRHvKO8(int input) {
    int result = input * 52;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_flLTS7E(int input) {
    int result = input * 25;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} Gd4Z783r_ctx_t;

void init_ctx(Gd4Z783r_ctx_t *ctx) {
    ctx->id = 6379;
    ctx->coefficient = 0.4;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} RFtfNcVk_ctx_t;

void init_ctx(RFtfNcVk_ctx_t *ctx) {
    ctx->id = 3543;
    ctx->coefficient = 8.8;
    ctx->flags = 92;
}

int compute_IymVYm9(int input) {
    int result = input * 41;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} A8nR0hSm_ctx_t;

void init_ctx(A8nR0hSm_ctx_t *ctx) {
    ctx->id = 5754;
    ctx->coefficient = 8.4;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} QwyDHHZx_ctx_t;

void init_ctx(QwyDHHZx_ctx_t *ctx) {
    ctx->id = 1603;
    ctx->coefficient = 3.4;
    ctx->flags = 53;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} Q4l6qi2h_ctx_t;

void init_ctx(Q4l6qi2h_ctx_t *ctx) {
    ctx->id = 4115;
    ctx->coefficient = 9.0;
    ctx->flags = 45;
}

int compute_IISqcyx(int input) {
    int result = input * 2;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ruKdneDC_ctx_t;

void init_ctx(ruKdneDC_ctx_t *ctx) {
    ctx->id = 5435;
    ctx->coefficient = 2.6;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} a0Gkfp9V_ctx_t;

void init_ctx(a0Gkfp9V_ctx_t *ctx) {
    ctx->id = 2526;
    ctx->coefficient = 1.4;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} X7ICdNV7_ctx_t;

void init_ctx(X7ICdNV7_ctx_t *ctx) {
    ctx->id = 2286;
    ctx->coefficient = 2.8;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ZaaEjJzk_ctx_t;

void init_ctx(ZaaEjJzk_ctx_t *ctx) {
    ctx->id = 2189;
    ctx->coefficient = 9.8;
    ctx->flags = 224;
}

int compute_WFARjRJ(int input) {
    int result = input * 29;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_WiCGEMw(int input) {
    int result = input * 28;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} Xm5xwRjc_ctx_t;

void init_ctx(Xm5xwRjc_ctx_t *ctx) {
    ctx->id = 9839;
    ctx->coefficient = 2.6;
    ctx->flags = 125;
}

int compute_kmfZWvd(int input) {
    int result = input * 56;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} KS3KqVVo_ctx_t;

void init_ctx(KS3KqVVo_ctx_t *ctx) {
    ctx->id = 4151;
    ctx->coefficient = 9.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} N0p16ZHD_ctx_t;

void init_ctx(N0p16ZHD_ctx_t *ctx) {
    ctx->id = 2141;
    ctx->coefficient = 5.6;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 7fSrjtZD_ctx_t;

void init_ctx(7fSrjtZD_ctx_t *ctx) {
    ctx->id = 1400;
    ctx->coefficient = 7.8;
    ctx->flags = 237;
}

int compute_UHbj3RN(int input) {
    int result = input * 44;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_fsGaATA(int input) {
    int result = input * 33;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_MMCUK33(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} mOfQqZiQ_ctx_t;

void init_ctx(mOfQqZiQ_ctx_t *ctx) {
    ctx->id = 9242;
    ctx->coefficient = 0.6;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} koPQ1OPR_ctx_t;

void init_ctx(koPQ1OPR_ctx_t *ctx) {
    ctx->id = 2228;
    ctx->coefficient = 5.7;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 71USNZ05_ctx_t;

void init_ctx(71USNZ05_ctx_t *ctx) {
    ctx->id = 1170;
    ctx->coefficient = 2.2;
    ctx->flags = 19;
}

int compute_53nhYDc(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_4WhoACX(int input) {
    int result = input * 61;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} taTZvABP_ctx_t;

void init_ctx(taTZvABP_ctx_t *ctx) {
    ctx->id = 3447;
    ctx->coefficient = 1.6;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Q5uFSbEz_ctx_t;

void init_ctx(Q5uFSbEz_ctx_t *ctx) {
    ctx->id = 1058;
    ctx->coefficient = 1.9;
    ctx->flags = 212;
}

int compute_9eNrSWw(int input) {
    int result = input * 4;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_1mW5Wm4(int input) {
    int result = input * 6;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} k0lMYgdp_ctx_t;

void init_ctx(k0lMYgdp_ctx_t *ctx) {
    ctx->id = 6789;
    ctx->coefficient = 0.2;
    ctx->flags = 29;
}

int compute_m8eMzQ9(int input) {
    int result = input * 62;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} T29TOB5F_ctx_t;

void init_ctx(T29TOB5F_ctx_t *ctx) {
    ctx->id = 1464;
    ctx->coefficient = 4.1;
    ctx->flags = 26;
}

int compute_OlxRMEq(int input) {
    int result = input * 66;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} hHPBvji9_ctx_t;

void init_ctx(hHPBvji9_ctx_t *ctx) {
    ctx->id = 6327;
    ctx->coefficient = 0.2;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} jYot3eJr_ctx_t;

void init_ctx(jYot3eJr_ctx_t *ctx) {
    ctx->id = 6832;
    ctx->coefficient = 4.7;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} mntyA3RM_ctx_t;

void init_ctx(mntyA3RM_ctx_t *ctx) {
    ctx->id = 6756;
    ctx->coefficient = 0.4;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} HTntsNzD_ctx_t;

void init_ctx(HTntsNzD_ctx_t *ctx) {
    ctx->id = 4131;
    ctx->coefficient = 5.7;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} SNW7kCv5_ctx_t;

void init_ctx(SNW7kCv5_ctx_t *ctx) {
    ctx->id = 7453;
    ctx->coefficient = 2.5;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} RDlhGSKL_ctx_t;

void init_ctx(RDlhGSKL_ctx_t *ctx) {
    ctx->id = 9595;
    ctx->coefficient = 1.6;
    ctx->flags = 196;
}

int compute_3fnSM9i(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} hBN70HJI_ctx_t;

void init_ctx(hBN70HJI_ctx_t *ctx) {
    ctx->id = 6334;
    ctx->coefficient = 3.8;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ZXHi0qPx_ctx_t;

void init_ctx(ZXHi0qPx_ctx_t *ctx) {
    ctx->id = 5721;
    ctx->coefficient = 1.1;
    ctx->flags = 145;
}

int compute_WIg2oLf(int input) {
    int result = input * 49;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

int compute_crnPdHX(int input) {
    int result = input * 31;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} h4iHz5ep_ctx_t;

void init_ctx(h4iHz5ep_ctx_t *ctx) {
    ctx->id = 9729;
    ctx->coefficient = 5.3;
    ctx->flags = 218;
}

int compute_J4rtZH0(int input) {
    int result = input * 5;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_0jqeKxr(int input) {
    int result = input * 67;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} aVYabzYf_ctx_t;

void init_ctx(aVYabzYf_ctx_t *ctx) {
    ctx->id = 9550;
    ctx->coefficient = 6.2;
    ctx->flags = 221;
}

int compute_ln0X1Ta(int input) {
    int result = input * 13;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_hRI074g(int input) {
    int result = input * 51;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} TR7MWEIq_ctx_t;

void init_ctx(TR7MWEIq_ctx_t *ctx) {
    ctx->id = 9603;
    ctx->coefficient = 0.7;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} zx6RLUpp_ctx_t;

void init_ctx(zx6RLUpp_ctx_t *ctx) {
    ctx->id = 3812;
    ctx->coefficient = 0.4;
    ctx->flags = 105;
}

int compute_yIKKYDy(int input) {
    int result = input * 15;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

int compute_bjB1BVG(int input) {
    int result = input * 7;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} EdavLbJr_ctx_t;

void init_ctx(EdavLbJr_ctx_t *ctx) {
    ctx->id = 5877;
    ctx->coefficient = 0.3;
    ctx->flags = 69;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} QmCGWpM9_ctx_t;

void init_ctx(QmCGWpM9_ctx_t *ctx) {
    ctx->id = 5693;
    ctx->coefficient = 4.2;
    ctx->flags = 133;
}

int compute_oVEO761(int input) {
    int result = input * 32;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} GHyaSwlg_ctx_t;

void init_ctx(GHyaSwlg_ctx_t *ctx) {
    ctx->id = 7579;
    ctx->coefficient = 8.9;
    ctx->flags = 6;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} i3Mq6gwa_ctx_t;

void init_ctx(i3Mq6gwa_ctx_t *ctx) {
    ctx->id = 2107;
    ctx->coefficient = 5.1;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} Q0hHXJoj_ctx_t;

void init_ctx(Q0hHXJoj_ctx_t *ctx) {
    ctx->id = 5779;
    ctx->coefficient = 3.9;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} OSic21tp_ctx_t;

void init_ctx(OSic21tp_ctx_t *ctx) {
    ctx->id = 2068;
    ctx->coefficient = 5.3;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} EUjnBGze_ctx_t;

void init_ctx(EUjnBGze_ctx_t *ctx) {
    ctx->id = 8146;
    ctx->coefficient = 7.2;
    ctx->flags = 209;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Xe37L817_ctx_t;

void init_ctx(Xe37L817_ctx_t *ctx) {
    ctx->id = 7111;
    ctx->coefficient = 3.2;
    ctx->flags = 151;
}

int compute_vNsLEXJ(int input) {
    int result = input * 57;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} oIHJuoZ3_ctx_t;

void init_ctx(oIHJuoZ3_ctx_t *ctx) {
    ctx->id = 3131;
    ctx->coefficient = 7.8;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} xv1gaxOu_ctx_t;

void init_ctx(xv1gaxOu_ctx_t *ctx) {
    ctx->id = 4046;
    ctx->coefficient = 6.3;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} msFPe2ZF_ctx_t;

void init_ctx(msFPe2ZF_ctx_t *ctx) {
    ctx->id = 1730;
    ctx->coefficient = 3.7;
    ctx->flags = 230;
}

int compute_4AMSNbj(int input) {
    int result = input * 26;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} wK5uwtPJ_ctx_t;

void init_ctx(wK5uwtPJ_ctx_t *ctx) {
    ctx->id = 2418;
    ctx->coefficient = 1.6;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} isThtMPG_ctx_t;

void init_ctx(isThtMPG_ctx_t *ctx) {
    ctx->id = 4791;
    ctx->coefficient = 1.4;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} cE3eFd0s_ctx_t;

void init_ctx(cE3eFd0s_ctx_t *ctx) {
    ctx->id = 3006;
    ctx->coefficient = 2.6;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} IrniWOJ1_ctx_t;

void init_ctx(IrniWOJ1_ctx_t *ctx) {
    ctx->id = 8264;
    ctx->coefficient = 8.6;
    ctx->flags = 49;
}

int compute_005Grrk(int input) {
    int result = input * 47;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} SQBpY7Dt_ctx_t;

void init_ctx(SQBpY7Dt_ctx_t *ctx) {
    ctx->id = 7742;
    ctx->coefficient = 4.8;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} b4EOKlLb_ctx_t;

void init_ctx(b4EOKlLb_ctx_t *ctx) {
    ctx->id = 9334;
    ctx->coefficient = 4.4;
    ctx->flags = 99;
}

int compute_RA5rxEf(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_LvPxndL(int input) {
    int result = input * 27;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_8r1Xufk(int input) {
    int result = input * 46;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} zuZyoxEQ_ctx_t;

void init_ctx(zuZyoxEQ_ctx_t *ctx) {
    ctx->id = 4447;
    ctx->coefficient = 8.7;
    ctx->flags = 66;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} vZ7SBj5k_ctx_t;

void init_ctx(vZ7SBj5k_ctx_t *ctx) {
    ctx->id = 8268;
    ctx->coefficient = 6.4;
    ctx->flags = 166;
}

int compute_AqWGEJH(int input) {
    int result = input * 57;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_YdYwbVn(int input) {
    int result = input * 4;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} B0C83CQT_ctx_t;

void init_ctx(B0C83CQT_ctx_t *ctx) {
    ctx->id = 7329;
    ctx->coefficient = 1.5;
    ctx->flags = 95;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} zBT5Ucey_ctx_t;

void init_ctx(zBT5Ucey_ctx_t *ctx) {
    ctx->id = 7373;
    ctx->coefficient = 4.4;
    ctx->flags = 159;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} OX3sw5Bv_ctx_t;

void init_ctx(OX3sw5Bv_ctx_t *ctx) {
    ctx->id = 5249;
    ctx->coefficient = 4.1;
    ctx->flags = 65;
}

int compute_rb6qysx(int input) {
    int result = input * 2;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} y3nDOd4z_ctx_t;

void init_ctx(y3nDOd4z_ctx_t *ctx) {
    ctx->id = 1764;
    ctx->coefficient = 8.5;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} QUjnorFw_ctx_t;

void init_ctx(QUjnorFw_ctx_t *ctx) {
    ctx->id = 8609;
    ctx->coefficient = 6.2;
    ctx->flags = 122;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} hPuavyAo_ctx_t;

void init_ctx(hPuavyAo_ctx_t *ctx) {
    ctx->id = 8880;
    ctx->coefficient = 3.8;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} AAlRKhk1_ctx_t;

void init_ctx(AAlRKhk1_ctx_t *ctx) {
    ctx->id = 9378;
    ctx->coefficient = 5.4;
    ctx->flags = 144;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} mHNkHk3s_ctx_t;

void init_ctx(mHNkHk3s_ctx_t *ctx) {
    ctx->id = 4484;
    ctx->coefficient = 3.0;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} kjlPb5k8_ctx_t;

void init_ctx(kjlPb5k8_ctx_t *ctx) {
    ctx->id = 7618;
    ctx->coefficient = 4.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} IjNcHTFe_ctx_t;

void init_ctx(IjNcHTFe_ctx_t *ctx) {
    ctx->id = 8240;
    ctx->coefficient = 9.5;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} GBul6hby_ctx_t;

void init_ctx(GBul6hby_ctx_t *ctx) {
    ctx->id = 7771;
    ctx->coefficient = 2.2;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 8qaCJf4g_ctx_t;

void init_ctx(8qaCJf4g_ctx_t *ctx) {
    ctx->id = 8839;
    ctx->coefficient = 8.8;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} gn8cGKRJ_ctx_t;

void init_ctx(gn8cGKRJ_ctx_t *ctx) {
    ctx->id = 2440;
    ctx->coefficient = 3.2;
    ctx->flags = 108;
}

int compute_mo1DgwE(int input) {
    int result = input * 5;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} kaDKXefM_ctx_t;

void init_ctx(kaDKXefM_ctx_t *ctx) {
    ctx->id = 6248;
    ctx->coefficient = 0.7;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Jwjr5h1x_ctx_t;

void init_ctx(Jwjr5h1x_ctx_t *ctx) {
    ctx->id = 8248;
    ctx->coefficient = 9.6;
    ctx->flags = 34;
}

int compute_Qv7JW6U(int input) {
    int result = input * 60;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

int compute_aMP8a3z(int input) {
    int result = input * 20;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} nipxD9rJ_ctx_t;

void init_ctx(nipxD9rJ_ctx_t *ctx) {
    ctx->id = 2330;
    ctx->coefficient = 8.1;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} nqYdILHW_ctx_t;

void init_ctx(nqYdILHW_ctx_t *ctx) {
    ctx->id = 9721;
    ctx->coefficient = 1.3;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} sgxJKjDe_ctx_t;

void init_ctx(sgxJKjDe_ctx_t *ctx) {
    ctx->id = 2627;
    ctx->coefficient = 3.5;
    ctx->flags = 14;
}

int compute_nXyc120(int input) {
    int result = input * 34;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} 93KlCCm4_ctx_t;

void init_ctx(93KlCCm4_ctx_t *ctx) {
    ctx->id = 9542;
    ctx->coefficient = 8.2;
    ctx->flags = 18;
}

int compute_fZ3e4Zs(int input) {
    int result = input * 21;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} ATWM8q1A_ctx_t;

void init_ctx(ATWM8q1A_ctx_t *ctx) {
    ctx->id = 1166;
    ctx->coefficient = 9.9;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} IVBpxL5c_ctx_t;

void init_ctx(IVBpxL5c_ctx_t *ctx) {
    ctx->id = 8287;
    ctx->coefficient = 6.2;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} BMseOoK6_ctx_t;

void init_ctx(BMseOoK6_ctx_t *ctx) {
    ctx->id = 8527;
    ctx->coefficient = 5.0;
    ctx->flags = 160;
}

int compute_bAT0T01(int input) {
    int result = input * 13;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_ZxyYKEw(int input) {
    int result = input * 13;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_sjAkJBD(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} WJuGkv9r_ctx_t;

void init_ctx(WJuGkv9r_ctx_t *ctx) {
    ctx->id = 1642;
    ctx->coefficient = 1.7;
    ctx->flags = 92;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} fKkoGzWb_ctx_t;

void init_ctx(fKkoGzWb_ctx_t *ctx) {
    ctx->id = 6251;
    ctx->coefficient = 8.8;
    ctx->flags = 2;
}

int compute_uMtbpz7(int input) {
    int result = input * 10;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} UcszhOaI_ctx_t;

void init_ctx(UcszhOaI_ctx_t *ctx) {
    ctx->id = 7420;
    ctx->coefficient = 6.6;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} Q62LXgiC_ctx_t;

void init_ctx(Q62LXgiC_ctx_t *ctx) {
    ctx->id = 5832;
    ctx->coefficient = 7.9;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} RR4s5wpW_ctx_t;

void init_ctx(RR4s5wpW_ctx_t *ctx) {
    ctx->id = 1935;
    ctx->coefficient = 2.4;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} AmrWguBg_ctx_t;

void init_ctx(AmrWguBg_ctx_t *ctx) {
    ctx->id = 4991;
    ctx->coefficient = 2.7;
    ctx->flags = 227;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} O0HvPvld_ctx_t;

void init_ctx(O0HvPvld_ctx_t *ctx) {
    ctx->id = 7510;
    ctx->coefficient = 2.7;
    ctx->flags = 218;
}

int compute_lcX6Fg1(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

int compute_MwGNCz4(int input) {
    int result = input * 15;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} gxY2dyOK_ctx_t;

void init_ctx(gxY2dyOK_ctx_t *ctx) {
    ctx->id = 3503;
    ctx->coefficient = 0.9;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} oK0vwGnL_ctx_t;

void init_ctx(oK0vwGnL_ctx_t *ctx) {
    ctx->id = 2129;
    ctx->coefficient = 6.0;
    ctx->flags = 153;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ROvuaSUf_ctx_t;

void init_ctx(ROvuaSUf_ctx_t *ctx) {
    ctx->id = 4261;
    ctx->coefficient = 0.7;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} u0bIIavm_ctx_t;

void init_ctx(u0bIIavm_ctx_t *ctx) {
    ctx->id = 2631;
    ctx->coefficient = 7.8;
    ctx->flags = 151;
}

int compute_6RLMTbE(int input) {
    int result = input * 15;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 1safIn4Z_ctx_t;

void init_ctx(1safIn4Z_ctx_t *ctx) {
    ctx->id = 4261;
    ctx->coefficient = 0.4;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} EDyLea7x_ctx_t;

void init_ctx(EDyLea7x_ctx_t *ctx) {
    ctx->id = 3560;
    ctx->coefficient = 1.2;
    ctx->flags = 241;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} QVQ9497M_ctx_t;

void init_ctx(QVQ9497M_ctx_t *ctx) {
    ctx->id = 8561;
    ctx->coefficient = 6.6;
    ctx->flags = 94;
}

int compute_ggncMp7(int input) {
    int result = input * 68;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_AyzEf45(int input) {
    int result = input * 5;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_ialUmYO(int input) {
    int result = input * 37;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

int compute_3upU54I(int input) {
    int result = input * 51;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} wPCWkctY_ctx_t;

void init_ctx(wPCWkctY_ctx_t *ctx) {
    ctx->id = 9886;
    ctx->coefficient = 3.9;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} vhrr7c2Q_ctx_t;

void init_ctx(vhrr7c2Q_ctx_t *ctx) {
    ctx->id = 6698;
    ctx->coefficient = 7.9;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} VTDiS3P5_ctx_t;

void init_ctx(VTDiS3P5_ctx_t *ctx) {
    ctx->id = 8730;
    ctx->coefficient = 8.8;
    ctx->flags = 148;
}

int compute_sB4KA9p(int input) {
    int result = input * 43;
    for(int i = 0; i < 12; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} DybBIVLo_ctx_t;

void init_ctx(DybBIVLo_ctx_t *ctx) {
    ctx->id = 9172;
    ctx->coefficient = 4.2;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} ZmjXXp8y_ctx_t;

void init_ctx(ZmjXXp8y_ctx_t *ctx) {
    ctx->id = 2592;
    ctx->coefficient = 4.3;
    ctx->flags = 35;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} Ry0cxNGY_ctx_t;

void init_ctx(Ry0cxNGY_ctx_t *ctx) {
    ctx->id = 6168;
    ctx->coefficient = 5.9;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} objXAyO3_ctx_t;

void init_ctx(objXAyO3_ctx_t *ctx) {
    ctx->id = 8487;
    ctx->coefficient = 6.0;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} 4M9xsMih_ctx_t;

void init_ctx(4M9xsMih_ctx_t *ctx) {
    ctx->id = 6733;
    ctx->coefficient = 4.0;
    ctx->flags = 122;
}

int compute_DKsuUJx(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} lcMj7eeJ_ctx_t;

void init_ctx(lcMj7eeJ_ctx_t *ctx) {
    ctx->id = 1251;
    ctx->coefficient = 4.7;
    ctx->flags = 169;
}

int compute_ATyMq53(int input) {
    int result = input * 55;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

int compute_Rh2goM4(int input) {
    int result = input * 32;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 560jXbJD_ctx_t;

void init_ctx(560jXbJD_ctx_t *ctx) {
    ctx->id = 5602;
    ctx->coefficient = 6.0;
    ctx->flags = 181;
}

int compute_TaV9nK1(int input) {
    int result = input * 57;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_SDnekW6(int input) {
    int result = input * 53;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_sAzG5G7(int input) {
    int result = input * 27;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} VMrCJKrT_ctx_t;

void init_ctx(VMrCJKrT_ctx_t *ctx) {
    ctx->id = 8587;
    ctx->coefficient = 7.2;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} K4uvHlg5_ctx_t;

void init_ctx(K4uvHlg5_ctx_t *ctx) {
    ctx->id = 4898;
    ctx->coefficient = 7.7;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} wdBpCk51_ctx_t;

void init_ctx(wdBpCk51_ctx_t *ctx) {
    ctx->id = 9502;
    ctx->coefficient = 0.7;
    ctx->flags = 166;
}

int compute_XNnMm9H(int input) {
    int result = input * 38;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

int compute_0XxosjI(int input) {
    int result = input * 32;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} dKZAHpah_ctx_t;

void init_ctx(dKZAHpah_ctx_t *ctx) {
    ctx->id = 1227;
    ctx->coefficient = 1.1;
    ctx->flags = 10;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 8XFySZJf_ctx_t;

void init_ctx(8XFySZJf_ctx_t *ctx) {
    ctx->id = 1425;
    ctx->coefficient = 7.8;
    ctx->flags = 107;
}

int compute_GiD7Keg(int input) {
    int result = input * 58;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} opKcr2e9_ctx_t;

void init_ctx(opKcr2e9_ctx_t *ctx) {
    ctx->id = 7303;
    ctx->coefficient = 1.1;
    ctx->flags = 51;
}

int compute_GpFZyeQ(int input) {
    int result = input * 30;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_ciHkPOy(int input) {
    int result = input * 59;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} DEEj7jV2_ctx_t;

void init_ctx(DEEj7jV2_ctx_t *ctx) {
    ctx->id = 3341;
    ctx->coefficient = 0.9;
    ctx->flags = 64;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} ZPBeulZl_ctx_t;

void init_ctx(ZPBeulZl_ctx_t *ctx) {
    ctx->id = 7996;
    ctx->coefficient = 2.5;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} eXnTcOTj_ctx_t;

void init_ctx(eXnTcOTj_ctx_t *ctx) {
    ctx->id = 6699;
    ctx->coefficient = 1.8;
    ctx->flags = 239;
}

int compute_3waTv6p(int input) {
    int result = input * 17;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} YXQVuWLW_ctx_t;

void init_ctx(YXQVuWLW_ctx_t *ctx) {
    ctx->id = 1067;
    ctx->coefficient = 1.0;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} b2czJky4_ctx_t;

void init_ctx(b2czJky4_ctx_t *ctx) {
    ctx->id = 8505;
    ctx->coefficient = 6.2;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} DBGKtYOL_ctx_t;

void init_ctx(DBGKtYOL_ctx_t *ctx) {
    ctx->id = 8126;
    ctx->coefficient = 2.0;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} kGI3MqwZ_ctx_t;

void init_ctx(kGI3MqwZ_ctx_t *ctx) {
    ctx->id = 3911;
    ctx->coefficient = 9.0;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} WlO2oy7i_ctx_t;

void init_ctx(WlO2oy7i_ctx_t *ctx) {
    ctx->id = 2167;
    ctx->coefficient = 5.2;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} LsG4ToDt_ctx_t;

void init_ctx(LsG4ToDt_ctx_t *ctx) {
    ctx->id = 4697;
    ctx->coefficient = 3.6;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 59wuPuAF_ctx_t;

void init_ctx(59wuPuAF_ctx_t *ctx) {
    ctx->id = 1179;
    ctx->coefficient = 1.3;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} v0m8xLLQ_ctx_t;

void init_ctx(v0m8xLLQ_ctx_t *ctx) {
    ctx->id = 4142;
    ctx->coefficient = 3.4;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} ZuqQ5Y8J_ctx_t;

void init_ctx(ZuqQ5Y8J_ctx_t *ctx) {
    ctx->id = 4266;
    ctx->coefficient = 9.1;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} dpQ7ThjS_ctx_t;

void init_ctx(dpQ7ThjS_ctx_t *ctx) {
    ctx->id = 5731;
    ctx->coefficient = 3.6;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} qPpNPnf7_ctx_t;

void init_ctx(qPpNPnf7_ctx_t *ctx) {
    ctx->id = 7287;
    ctx->coefficient = 2.8;
    ctx->flags = 192;
}

int compute_rd6MLfP(int input) {
    int result = input * 42;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} IAYh0AX5_ctx_t;

void init_ctx(IAYh0AX5_ctx_t *ctx) {
    ctx->id = 5150;
    ctx->coefficient = 2.4;
    ctx->flags = 136;
}

int compute_HWHJtFp(int input) {
    int result = input * 68;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} v9kLm0aA_ctx_t;

void init_ctx(v9kLm0aA_ctx_t *ctx) {
    ctx->id = 3072;
    ctx->coefficient = 0.7;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} ouzFkAg6_ctx_t;

void init_ctx(ouzFkAg6_ctx_t *ctx) {
    ctx->id = 1574;
    ctx->coefficient = 2.2;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} TyJPoRpB_ctx_t;

void init_ctx(TyJPoRpB_ctx_t *ctx) {
    ctx->id = 8170;
    ctx->coefficient = 1.2;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} USFqGq8j_ctx_t;

void init_ctx(USFqGq8j_ctx_t *ctx) {
    ctx->id = 9606;
    ctx->coefficient = 2.3;
    ctx->flags = 172;
}

int compute_ymiHurS(int input) {
    int result = input * 37;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} yUPRxYCJ_ctx_t;

void init_ctx(yUPRxYCJ_ctx_t *ctx) {
    ctx->id = 1668;
    ctx->coefficient = 9.1;
    ctx->flags = 59;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} M2O2u6zt_ctx_t;

void init_ctx(M2O2u6zt_ctx_t *ctx) {
    ctx->id = 1464;
    ctx->coefficient = 3.0;
    ctx->flags = 25;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 2JhemFEV_ctx_t;

void init_ctx(2JhemFEV_ctx_t *ctx) {
    ctx->id = 2932;
    ctx->coefficient = 1.4;
    ctx->flags = 149;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} ZPr3nVMM_ctx_t;

void init_ctx(ZPr3nVMM_ctx_t *ctx) {
    ctx->id = 4285;
    ctx->coefficient = 7.0;
    ctx->flags = 143;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} nowbG5dS_ctx_t;

void init_ctx(nowbG5dS_ctx_t *ctx) {
    ctx->id = 3743;
    ctx->coefficient = 8.5;
    ctx->flags = 201;
}

int compute_kdMXMlg(int input) {
    int result = input * 65;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_KefmdNs(int input) {
    int result = input * 32;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} xSS9Ac7o_ctx_t;

void init_ctx(xSS9Ac7o_ctx_t *ctx) {
    ctx->id = 5400;
    ctx->coefficient = 9.6;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} wbcv4WwR_ctx_t;

void init_ctx(wbcv4WwR_ctx_t *ctx) {
    ctx->id = 3888;
    ctx->coefficient = 5.9;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} wLuF0j4n_ctx_t;

void init_ctx(wLuF0j4n_ctx_t *ctx) {
    ctx->id = 9310;
    ctx->coefficient = 5.2;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} IypuAH3j_ctx_t;

void init_ctx(IypuAH3j_ctx_t *ctx) {
    ctx->id = 6114;
    ctx->coefficient = 2.8;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} gPJZTkym_ctx_t;

void init_ctx(gPJZTkym_ctx_t *ctx) {
    ctx->id = 7523;
    ctx->coefficient = 7.1;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} nN6UerT7_ctx_t;

void init_ctx(nN6UerT7_ctx_t *ctx) {
    ctx->id = 6274;
    ctx->coefficient = 5.9;
    ctx->flags = 164;
}

int compute_zi0YuEn(int input) {
    int result = input * 15;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} bmRmSFJ3_ctx_t;

void init_ctx(bmRmSFJ3_ctx_t *ctx) {
    ctx->id = 4229;
    ctx->coefficient = 2.7;
    ctx->flags = 81;
}

int compute_9Nkmbg4(int input) {
    int result = input * 33;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} kA26d27B_ctx_t;

void init_ctx(kA26d27B_ctx_t *ctx) {
    ctx->id = 7433;
    ctx->coefficient = 2.0;
    ctx->flags = 187;
}

int compute_Ii4r9dT(int input) {
    int result = input * 45;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} fUj4ZxVj_ctx_t;

void init_ctx(fUj4ZxVj_ctx_t *ctx) {
    ctx->id = 2555;
    ctx->coefficient = 8.6;
    ctx->flags = 208;
}

int compute_Bc4ixiH(int input) {
    int result = input * 29;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_lQvNSLV(int input) {
    int result = input * 36;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_XLDDOBT(int input) {
    int result = input * 20;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} ui4YHMPl_ctx_t;

void init_ctx(ui4YHMPl_ctx_t *ctx) {
    ctx->id = 7079;
    ctx->coefficient = 9.7;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} 4uzxgVvw_ctx_t;

void init_ctx(4uzxgVvw_ctx_t *ctx) {
    ctx->id = 6110;
    ctx->coefficient = 8.3;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 1sa0DSLA_ctx_t;

void init_ctx(1sa0DSLA_ctx_t *ctx) {
    ctx->id = 6980;
    ctx->coefficient = 4.8;
    ctx->flags = 245;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} Xi0kNixa_ctx_t;

void init_ctx(Xi0kNixa_ctx_t *ctx) {
    ctx->id = 6914;
    ctx->coefficient = 6.9;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} ZGqQdwSK_ctx_t;

void init_ctx(ZGqQdwSK_ctx_t *ctx) {
    ctx->id = 6938;
    ctx->coefficient = 5.5;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} nOqmTm2z_ctx_t;

void init_ctx(nOqmTm2z_ctx_t *ctx) {
    ctx->id = 4095;
    ctx->coefficient = 1.9;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} yCeZQmPr_ctx_t;

void init_ctx(yCeZQmPr_ctx_t *ctx) {
    ctx->id = 4613;
    ctx->coefficient = 2.8;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 2NLMFChB_ctx_t;

void init_ctx(2NLMFChB_ctx_t *ctx) {
    ctx->id = 6077;
    ctx->coefficient = 8.1;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} z9xopCnM_ctx_t;

void init_ctx(z9xopCnM_ctx_t *ctx) {
    ctx->id = 1719;
    ctx->coefficient = 5.0;
    ctx->flags = 238;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} mSsgjXpA_ctx_t;

void init_ctx(mSsgjXpA_ctx_t *ctx) {
    ctx->id = 3805;
    ctx->coefficient = 6.5;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} FudNIcTL_ctx_t;

void init_ctx(FudNIcTL_ctx_t *ctx) {
    ctx->id = 8742;
    ctx->coefficient = 7.5;
    ctx->flags = 202;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} ZjJXkpib_ctx_t;

void init_ctx(ZjJXkpib_ctx_t *ctx) {
    ctx->id = 6712;
    ctx->coefficient = 6.4;
    ctx->flags = 244;
}

int compute_yXRnEMJ(int input) {
    int result = input * 47;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} qN1U8CC6_ctx_t;

void init_ctx(qN1U8CC6_ctx_t *ctx) {
    ctx->id = 7091;
    ctx->coefficient = 4.8;
    ctx->flags = 162;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} LpkhAVga_ctx_t;

void init_ctx(LpkhAVga_ctx_t *ctx) {
    ctx->id = 8988;
    ctx->coefficient = 1.6;
    ctx->flags = 59;
}

int compute_RSVlCao(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_w3Z6Mdj(int input) {
    int result = input * 65;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} RH94H1Pq_ctx_t;

void init_ctx(RH94H1Pq_ctx_t *ctx) {
    ctx->id = 8390;
    ctx->coefficient = 2.4;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} lnvneBYK_ctx_t;

void init_ctx(lnvneBYK_ctx_t *ctx) {
    ctx->id = 9400;
    ctx->coefficient = 2.2;
    ctx->flags = 170;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 4BvJSYxN_ctx_t;

void init_ctx(4BvJSYxN_ctx_t *ctx) {
    ctx->id = 2210;
    ctx->coefficient = 1.7;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} SNRd4D2D_ctx_t;

void init_ctx(SNRd4D2D_ctx_t *ctx) {
    ctx->id = 1855;
    ctx->coefficient = 9.3;
    ctx->flags = 103;
}

int compute_1WUJgdu(int input) {
    int result = input * 23;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

int compute_UoN0KgL(int input) {
    int result = input * 43;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} u2KkuFXK_ctx_t;

void init_ctx(u2KkuFXK_ctx_t *ctx) {
    ctx->id = 2124;
    ctx->coefficient = 0.8;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 0NZlnXPL_ctx_t;

void init_ctx(0NZlnXPL_ctx_t *ctx) {
    ctx->id = 3629;
    ctx->coefficient = 0.8;
    ctx->flags = 189;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} 293Oi5G4_ctx_t;

void init_ctx(293Oi5G4_ctx_t *ctx) {
    ctx->id = 7723;
    ctx->coefficient = 8.8;
    ctx->flags = 187;
}

int compute_OntnU1p(int input) {
    int result = input * 70;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_PVW2Izi(int input) {
    int result = input * 15;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_bvkDOXH(int input) {
    int result = input * 5;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} SOhCuv7z_ctx_t;

void init_ctx(SOhCuv7z_ctx_t *ctx) {
    ctx->id = 4327;
    ctx->coefficient = 6.2;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} XrS8a3qH_ctx_t;

void init_ctx(XrS8a3qH_ctx_t *ctx) {
    ctx->id = 9298;
    ctx->coefficient = 9.6;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} ARiwpUaY_ctx_t;

void init_ctx(ARiwpUaY_ctx_t *ctx) {
    ctx->id = 4695;
    ctx->coefficient = 0.2;
    ctx->flags = 9;
}

int compute_JvbLA3D(int input) {
    int result = input * 3;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} nYFZ0j1L_ctx_t;

void init_ctx(nYFZ0j1L_ctx_t *ctx) {
    ctx->id = 9954;
    ctx->coefficient = 1.5;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} WjR38ZeU_ctx_t;

void init_ctx(WjR38ZeU_ctx_t *ctx) {
    ctx->id = 5184;
    ctx->coefficient = 6.9;
    ctx->flags = 178;
}

int compute_2KQi8Wl(int input) {
    int result = input * 48;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} VqgJvkwC_ctx_t;

void init_ctx(VqgJvkwC_ctx_t *ctx) {
    ctx->id = 1514;
    ctx->coefficient = 3.1;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} 3tm2gL59_ctx_t;

void init_ctx(3tm2gL59_ctx_t *ctx) {
    ctx->id = 8192;
    ctx->coefficient = 0.9;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} XQAJrUKU_ctx_t;

void init_ctx(XQAJrUKU_ctx_t *ctx) {
    ctx->id = 6076;
    ctx->coefficient = 5.6;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} Sbn7Vkgh_ctx_t;

void init_ctx(Sbn7Vkgh_ctx_t *ctx) {
    ctx->id = 8234;
    ctx->coefficient = 6.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} IO1Bbe62_ctx_t;

void init_ctx(IO1Bbe62_ctx_t *ctx) {
    ctx->id = 9687;
    ctx->coefficient = 8.1;
    ctx->flags = 140;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 1XRHsHMz_ctx_t;

void init_ctx(1XRHsHMz_ctx_t *ctx) {
    ctx->id = 9587;
    ctx->coefficient = 5.4;
    ctx->flags = 123;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 51LRqEar_ctx_t;

void init_ctx(51LRqEar_ctx_t *ctx) {
    ctx->id = 9463;
    ctx->coefficient = 8.9;
    ctx->flags = 246;
}

int compute_ymVuVm3(int input) {
    int result = input * 62;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_mYTVntE(int input) {
    int result = input * 7;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 7OzODw8F_ctx_t;

void init_ctx(7OzODw8F_ctx_t *ctx) {
    ctx->id = 9393;
    ctx->coefficient = 7.4;
    ctx->flags = 241;
}

int compute_0QBGsmZ(int input) {
    int result = input * 28;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} jNd1TujQ_ctx_t;

void init_ctx(jNd1TujQ_ctx_t *ctx) {
    ctx->id = 4086;
    ctx->coefficient = 4.4;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} J60FmP3K_ctx_t;

void init_ctx(J60FmP3K_ctx_t *ctx) {
    ctx->id = 8644;
    ctx->coefficient = 3.5;
    ctx->flags = 32;
}

int compute_Jo7l0uw(int input) {
    int result = input * 2;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} cZClQeFl_ctx_t;

void init_ctx(cZClQeFl_ctx_t *ctx) {
    ctx->id = 7099;
    ctx->coefficient = 7.8;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 00KBKi3k_ctx_t;

void init_ctx(00KBKi3k_ctx_t *ctx) {
    ctx->id = 3833;
    ctx->coefficient = 9.3;
    ctx->flags = 231;
}

int compute_lWSUleE(int input) {
    int result = input * 18;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} kPej9q6T_ctx_t;

void init_ctx(kPej9q6T_ctx_t *ctx) {
    ctx->id = 2569;
    ctx->coefficient = 3.5;
    ctx->flags = 192;
}

int compute_YX3qTh9(int input) {
    int result = input * 7;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} rjKnDknM_ctx_t;

void init_ctx(rjKnDknM_ctx_t *ctx) {
    ctx->id = 8088;
    ctx->coefficient = 6.7;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} yaeAppgC_ctx_t;

void init_ctx(yaeAppgC_ctx_t *ctx) {
    ctx->id = 3282;
    ctx->coefficient = 9.2;
    ctx->flags = 179;
}

int compute_xQ6TCtq(int input) {
    int result = input * 42;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} f6Twteyx_ctx_t;

void init_ctx(f6Twteyx_ctx_t *ctx) {
    ctx->id = 7232;
    ctx->coefficient = 3.0;
    ctx->flags = 199;
}

int compute_m3MQxHf(int input) {
    int result = input * 34;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} LFdcpDJA_ctx_t;

void init_ctx(LFdcpDJA_ctx_t *ctx) {
    ctx->id = 4645;
    ctx->coefficient = 6.5;
    ctx->flags = 157;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} rEW1D7HB_ctx_t;

void init_ctx(rEW1D7HB_ctx_t *ctx) {
    ctx->id = 1765;
    ctx->coefficient = 4.1;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 8cU9MZ8s_ctx_t;

void init_ctx(8cU9MZ8s_ctx_t *ctx) {
    ctx->id = 9352;
    ctx->coefficient = 6.7;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} NZ4Ca5Ug_ctx_t;

void init_ctx(NZ4Ca5Ug_ctx_t *ctx) {
    ctx->id = 1811;
    ctx->coefficient = 4.2;
    ctx->flags = 239;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} IynsBcS1_ctx_t;

void init_ctx(IynsBcS1_ctx_t *ctx) {
    ctx->id = 5086;
    ctx->coefficient = 4.6;
    ctx->flags = 8;
}

int compute_M8Cduek(int input) {
    int result = input * 11;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

int compute_0h7cuFU(int input) {
    int result = input * 26;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_wNh35gd(int input) {
    int result = input * 47;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

int compute_1HmjP0r(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

int compute_z9zWUfH(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} ZoSNXnqF_ctx_t;

void init_ctx(ZoSNXnqF_ctx_t *ctx) {
    ctx->id = 1605;
    ctx->coefficient = 2.1;
    ctx->flags = 114;
}

int compute_peCq03o(int input) {
    int result = input * 46;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_121ngug(int input) {
    int result = input * 13;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} MiUMkqro_ctx_t;

void init_ctx(MiUMkqro_ctx_t *ctx) {
    ctx->id = 5446;
    ctx->coefficient = 0.6;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} iE6r2WWX_ctx_t;

void init_ctx(iE6r2WWX_ctx_t *ctx) {
    ctx->id = 1997;
    ctx->coefficient = 8.6;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} JkvQKXWU_ctx_t;

void init_ctx(JkvQKXWU_ctx_t *ctx) {
    ctx->id = 3117;
    ctx->coefficient = 3.1;
    ctx->flags = 54;
}

int compute_b9oflvQ(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} M6Un0lKh_ctx_t;

void init_ctx(M6Un0lKh_ctx_t *ctx) {
    ctx->id = 1636;
    ctx->coefficient = 3.2;
    ctx->flags = 220;
}

int compute_9iND37C(int input) {
    int result = input * 47;
    for(int i = 0; i < 15; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} HtyXgt7A_ctx_t;

void init_ctx(HtyXgt7A_ctx_t *ctx) {
    ctx->id = 7844;
    ctx->coefficient = 0.1;
    ctx->flags = 26;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} JmIHeUtf_ctx_t;

void init_ctx(JmIHeUtf_ctx_t *ctx) {
    ctx->id = 4042;
    ctx->coefficient = 6.1;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} LqFkxsbT_ctx_t;

void init_ctx(LqFkxsbT_ctx_t *ctx) {
    ctx->id = 4362;
    ctx->coefficient = 7.5;
    ctx->flags = 78;
}

int compute_RAMsgpJ(int input) {
    int result = input * 21;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} BXKU4lmI_ctx_t;

void init_ctx(BXKU4lmI_ctx_t *ctx) {
    ctx->id = 2612;
    ctx->coefficient = 4.8;
    ctx->flags = 44;
}

int compute_s1q8Ya1(int input) {
    int result = input * 47;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} iPVgKrOm_ctx_t;

void init_ctx(iPVgKrOm_ctx_t *ctx) {
    ctx->id = 1758;
    ctx->coefficient = 8.2;
    ctx->flags = 103;
}

int compute_kOnXiSO(int input) {
    int result = input * 3;
    for(int i = 0; i < 4; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 0FZtQz6v_ctx_t;

void init_ctx(0FZtQz6v_ctx_t *ctx) {
    ctx->id = 1457;
    ctx->coefficient = 1.4;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 0egkiNfG_ctx_t;

void init_ctx(0egkiNfG_ctx_t *ctx) {
    ctx->id = 3748;
    ctx->coefficient = 8.5;
    ctx->flags = 56;
}

int compute_9b1NFsg(int input) {
    int result = input * 49;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} RaWkjaQ3_ctx_t;

void init_ctx(RaWkjaQ3_ctx_t *ctx) {
    ctx->id = 2474;
    ctx->coefficient = 1.7;
    ctx->flags = 192;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} xLyb7UVw_ctx_t;

void init_ctx(xLyb7UVw_ctx_t *ctx) {
    ctx->id = 5067;
    ctx->coefficient = 7.7;
    ctx->flags = 221;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} nnb4MLps_ctx_t;

void init_ctx(nnb4MLps_ctx_t *ctx) {
    ctx->id = 9771;
    ctx->coefficient = 8.1;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} rX02WPhz_ctx_t;

void init_ctx(rX02WPhz_ctx_t *ctx) {
    ctx->id = 1859;
    ctx->coefficient = 4.0;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} 5p2lig0I_ctx_t;

void init_ctx(5p2lig0I_ctx_t *ctx) {
    ctx->id = 2454;
    ctx->coefficient = 3.4;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} KjPELpxg_ctx_t;

void init_ctx(KjPELpxg_ctx_t *ctx) {
    ctx->id = 2882;
    ctx->coefficient = 2.0;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} ECSnic7W_ctx_t;

void init_ctx(ECSnic7W_ctx_t *ctx) {
    ctx->id = 1986;
    ctx->coefficient = 4.6;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} wjkSfeRM_ctx_t;

void init_ctx(wjkSfeRM_ctx_t *ctx) {
    ctx->id = 1074;
    ctx->coefficient = 1.5;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 5t3vRwuk_ctx_t;

void init_ctx(5t3vRwuk_ctx_t *ctx) {
    ctx->id = 1017;
    ctx->coefficient = 0.9;
    ctx->flags = 15;
}

int compute_tyix0My(int input) {
    int result = input * 18;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

int compute_3VRdQqS(int input) {
    int result = input * 27;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

int compute_8ZW4huj(int input) {
    int result = input * 64;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} UDj6NVPi_ctx_t;

void init_ctx(UDj6NVPi_ctx_t *ctx) {
    ctx->id = 6882;
    ctx->coefficient = 3.5;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 9v2MwnSO_ctx_t;

void init_ctx(9v2MwnSO_ctx_t *ctx) {
    ctx->id = 5967;
    ctx->coefficient = 7.6;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} Mfg9BEbn_ctx_t;

void init_ctx(Mfg9BEbn_ctx_t *ctx) {
    ctx->id = 2673;
    ctx->coefficient = 1.6;
    ctx->flags = 76;
}

int compute_xRqaq6T(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 7FSXGXoW_ctx_t;

void init_ctx(7FSXGXoW_ctx_t *ctx) {
    ctx->id = 9595;
    ctx->coefficient = 5.4;
    ctx->flags = 148;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} W9IH75he_ctx_t;

void init_ctx(W9IH75he_ctx_t *ctx) {
    ctx->id = 8018;
    ctx->coefficient = 7.5;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} somld7n2_ctx_t;

void init_ctx(somld7n2_ctx_t *ctx) {
    ctx->id = 7862;
    ctx->coefficient = 4.8;
    ctx->flags = 2;
}

int compute_EAgwJEZ(int input) {
    int result = input * 20;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} nBbDagkh_ctx_t;

void init_ctx(nBbDagkh_ctx_t *ctx) {
    ctx->id = 7928;
    ctx->coefficient = 9.7;
    ctx->flags = 197;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} toDUPc4b_ctx_t;

void init_ctx(toDUPc4b_ctx_t *ctx) {
    ctx->id = 9421;
    ctx->coefficient = 6.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 52v7kdR1_ctx_t;

void init_ctx(52v7kdR1_ctx_t *ctx) {
    ctx->id = 7566;
    ctx->coefficient = 6.4;
    ctx->flags = 165;
}

int compute_m1WkT8L(int input) {
    int result = input * 59;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_6zuAZfT(int input) {
    int result = input * 64;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} RL08FUlW_ctx_t;

void init_ctx(RL08FUlW_ctx_t *ctx) {
    ctx->id = 9848;
    ctx->coefficient = 7.8;
    ctx->flags = 119;
}

int compute_Ye9abSn(int input) {
    int result = input * 29;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

int compute_uiwhgEw(int input) {
    int result = input * 14;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 7gbHE6lN_ctx_t;

void init_ctx(7gbHE6lN_ctx_t *ctx) {
    ctx->id = 4127;
    ctx->coefficient = 6.7;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} u5Ijg09F_ctx_t;

void init_ctx(u5Ijg09F_ctx_t *ctx) {
    ctx->id = 1939;
    ctx->coefficient = 2.3;
    ctx->flags = 207;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} KvoFgfrm_ctx_t;

void init_ctx(KvoFgfrm_ctx_t *ctx) {
    ctx->id = 6169;
    ctx->coefficient = 0.4;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} bsUSVEvz_ctx_t;

void init_ctx(bsUSVEvz_ctx_t *ctx) {
    ctx->id = 2240;
    ctx->coefficient = 7.1;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} dlt1KmBk_ctx_t;

void init_ctx(dlt1KmBk_ctx_t *ctx) {
    ctx->id = 3620;
    ctx->coefficient = 2.9;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} oCBDUTx8_ctx_t;

void init_ctx(oCBDUTx8_ctx_t *ctx) {
    ctx->id = 2952;
    ctx->coefficient = 9.2;
    ctx->flags = 183;
}

int compute_68G2B7R(int input) {
    int result = input * 39;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_gnDSByt(int input) {
    int result = input * 60;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} IjE9FuQj_ctx_t;

void init_ctx(IjE9FuQj_ctx_t *ctx) {
    ctx->id = 3199;
    ctx->coefficient = 1.3;
    ctx->flags = 128;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} y5QLCtSB_ctx_t;

void init_ctx(y5QLCtSB_ctx_t *ctx) {
    ctx->id = 4683;
    ctx->coefficient = 3.5;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 9RBfjeGc_ctx_t;

void init_ctx(9RBfjeGc_ctx_t *ctx) {
    ctx->id = 1011;
    ctx->coefficient = 7.1;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} 1vqGniIM_ctx_t;

void init_ctx(1vqGniIM_ctx_t *ctx) {
    ctx->id = 2111;
    ctx->coefficient = 0.9;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} t17NCNq7_ctx_t;

void init_ctx(t17NCNq7_ctx_t *ctx) {
    ctx->id = 5006;
    ctx->coefficient = 3.9;
    ctx->flags = 243;
}

int compute_14JDxZd(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} NFXCO3b6_ctx_t;

void init_ctx(NFXCO3b6_ctx_t *ctx) {
    ctx->id = 5297;
    ctx->coefficient = 6.6;
    ctx->flags = 40;
}

int compute_KSEIq3s(int input) {
    int result = input * 54;
    for(int i = 0; i < 8; i++) result += (i * 4);
    return result;
}

int compute_hpK7tm7(int input) {
    int result = input * 38;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} 9NZjJ57w_ctx_t;

void init_ctx(9NZjJ57w_ctx_t *ctx) {
    ctx->id = 8330;
    ctx->coefficient = 5.1;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} MyIqVdOm_ctx_t;

void init_ctx(MyIqVdOm_ctx_t *ctx) {
    ctx->id = 5824;
    ctx->coefficient = 4.1;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} pTK3fbZR_ctx_t;

void init_ctx(pTK3fbZR_ctx_t *ctx) {
    ctx->id = 3333;
    ctx->coefficient = 9.0;
    ctx->flags = 102;
}

int compute_bnLZFzi(int input) {
    int result = input * 61;
    for(int i = 0; i < 12; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} rhh9tR6C_ctx_t;

void init_ctx(rhh9tR6C_ctx_t *ctx) {
    ctx->id = 7659;
    ctx->coefficient = 8.3;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} ZHvhAgZX_ctx_t;

void init_ctx(ZHvhAgZX_ctx_t *ctx) {
    ctx->id = 1729;
    ctx->coefficient = 1.2;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} v6EaBKgL_ctx_t;

void init_ctx(v6EaBKgL_ctx_t *ctx) {
    ctx->id = 7800;
    ctx->coefficient = 4.8;
    ctx->flags = 246;
}

int compute_jMhCzcb(int input) {
    int result = input * 44;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} XE7uirZv_ctx_t;

void init_ctx(XE7uirZv_ctx_t *ctx) {
    ctx->id = 1919;
    ctx->coefficient = 6.5;
    ctx->flags = 17;
}

int compute_Qk9B1Ey(int input) {
    int result = input * 14;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} hxMoh5RI_ctx_t;

void init_ctx(hxMoh5RI_ctx_t *ctx) {
    ctx->id = 7019;
    ctx->coefficient = 8.7;
    ctx->flags = 208;
}

int compute_ABoSyqp(int input) {
    int result = input * 45;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

int compute_mq5uavU(int input) {
    int result = input * 27;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_63NMKJ5(int input) {
    int result = input * 38;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} ui8LZNxa_ctx_t;

void init_ctx(ui8LZNxa_ctx_t *ctx) {
    ctx->id = 3901;
    ctx->coefficient = 0.2;
    ctx->flags = 169;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 5QEFpOom_ctx_t;

void init_ctx(5QEFpOom_ctx_t *ctx) {
    ctx->id = 9627;
    ctx->coefficient = 2.8;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 2KSxmIZ4_ctx_t;

void init_ctx(2KSxmIZ4_ctx_t *ctx) {
    ctx->id = 1141;
    ctx->coefficient = 4.1;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 4IGYK2CA_ctx_t;

void init_ctx(4IGYK2CA_ctx_t *ctx) {
    ctx->id = 3946;
    ctx->coefficient = 3.9;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} CMKxRIIy_ctx_t;

void init_ctx(CMKxRIIy_ctx_t *ctx) {
    ctx->id = 1128;
    ctx->coefficient = 1.5;
    ctx->flags = 220;
}

int compute_d2DYaid(int input) {
    int result = input * 23;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

int compute_hpQ8BsR(int input) {
    int result = input * 32;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} lBcyRzbO_ctx_t;

void init_ctx(lBcyRzbO_ctx_t *ctx) {
    ctx->id = 4248;
    ctx->coefficient = 8.5;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} hL0kRKiN_ctx_t;

void init_ctx(hL0kRKiN_ctx_t *ctx) {
    ctx->id = 6075;
    ctx->coefficient = 7.8;
    ctx->flags = 46;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} S6XL4YIP_ctx_t;

void init_ctx(S6XL4YIP_ctx_t *ctx) {
    ctx->id = 6510;
    ctx->coefficient = 5.4;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} vusKVUP4_ctx_t;

void init_ctx(vusKVUP4_ctx_t *ctx) {
    ctx->id = 7418;
    ctx->coefficient = 8.6;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} wCeqAstS_ctx_t;

void init_ctx(wCeqAstS_ctx_t *ctx) {
    ctx->id = 8249;
    ctx->coefficient = 3.6;
    ctx->flags = 43;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} YjWozEvR_ctx_t;

void init_ctx(YjWozEvR_ctx_t *ctx) {
    ctx->id = 9857;
    ctx->coefficient = 7.3;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} O9vOhsmJ_ctx_t;

void init_ctx(O9vOhsmJ_ctx_t *ctx) {
    ctx->id = 1474;
    ctx->coefficient = 7.9;
    ctx->flags = 88;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} SXV1kp7G_ctx_t;

void init_ctx(SXV1kp7G_ctx_t *ctx) {
    ctx->id = 8787;
    ctx->coefficient = 8.5;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} rcq2bXPW_ctx_t;

void init_ctx(rcq2bXPW_ctx_t *ctx) {
    ctx->id = 6241;
    ctx->coefficient = 5.8;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} oaaER0YX_ctx_t;

void init_ctx(oaaER0YX_ctx_t *ctx) {
    ctx->id = 2068;
    ctx->coefficient = 9.2;
    ctx->flags = 117;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} KSdW90Sg_ctx_t;

void init_ctx(KSdW90Sg_ctx_t *ctx) {
    ctx->id = 4319;
    ctx->coefficient = 3.5;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} cSTQyqYM_ctx_t;

void init_ctx(cSTQyqYM_ctx_t *ctx) {
    ctx->id = 3855;
    ctx->coefficient = 0.9;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} K4xX1AyY_ctx_t;

void init_ctx(K4xX1AyY_ctx_t *ctx) {
    ctx->id = 9947;
    ctx->coefficient = 6.9;
    ctx->flags = 5;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} T9jGdN7v_ctx_t;

void init_ctx(T9jGdN7v_ctx_t *ctx) {
    ctx->id = 8848;
    ctx->coefficient = 5.1;
    ctx->flags = 4;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} 2EJfbKNx_ctx_t;

void init_ctx(2EJfbKNx_ctx_t *ctx) {
    ctx->id = 8185;
    ctx->coefficient = 4.4;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} dYDb88Yx_ctx_t;

void init_ctx(dYDb88Yx_ctx_t *ctx) {
    ctx->id = 9713;
    ctx->coefficient = 5.3;
    ctx->flags = 209;
}

int compute_B4SVuuF(int input) {
    int result = input * 35;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_v3LXIK2(int input) {
    int result = input * 2;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

int compute_LgkGEL1(int input) {
    int result = input * 56;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} fFJHFPCu_ctx_t;

void init_ctx(fFJHFPCu_ctx_t *ctx) {
    ctx->id = 8184;
    ctx->coefficient = 1.3;
    ctx->flags = 214;
}

int compute_rpuEinA(int input) {
    int result = input * 8;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} BbmDjWi1_ctx_t;

void init_ctx(BbmDjWi1_ctx_t *ctx) {
    ctx->id = 4749;
    ctx->coefficient = 8.2;
    ctx->flags = 13;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} ytARZnvX_ctx_t;

void init_ctx(ytARZnvX_ctx_t *ctx) {
    ctx->id = 6894;
    ctx->coefficient = 0.2;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 0yHp0TXz_ctx_t;

void init_ctx(0yHp0TXz_ctx_t *ctx) {
    ctx->id = 3425;
    ctx->coefficient = 2.5;
    ctx->flags = 89;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} tFaBFNQP_ctx_t;

void init_ctx(tFaBFNQP_ctx_t *ctx) {
    ctx->id = 8969;
    ctx->coefficient = 9.5;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} BDZwaqNc_ctx_t;

void init_ctx(BDZwaqNc_ctx_t *ctx) {
    ctx->id = 9789;
    ctx->coefficient = 8.7;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} rZN2hLZV_ctx_t;

void init_ctx(rZN2hLZV_ctx_t *ctx) {
    ctx->id = 4578;
    ctx->coefficient = 0.1;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} FTjWtHDt_ctx_t;

void init_ctx(FTjWtHDt_ctx_t *ctx) {
    ctx->id = 3825;
    ctx->coefficient = 1.9;
    ctx->flags = 137;
}

int compute_sDv64v4(int input) {
    int result = input * 40;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 6DvsYFa1_ctx_t;

void init_ctx(6DvsYFa1_ctx_t *ctx) {
    ctx->id = 4781;
    ctx->coefficient = 1.3;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} GeyY6BGJ_ctx_t;

void init_ctx(GeyY6BGJ_ctx_t *ctx) {
    ctx->id = 1713;
    ctx->coefficient = 5.0;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} is8Kt8gr_ctx_t;

void init_ctx(is8Kt8gr_ctx_t *ctx) {
    ctx->id = 8320;
    ctx->coefficient = 9.4;
    ctx->flags = 88;
}

int compute_EJMnP8o(int input) {
    int result = input * 35;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} tgLftUi0_ctx_t;

void init_ctx(tgLftUi0_ctx_t *ctx) {
    ctx->id = 1424;
    ctx->coefficient = 7.2;
    ctx->flags = 136;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} F4U7UmYq_ctx_t;

void init_ctx(F4U7UmYq_ctx_t *ctx) {
    ctx->id = 1001;
    ctx->coefficient = 6.0;
    ctx->flags = 67;
}

int compute_bBlGTpg(int input) {
    int result = input * 26;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} v6OmVpHd_ctx_t;

void init_ctx(v6OmVpHd_ctx_t *ctx) {
    ctx->id = 7340;
    ctx->coefficient = 1.6;
    ctx->flags = 2;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} uauVGTXn_ctx_t;

void init_ctx(uauVGTXn_ctx_t *ctx) {
    ctx->id = 4083;
    ctx->coefficient = 4.0;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 6gmAyPKK_ctx_t;

void init_ctx(6gmAyPKK_ctx_t *ctx) {
    ctx->id = 1978;
    ctx->coefficient = 3.9;
    ctx->flags = 153;
}

int compute_Pwrlbsw(int input) {
    int result = input * 22;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_QdNhHcP(int input) {
    int result = input * 43;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_YwdOmWz(int input) {
    int result = input * 7;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_KffKey6(int input) {
    int result = input * 5;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 2CmAnLDl_ctx_t;

void init_ctx(2CmAnLDl_ctx_t *ctx) {
    ctx->id = 2779;
    ctx->coefficient = 9.4;
    ctx->flags = 137;
}

int compute_N0DHaUu(int input) {
    int result = input * 10;
    for(int i = 0; i < 7; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 5zfO9tyx_ctx_t;

void init_ctx(5zfO9tyx_ctx_t *ctx) {
    ctx->id = 7465;
    ctx->coefficient = 1.3;
    ctx->flags = 133;
}

int compute_1c0qj0e(int input) {
    int result = input * 18;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} Uv0dnCMl_ctx_t;

void init_ctx(Uv0dnCMl_ctx_t *ctx) {
    ctx->id = 6618;
    ctx->coefficient = 2.5;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} 06T15BT1_ctx_t;

void init_ctx(06T15BT1_ctx_t *ctx) {
    ctx->id = 3772;
    ctx->coefficient = 3.6;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} Hk1fPObT_ctx_t;

void init_ctx(Hk1fPObT_ctx_t *ctx) {
    ctx->id = 2836;
    ctx->coefficient = 4.1;
    ctx->flags = 19;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} Vo9B0Uor_ctx_t;

void init_ctx(Vo9B0Uor_ctx_t *ctx) {
    ctx->id = 4675;
    ctx->coefficient = 5.0;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} hnCwTz3L_ctx_t;

void init_ctx(hnCwTz3L_ctx_t *ctx) {
    ctx->id = 2228;
    ctx->coefficient = 8.4;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} pm8oqJJx_ctx_t;

void init_ctx(pm8oqJJx_ctx_t *ctx) {
    ctx->id = 9431;
    ctx->coefficient = 0.6;
    ctx->flags = 18;
}

int compute_LvB0B0J(int input) {
    int result = input * 66;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} OjB2Mw0s_ctx_t;

void init_ctx(OjB2Mw0s_ctx_t *ctx) {
    ctx->id = 6199;
    ctx->coefficient = 7.2;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} zfEN8VQp_ctx_t;

void init_ctx(zfEN8VQp_ctx_t *ctx) {
    ctx->id = 3863;
    ctx->coefficient = 5.9;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 5diSfFRh_ctx_t;

void init_ctx(5diSfFRh_ctx_t *ctx) {
    ctx->id = 3983;
    ctx->coefficient = 4.8;
    ctx->flags = 233;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 7EvIN8IJ_ctx_t;

void init_ctx(7EvIN8IJ_ctx_t *ctx) {
    ctx->id = 3334;
    ctx->coefficient = 7.5;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} 0vQMU9nL_ctx_t;

void init_ctx(0vQMU9nL_ctx_t *ctx) {
    ctx->id = 1529;
    ctx->coefficient = 9.7;
    ctx->flags = 218;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} t5PN7r4z_ctx_t;

void init_ctx(t5PN7r4z_ctx_t *ctx) {
    ctx->id = 5819;
    ctx->coefficient = 0.5;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} ULa8a1jp_ctx_t;

void init_ctx(ULa8a1jp_ctx_t *ctx) {
    ctx->id = 5531;
    ctx->coefficient = 7.6;
    ctx->flags = 41;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} ZK7dxWcv_ctx_t;

void init_ctx(ZK7dxWcv_ctx_t *ctx) {
    ctx->id = 4995;
    ctx->coefficient = 3.7;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} XdDJ0aJ1_ctx_t;

void init_ctx(XdDJ0aJ1_ctx_t *ctx) {
    ctx->id = 4468;
    ctx->coefficient = 4.3;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} wY0U0YGe_ctx_t;

void init_ctx(wY0U0YGe_ctx_t *ctx) {
    ctx->id = 7454;
    ctx->coefficient = 2.3;
    ctx->flags = 58;
}

int compute_B6YcHGa(int input) {
    int result = input * 50;
    for(int i = 0; i < 16; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} 15gR5GKl_ctx_t;

void init_ctx(15gR5GKl_ctx_t *ctx) {
    ctx->id = 3176;
    ctx->coefficient = 3.0;
    ctx->flags = 114;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} F29zCY5D_ctx_t;

void init_ctx(F29zCY5D_ctx_t *ctx) {
    ctx->id = 5506;
    ctx->coefficient = 1.0;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} 1kavOKNQ_ctx_t;

void init_ctx(1kavOKNQ_ctx_t *ctx) {
    ctx->id = 3355;
    ctx->coefficient = 6.3;
    ctx->flags = 63;
}

int compute_LavXKot(int input) {
    int result = input * 14;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} UtasPAmu_ctx_t;

void init_ctx(UtasPAmu_ctx_t *ctx) {
    ctx->id = 4619;
    ctx->coefficient = 5.0;
    ctx->flags = 180;
}

int compute_2AvJzzr(int input) {
    int result = input * 58;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

int compute_DyXUBwI(int input) {
    int result = input * 68;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

int compute_z4uhQRr(int input) {
    int result = input * 65;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} O5lD1vGj_ctx_t;

void init_ctx(O5lD1vGj_ctx_t *ctx) {
    ctx->id = 8763;
    ctx->coefficient = 8.8;
    ctx->flags = 30;
}

typedef struct {
    uint32_t id;
    char name[81];
    double coefficient;
    uint8_t flags;
} sULmfdso_ctx_t;

void init_ctx(sULmfdso_ctx_t *ctx) {
    ctx->id = 7512;
    ctx->coefficient = 7.9;
    ctx->flags = 195;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} X1wdDgfm_ctx_t;

void init_ctx(X1wdDgfm_ctx_t *ctx) {
    ctx->id = 7990;
    ctx->coefficient = 3.2;
    ctx->flags = 64;
}

int compute_RCej9Kk(int input) {
    int result = input * 60;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} w4XFziOQ_ctx_t;

void init_ctx(w4XFziOQ_ctx_t *ctx) {
    ctx->id = 4530;
    ctx->coefficient = 1.8;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} eVmf4BHS_ctx_t;

void init_ctx(eVmf4BHS_ctx_t *ctx) {
    ctx->id = 4213;
    ctx->coefficient = 9.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} y8c4K58c_ctx_t;

void init_ctx(y8c4K58c_ctx_t *ctx) {
    ctx->id = 6444;
    ctx->coefficient = 8.2;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} KIU4EpkI_ctx_t;

void init_ctx(KIU4EpkI_ctx_t *ctx) {
    ctx->id = 9220;
    ctx->coefficient = 3.1;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} g4DLrRSF_ctx_t;

void init_ctx(g4DLrRSF_ctx_t *ctx) {
    ctx->id = 3242;
    ctx->coefficient = 2.2;
    ctx->flags = 169;
}

int compute_Y3FI4vc(int input) {
    int result = input * 20;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} smJV6UOK_ctx_t;

void init_ctx(smJV6UOK_ctx_t *ctx) {
    ctx->id = 3616;
    ctx->coefficient = 2.7;
    ctx->flags = 126;
}

int compute_8RTYrNz(int input) {
    int result = input * 35;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} AqwnF3tn_ctx_t;

void init_ctx(AqwnF3tn_ctx_t *ctx) {
    ctx->id = 7408;
    ctx->coefficient = 6.9;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} jAsDR3vN_ctx_t;

void init_ctx(jAsDR3vN_ctx_t *ctx) {
    ctx->id = 4329;
    ctx->coefficient = 1.7;
    ctx->flags = 1;
}

int compute_dbhB65b(int input) {
    int result = input * 33;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 39rGIZtI_ctx_t;

void init_ctx(39rGIZtI_ctx_t *ctx) {
    ctx->id = 4956;
    ctx->coefficient = 4.9;
    ctx->flags = 71;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} RcoWdRty_ctx_t;

void init_ctx(RcoWdRty_ctx_t *ctx) {
    ctx->id = 3160;
    ctx->coefficient = 2.5;
    ctx->flags = 210;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} lVrhY7ue_ctx_t;

void init_ctx(lVrhY7ue_ctx_t *ctx) {
    ctx->id = 7935;
    ctx->coefficient = 9.5;
    ctx->flags = 254;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} FEM2O6kg_ctx_t;

void init_ctx(FEM2O6kg_ctx_t *ctx) {
    ctx->id = 7020;
    ctx->coefficient = 2.2;
    ctx->flags = 113;
}

int compute_pBIeCeG(int input) {
    int result = input * 37;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

int compute_PtZuKjQ(int input) {
    int result = input * 62;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

int compute_5bmak9Z(int input) {
    int result = input * 56;
    for(int i = 0; i < 11; i++) result += (i * 4);
    return result;
}

int compute_gqQHttL(int input) {
    int result = input * 47;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} m4oRPKfG_ctx_t;

void init_ctx(m4oRPKfG_ctx_t *ctx) {
    ctx->id = 4551;
    ctx->coefficient = 2.6;
    ctx->flags = 118;
}

int compute_st2kRAe(int input) {
    int result = input * 6;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_Jtaa1aG(int input) {
    int result = input * 36;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_QQooV4s(int input) {
    int result = input * 52;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} y4V8nl0r_ctx_t;

void init_ctx(y4V8nl0r_ctx_t *ctx) {
    ctx->id = 1666;
    ctx->coefficient = 3.8;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} EdEHDBVO_ctx_t;

void init_ctx(EdEHDBVO_ctx_t *ctx) {
    ctx->id = 2312;
    ctx->coefficient = 6.9;
    ctx->flags = 118;
}

int compute_E1Wi4Nf(int input) {
    int result = input * 68;
    for(int i = 0; i < 15; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} PfMe47Pf_ctx_t;

void init_ctx(PfMe47Pf_ctx_t *ctx) {
    ctx->id = 2321;
    ctx->coefficient = 8.2;
    ctx->flags = 196;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} TrhiA8BC_ctx_t;

void init_ctx(TrhiA8BC_ctx_t *ctx) {
    ctx->id = 4900;
    ctx->coefficient = 1.3;
    ctx->flags = 184;
}

int compute_Y4Xgoaz(int input) {
    int result = input * 67;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_GBz0jKz(int input) {
    int result = input * 25;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 2zscQZyP_ctx_t;

void init_ctx(2zscQZyP_ctx_t *ctx) {
    ctx->id = 7019;
    ctx->coefficient = 6.1;
    ctx->flags = 141;
}

int compute_xoK6eTQ(int input) {
    int result = input * 22;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} INbGmyrr_ctx_t;

void init_ctx(INbGmyrr_ctx_t *ctx) {
    ctx->id = 1219;
    ctx->coefficient = 6.6;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 96vSmEb6_ctx_t;

void init_ctx(96vSmEb6_ctx_t *ctx) {
    ctx->id = 2945;
    ctx->coefficient = 7.9;
    ctx->flags = 156;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} FnhmHGC5_ctx_t;

void init_ctx(FnhmHGC5_ctx_t *ctx) {
    ctx->id = 3933;
    ctx->coefficient = 4.1;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} tsQyMoyY_ctx_t;

void init_ctx(tsQyMoyY_ctx_t *ctx) {
    ctx->id = 1055;
    ctx->coefficient = 1.3;
    ctx->flags = 225;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} LlmUGDpW_ctx_t;

void init_ctx(LlmUGDpW_ctx_t *ctx) {
    ctx->id = 2784;
    ctx->coefficient = 0.7;
    ctx->flags = 75;
}

int compute_AKy3Ncq(int input) {
    int result = input * 32;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} CyJIjlwF_ctx_t;

void init_ctx(CyJIjlwF_ctx_t *ctx) {
    ctx->id = 9223;
    ctx->coefficient = 2.4;
    ctx->flags = 127;
}

int compute_YQ5MFBr(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_xEZkyx7(int input) {
    int result = input * 43;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_m6KY6vt(int input) {
    int result = input * 32;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_Flv8R1y(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

int compute_tod3cIk(int input) {
    int result = input * 2;
    for(int i = 0; i < 18; i++) result += (i * 3);
    return result;
}

int compute_y5sbEER(int input) {
    int result = input * 17;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_dlB0EgB(int input) {
    int result = input * 22;
    for(int i = 0; i < 11; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} Dm2dZO5l_ctx_t;

void init_ctx(Dm2dZO5l_ctx_t *ctx) {
    ctx->id = 5187;
    ctx->coefficient = 1.3;
    ctx->flags = 66;
}

int compute_qZSq8tj(int input) {
    int result = input * 49;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} XOMqpqLx_ctx_t;

void init_ctx(XOMqpqLx_ctx_t *ctx) {
    ctx->id = 1695;
    ctx->coefficient = 0.2;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} T0rYt4Ql_ctx_t;

void init_ctx(T0rYt4Ql_ctx_t *ctx) {
    ctx->id = 8852;
    ctx->coefficient = 2.6;
    ctx->flags = 138;
}

int compute_x30kyXc(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

int compute_oAUdDFB(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_VYF1EdC(int input) {
    int result = input * 64;
    for(int i = 0; i < 13; i++) result += (i * 3);
    return result;
}

int compute_oPHpJRO(int input) {
    int result = input * 38;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_y34r15Z(int input) {
    int result = input * 49;
    for(int i = 0; i < 17; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} Odopqh7t_ctx_t;

void init_ctx(Odopqh7t_ctx_t *ctx) {
    ctx->id = 8910;
    ctx->coefficient = 1.9;
    ctx->flags = 235;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} KaYysiy8_ctx_t;

void init_ctx(KaYysiy8_ctx_t *ctx) {
    ctx->id = 1482;
    ctx->coefficient = 5.5;
    ctx->flags = 20;
}

int compute_2HqJqPd(int input) {
    int result = input * 33;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Eb4chuO9_ctx_t;

void init_ctx(Eb4chuO9_ctx_t *ctx) {
    ctx->id = 3701;
    ctx->coefficient = 3.0;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 6CITifip_ctx_t;

void init_ctx(6CITifip_ctx_t *ctx) {
    ctx->id = 3095;
    ctx->coefficient = 0.1;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} GPjyebN3_ctx_t;

void init_ctx(GPjyebN3_ctx_t *ctx) {
    ctx->id = 8001;
    ctx->coefficient = 10.0;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} i7xiV4t4_ctx_t;

void init_ctx(i7xiV4t4_ctx_t *ctx) {
    ctx->id = 7539;
    ctx->coefficient = 4.1;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} lfMaTqdT_ctx_t;

void init_ctx(lfMaTqdT_ctx_t *ctx) {
    ctx->id = 9662;
    ctx->coefficient = 1.6;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} j6nw2Jia_ctx_t;

void init_ctx(j6nw2Jia_ctx_t *ctx) {
    ctx->id = 7941;
    ctx->coefficient = 3.8;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} Lj7gvl3q_ctx_t;

void init_ctx(Lj7gvl3q_ctx_t *ctx) {
    ctx->id = 6888;
    ctx->coefficient = 7.2;
    ctx->flags = 190;
}

int compute_1lpsWGv(int input) {
    int result = input * 19;
    for(int i = 0; i < 8; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} hk4vfJQr_ctx_t;

void init_ctx(hk4vfJQr_ctx_t *ctx) {
    ctx->id = 8816;
    ctx->coefficient = 6.9;
    ctx->flags = 28;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} U9pH0hR3_ctx_t;

void init_ctx(U9pH0hR3_ctx_t *ctx) {
    ctx->id = 1977;
    ctx->coefficient = 5.1;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} J0vBTgtj_ctx_t;

void init_ctx(J0vBTgtj_ctx_t *ctx) {
    ctx->id = 6193;
    ctx->coefficient = 1.1;
    ctx->flags = 70;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} RjO4LY8j_ctx_t;

void init_ctx(RjO4LY8j_ctx_t *ctx) {
    ctx->id = 5996;
    ctx->coefficient = 0.7;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} gnUq28Bn_ctx_t;

void init_ctx(gnUq28Bn_ctx_t *ctx) {
    ctx->id = 6324;
    ctx->coefficient = 7.5;
    ctx->flags = 38;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} Kyke9AMc_ctx_t;

void init_ctx(Kyke9AMc_ctx_t *ctx) {
    ctx->id = 4705;
    ctx->coefficient = 1.3;
    ctx->flags = 224;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} nHkBcZuE_ctx_t;

void init_ctx(nHkBcZuE_ctx_t *ctx) {
    ctx->id = 5978;
    ctx->coefficient = 1.5;
    ctx->flags = 30;
}

int compute_jwwhTfR(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 4);
    return result;
}

int compute_JHBOjpH(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} YjyzwbbU_ctx_t;

void init_ctx(YjyzwbbU_ctx_t *ctx) {
    ctx->id = 7138;
    ctx->coefficient = 9.5;
    ctx->flags = 30;
}

int compute_NAorC71(int input) {
    int result = input * 26;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} NzIYgZnf_ctx_t;

void init_ctx(NzIYgZnf_ctx_t *ctx) {
    ctx->id = 7981;
    ctx->coefficient = 5.0;
    ctx->flags = 248;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 0OScL07a_ctx_t;

void init_ctx(0OScL07a_ctx_t *ctx) {
    ctx->id = 7694;
    ctx->coefficient = 5.3;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} YO5MQZcA_ctx_t;

void init_ctx(YO5MQZcA_ctx_t *ctx) {
    ctx->id = 2605;
    ctx->coefficient = 9.3;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} R5ryGYzd_ctx_t;

void init_ctx(R5ryGYzd_ctx_t *ctx) {
    ctx->id = 5095;
    ctx->coefficient = 2.5;
    ctx->flags = 220;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} YfSN4GdR_ctx_t;

void init_ctx(YfSN4GdR_ctx_t *ctx) {
    ctx->id = 1325;
    ctx->coefficient = 1.6;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 0KjxsdGr_ctx_t;

void init_ctx(0KjxsdGr_ctx_t *ctx) {
    ctx->id = 3761;
    ctx->coefficient = 10.0;
    ctx->flags = 111;
}

int compute_guC0NZT(int input) {
    int result = input * 50;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} RnjApOkf_ctx_t;

void init_ctx(RnjApOkf_ctx_t *ctx) {
    ctx->id = 9673;
    ctx->coefficient = 1.9;
    ctx->flags = 134;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} PzDvZH6Q_ctx_t;

void init_ctx(PzDvZH6Q_ctx_t *ctx) {
    ctx->id = 1015;
    ctx->coefficient = 2.1;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} kBenkGiR_ctx_t;

void init_ctx(kBenkGiR_ctx_t *ctx) {
    ctx->id = 5606;
    ctx->coefficient = 0.7;
    ctx->flags = 168;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} uLw8y7FP_ctx_t;

void init_ctx(uLw8y7FP_ctx_t *ctx) {
    ctx->id = 3961;
    ctx->coefficient = 1.1;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 0XAbfUbi_ctx_t;

void init_ctx(0XAbfUbi_ctx_t *ctx) {
    ctx->id = 8544;
    ctx->coefficient = 2.2;
    ctx->flags = 199;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} ngQhdZYe_ctx_t;

void init_ctx(ngQhdZYe_ctx_t *ctx) {
    ctx->id = 8535;
    ctx->coefficient = 4.8;
    ctx->flags = 34;
}

int compute_VpvjsUV(int input) {
    int result = input * 58;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} qBoWYU0w_ctx_t;

void init_ctx(qBoWYU0w_ctx_t *ctx) {
    ctx->id = 1584;
    ctx->coefficient = 1.2;
    ctx->flags = 215;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} EW1SU2Hh_ctx_t;

void init_ctx(EW1SU2Hh_ctx_t *ctx) {
    ctx->id = 9557;
    ctx->coefficient = 2.6;
    ctx->flags = 199;
}

int compute_Q7wyTOR(int input) {
    int result = input * 4;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} x6JnlDzu_ctx_t;

void init_ctx(x6JnlDzu_ctx_t *ctx) {
    ctx->id = 8499;
    ctx->coefficient = 3.8;
    ctx->flags = 108;
}

int compute_YKt1OX2(int input) {
    int result = input * 45;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} PIMViJGs_ctx_t;

void init_ctx(PIMViJGs_ctx_t *ctx) {
    ctx->id = 9995;
    ctx->coefficient = 3.1;
    ctx->flags = 126;
}

int compute_dp0Olpt(int input) {
    int result = input * 13;
    for(int i = 0; i < 8; i++) result += (i * 3);
    return result;
}

int compute_RaPHqeK(int input) {
    int result = input * 44;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_q2U0HVE(int input) {
    int result = input * 30;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} avqbZUgg_ctx_t;

void init_ctx(avqbZUgg_ctx_t *ctx) {
    ctx->id = 1908;
    ctx->coefficient = 2.2;
    ctx->flags = 9;
}

int compute_uragoff(int input) {
    int result = input * 5;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_2Nsb98m(int input) {
    int result = input * 70;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

int compute_bphNZM5(int input) {
    int result = input * 51;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

int compute_wb6HxWj(int input) {
    int result = input * 36;
    for(int i = 0; i < 15; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} pedKyaTk_ctx_t;

void init_ctx(pedKyaTk_ctx_t *ctx) {
    ctx->id = 7083;
    ctx->coefficient = 8.2;
    ctx->flags = 84;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} HeSGE7zm_ctx_t;

void init_ctx(HeSGE7zm_ctx_t *ctx) {
    ctx->id = 9603;
    ctx->coefficient = 7.8;
    ctx->flags = 1;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} P4zAsaVz_ctx_t;

void init_ctx(P4zAsaVz_ctx_t *ctx) {
    ctx->id = 9699;
    ctx->coefficient = 9.4;
    ctx->flags = 44;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} 422Djy69_ctx_t;

void init_ctx(422Djy69_ctx_t *ctx) {
    ctx->id = 8493;
    ctx->coefficient = 9.7;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} qYzPJMQT_ctx_t;

void init_ctx(qYzPJMQT_ctx_t *ctx) {
    ctx->id = 6687;
    ctx->coefficient = 4.8;
    ctx->flags = 200;
}

int compute_z6FVn3K(int input) {
    int result = input * 68;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

int compute_ZsJVSyA(int input) {
    int result = input * 48;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} vAQZcWFe_ctx_t;

void init_ctx(vAQZcWFe_ctx_t *ctx) {
    ctx->id = 2737;
    ctx->coefficient = 4.8;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} xyK0cxn0_ctx_t;

void init_ctx(xyK0cxn0_ctx_t *ctx) {
    ctx->id = 8698;
    ctx->coefficient = 3.4;
    ctx->flags = 90;
}

int compute_SgYly2s(int input) {
    int result = input * 21;
    for(int i = 0; i < 15; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} BK9MWvOA_ctx_t;

void init_ctx(BK9MWvOA_ctx_t *ctx) {
    ctx->id = 5004;
    ctx->coefficient = 9.5;
    ctx->flags = 14;
}

int compute_DNdUUDI(int input) {
    int result = input * 34;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_Ii2kotO(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} KFxkU0BA_ctx_t;

void init_ctx(KFxkU0BA_ctx_t *ctx) {
    ctx->id = 5475;
    ctx->coefficient = 1.4;
    ctx->flags = 250;
}

int compute_QaG6rRE(int input) {
    int result = input * 21;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 3dTp4CsG_ctx_t;

void init_ctx(3dTp4CsG_ctx_t *ctx) {
    ctx->id = 4634;
    ctx->coefficient = 6.5;
    ctx->flags = 172;
}

int compute_z1jiyUs(int input) {
    int result = input * 2;
    for(int i = 0; i < 5; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 0j3jUK2v_ctx_t;

void init_ctx(0j3jUK2v_ctx_t *ctx) {
    ctx->id = 9585;
    ctx->coefficient = 5.5;
    ctx->flags = 40;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 0NuZ9uoM_ctx_t;

void init_ctx(0NuZ9uoM_ctx_t *ctx) {
    ctx->id = 2575;
    ctx->coefficient = 5.7;
    ctx->flags = 188;
}

typedef struct {
    uint32_t id;
    char name[48];
    double coefficient;
    uint8_t flags;
} tdK3FzGM_ctx_t;

void init_ctx(tdK3FzGM_ctx_t *ctx) {
    ctx->id = 5238;
    ctx->coefficient = 8.2;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Rs8zT4j1_ctx_t;

void init_ctx(Rs8zT4j1_ctx_t *ctx) {
    ctx->id = 7041;
    ctx->coefficient = 3.7;
    ctx->flags = 191;
}

int compute_FJHEeZX(int input) {
    int result = input * 21;
    for(int i = 0; i < 9; i++) result += (i * 3);
    return result;
}

int compute_cRPCJ80(int input) {
    int result = input * 17;
    for(int i = 0; i < 3; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} y0YxtFzG_ctx_t;

void init_ctx(y0YxtFzG_ctx_t *ctx) {
    ctx->id = 9628;
    ctx->coefficient = 10.0;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 9Aw4euh2_ctx_t;

void init_ctx(9Aw4euh2_ctx_t *ctx) {
    ctx->id = 9696;
    ctx->coefficient = 8.3;
    ctx->flags = 132;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} pWE10qqW_ctx_t;

void init_ctx(pWE10qqW_ctx_t *ctx) {
    ctx->id = 5741;
    ctx->coefficient = 0.9;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} wOs6c2U6_ctx_t;

void init_ctx(wOs6c2U6_ctx_t *ctx) {
    ctx->id = 2611;
    ctx->coefficient = 0.2;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} KA0ay7vI_ctx_t;

void init_ctx(KA0ay7vI_ctx_t *ctx) {
    ctx->id = 9213;
    ctx->coefficient = 2.0;
    ctx->flags = 231;
}

int compute_i8uxHjc(int input) {
    int result = input * 9;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} nYXS2zN0_ctx_t;

void init_ctx(nYXS2zN0_ctx_t *ctx) {
    ctx->id = 2448;
    ctx->coefficient = 8.1;
    ctx->flags = 165;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} 0Hb7AE50_ctx_t;

void init_ctx(0Hb7AE50_ctx_t *ctx) {
    ctx->id = 5277;
    ctx->coefficient = 7.3;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} zOWJ5rXd_ctx_t;

void init_ctx(zOWJ5rXd_ctx_t *ctx) {
    ctx->id = 7083;
    ctx->coefficient = 2.5;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} PTeaV8at_ctx_t;

void init_ctx(PTeaV8at_ctx_t *ctx) {
    ctx->id = 9410;
    ctx->coefficient = 0.4;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} GRFQKbV8_ctx_t;

void init_ctx(GRFQKbV8_ctx_t *ctx) {
    ctx->id = 2436;
    ctx->coefficient = 0.4;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} xnpBZsfN_ctx_t;

void init_ctx(xnpBZsfN_ctx_t *ctx) {
    ctx->id = 2121;
    ctx->coefficient = 4.1;
    ctx->flags = 212;
}

int compute_wEjCfJ8(int input) {
    int result = input * 46;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} VrqApuVi_ctx_t;

void init_ctx(VrqApuVi_ctx_t *ctx) {
    ctx->id = 7143;
    ctx->coefficient = 3.9;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} nf1EnPTF_ctx_t;

void init_ctx(nf1EnPTF_ctx_t *ctx) {
    ctx->id = 1137;
    ctx->coefficient = 4.3;
    ctx->flags = 91;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} gaKVXM8d_ctx_t;

void init_ctx(gaKVXM8d_ctx_t *ctx) {
    ctx->id = 8645;
    ctx->coefficient = 10.0;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} UWjCCCqJ_ctx_t;

void init_ctx(UWjCCCqJ_ctx_t *ctx) {
    ctx->id = 6010;
    ctx->coefficient = 3.9;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} XcfS68Nf_ctx_t;

void init_ctx(XcfS68Nf_ctx_t *ctx) {
    ctx->id = 9447;
    ctx->coefficient = 5.2;
    ctx->flags = 240;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} cnVGFFuf_ctx_t;

void init_ctx(cnVGFFuf_ctx_t *ctx) {
    ctx->id = 7435;
    ctx->coefficient = 5.9;
    ctx->flags = 182;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} EfkupIdu_ctx_t;

void init_ctx(EfkupIdu_ctx_t *ctx) {
    ctx->id = 6580;
    ctx->coefficient = 2.1;
    ctx->flags = 47;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 3xqpMtON_ctx_t;

void init_ctx(3xqpMtON_ctx_t *ctx) {
    ctx->id = 2309;
    ctx->coefficient = 0.9;
    ctx->flags = 118;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} mqT0zu8u_ctx_t;

void init_ctx(mqT0zu8u_ctx_t *ctx) {
    ctx->id = 9878;
    ctx->coefficient = 4.4;
    ctx->flags = 86;
}

int compute_5XeNk7b(int input) {
    int result = input * 41;
    for(int i = 0; i < 13; i++) result += (i * 2);
    return result;
}

int compute_p3A8GHI(int input) {
    int result = input * 30;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xnLkqvZw_ctx_t;

void init_ctx(xnLkqvZw_ctx_t *ctx) {
    ctx->id = 8796;
    ctx->coefficient = 2.2;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} KHfUrVSC_ctx_t;

void init_ctx(KHfUrVSC_ctx_t *ctx) {
    ctx->id = 8258;
    ctx->coefficient = 6.7;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} MWbQ0FGJ_ctx_t;

void init_ctx(MWbQ0FGJ_ctx_t *ctx) {
    ctx->id = 4371;
    ctx->coefficient = 2.2;
    ctx->flags = 27;
}

int compute_Qzq36eC(int input) {
    int result = input * 41;
    for(int i = 0; i < 14; i++) result += (i * 1);
    return result;
}

int compute_Gvx7TFJ(int input) {
    int result = input * 10;
    for(int i = 0; i < 6; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} vpAaQGWY_ctx_t;

void init_ctx(vpAaQGWY_ctx_t *ctx) {
    ctx->id = 6707;
    ctx->coefficient = 5.7;
    ctx->flags = 213;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 7F4gifpe_ctx_t;

void init_ctx(7F4gifpe_ctx_t *ctx) {
    ctx->id = 6422;
    ctx->coefficient = 4.4;
    ctx->flags = 52;
}

int compute_sHY9Q5L(int input) {
    int result = input * 51;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

int compute_Wj1jgJW(int input) {
    int result = input * 52;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

int compute_uQkyrgF(int input) {
    int result = input * 11;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} HnU2XYrw_ctx_t;

void init_ctx(HnU2XYrw_ctx_t *ctx) {
    ctx->id = 2396;
    ctx->coefficient = 7.1;
    ctx->flags = 164;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} fq5dNmYr_ctx_t;

void init_ctx(fq5dNmYr_ctx_t *ctx) {
    ctx->id = 4659;
    ctx->coefficient = 4.5;
    ctx->flags = 33;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} GwgoZ5ai_ctx_t;

void init_ctx(GwgoZ5ai_ctx_t *ctx) {
    ctx->id = 6853;
    ctx->coefficient = 2.5;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} H6XQFoQs_ctx_t;

void init_ctx(H6XQFoQs_ctx_t *ctx) {
    ctx->id = 4428;
    ctx->coefficient = 4.2;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} kiNNwIQW_ctx_t;

void init_ctx(kiNNwIQW_ctx_t *ctx) {
    ctx->id = 4692;
    ctx->coefficient = 4.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} 4DSlVTAQ_ctx_t;

void init_ctx(4DSlVTAQ_ctx_t *ctx) {
    ctx->id = 4947;
    ctx->coefficient = 6.7;
    ctx->flags = 82;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} SJy9Sq41_ctx_t;

void init_ctx(SJy9Sq41_ctx_t *ctx) {
    ctx->id = 8079;
    ctx->coefficient = 1.6;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} P5W4XhVE_ctx_t;

void init_ctx(P5W4XhVE_ctx_t *ctx) {
    ctx->id = 9450;
    ctx->coefficient = 2.8;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} pRPncESn_ctx_t;

void init_ctx(pRPncESn_ctx_t *ctx) {
    ctx->id = 2626;
    ctx->coefficient = 7.7;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} MkctKEQb_ctx_t;

void init_ctx(MkctKEQb_ctx_t *ctx) {
    ctx->id = 7174;
    ctx->coefficient = 3.6;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} cjopxcxW_ctx_t;

void init_ctx(cjopxcxW_ctx_t *ctx) {
    ctx->id = 9366;
    ctx->coefficient = 0.1;
    ctx->flags = 13;
}

int compute_4nnR38T(int input) {
    int result = input * 2;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} uhK6KZtL_ctx_t;

void init_ctx(uhK6KZtL_ctx_t *ctx) {
    ctx->id = 6507;
    ctx->coefficient = 8.3;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} OEhbGJ5o_ctx_t;

void init_ctx(OEhbGJ5o_ctx_t *ctx) {
    ctx->id = 2365;
    ctx->coefficient = 7.2;
    ctx->flags = 106;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} Zoea94tJ_ctx_t;

void init_ctx(Zoea94tJ_ctx_t *ctx) {
    ctx->id = 9030;
    ctx->coefficient = 8.4;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} dOyUXJ0A_ctx_t;

void init_ctx(dOyUXJ0A_ctx_t *ctx) {
    ctx->id = 7131;
    ctx->coefficient = 8.6;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} UQRtAW0N_ctx_t;

void init_ctx(UQRtAW0N_ctx_t *ctx) {
    ctx->id = 7669;
    ctx->coefficient = 1.0;
    ctx->flags = 253;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} UFSPsOA5_ctx_t;

void init_ctx(UFSPsOA5_ctx_t *ctx) {
    ctx->id = 5030;
    ctx->coefficient = 7.8;
    ctx->flags = 18;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} NbqVKznR_ctx_t;

void init_ctx(NbqVKznR_ctx_t *ctx) {
    ctx->id = 7349;
    ctx->coefficient = 9.5;
    ctx->flags = 120;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} GtvKYcWD_ctx_t;

void init_ctx(GtvKYcWD_ctx_t *ctx) {
    ctx->id = 3547;
    ctx->coefficient = 9.6;
    ctx->flags = 163;
}

int compute_uF6BwDp(int input) {
    int result = input * 56;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} qLIsQETy_ctx_t;

void init_ctx(qLIsQETy_ctx_t *ctx) {
    ctx->id = 2138;
    ctx->coefficient = 8.2;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} 5TJcbk4B_ctx_t;

void init_ctx(5TJcbk4B_ctx_t *ctx) {
    ctx->id = 2193;
    ctx->coefficient = 3.8;
    ctx->flags = 166;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 6gDbqlMT_ctx_t;

void init_ctx(6gDbqlMT_ctx_t *ctx) {
    ctx->id = 4538;
    ctx->coefficient = 3.3;
    ctx->flags = 32;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} v5Hbm0Am_ctx_t;

void init_ctx(v5Hbm0Am_ctx_t *ctx) {
    ctx->id = 8151;
    ctx->coefficient = 8.0;
    ctx->flags = 111;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} 99Y97cx1_ctx_t;

void init_ctx(99Y97cx1_ctx_t *ctx) {
    ctx->id = 4337;
    ctx->coefficient = 6.4;
    ctx->flags = 175;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} 27C5groR_ctx_t;

void init_ctx(27C5groR_ctx_t *ctx) {
    ctx->id = 6269;
    ctx->coefficient = 6.8;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} DStveOOv_ctx_t;

void init_ctx(DStveOOv_ctx_t *ctx) {
    ctx->id = 3971;
    ctx->coefficient = 6.9;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} NJe3rz1R_ctx_t;

void init_ctx(NJe3rz1R_ctx_t *ctx) {
    ctx->id = 7121;
    ctx->coefficient = 3.3;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} YnzwATwt_ctx_t;

void init_ctx(YnzwATwt_ctx_t *ctx) {
    ctx->id = 5759;
    ctx->coefficient = 2.1;
    ctx->flags = 16;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} cLiOYHEy_ctx_t;

void init_ctx(cLiOYHEy_ctx_t *ctx) {
    ctx->id = 1830;
    ctx->coefficient = 0.5;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} hwf0Msph_ctx_t;

void init_ctx(hwf0Msph_ctx_t *ctx) {
    ctx->id = 1023;
    ctx->coefficient = 7.2;
    ctx->flags = 19;
}

int compute_1Ieyvwr(int input) {
    int result = input * 67;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_UcFkO5n(int input) {
    int result = input * 19;
    for(int i = 0; i < 5; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} cqbgjMc4_ctx_t;

void init_ctx(cqbgjMc4_ctx_t *ctx) {
    ctx->id = 5202;
    ctx->coefficient = 4.2;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} 7QX5HUuW_ctx_t;

void init_ctx(7QX5HUuW_ctx_t *ctx) {
    ctx->id = 9500;
    ctx->coefficient = 2.8;
    ctx->flags = 226;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0YBdifuL_ctx_t;

void init_ctx(0YBdifuL_ctx_t *ctx) {
    ctx->id = 1427;
    ctx->coefficient = 2.2;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} AgMXMriw_ctx_t;

void init_ctx(AgMXMriw_ctx_t *ctx) {
    ctx->id = 5382;
    ctx->coefficient = 0.9;
    ctx->flags = 210;
}

int compute_qsxy5nz(int input) {
    int result = input * 16;
    for(int i = 0; i < 9; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} NNcIsOIz_ctx_t;

void init_ctx(NNcIsOIz_ctx_t *ctx) {
    ctx->id = 7677;
    ctx->coefficient = 1.5;
    ctx->flags = 41;
}

int compute_DT02f4F(int input) {
    int result = input * 53;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} sUG2TyO0_ctx_t;

void init_ctx(sUG2TyO0_ctx_t *ctx) {
    ctx->id = 8429;
    ctx->coefficient = 4.7;
    ctx->flags = 90;
}

int compute_wIeYmYm(int input) {
    int result = input * 23;
    for(int i = 0; i < 5; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} yUjXNFM6_ctx_t;

void init_ctx(yUjXNFM6_ctx_t *ctx) {
    ctx->id = 9045;
    ctx->coefficient = 9.9;
    ctx->flags = 25;
}

int compute_iCOGAM1(int input) {
    int result = input * 4;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} Pn9wD4PJ_ctx_t;

void init_ctx(Pn9wD4PJ_ctx_t *ctx) {
    ctx->id = 7037;
    ctx->coefficient = 3.9;
    ctx->flags = 203;
}

typedef struct {
    uint32_t id;
    char name[54];
    double coefficient;
    uint8_t flags;
} DVmdWGhT_ctx_t;

void init_ctx(DVmdWGhT_ctx_t *ctx) {
    ctx->id = 6843;
    ctx->coefficient = 5.6;
    ctx->flags = 94;
}

int compute_wArh6YG(int input) {
    int result = input * 47;
    for(int i = 0; i < 8; i++) result += (i * 2);
    return result;
}

int compute_YUJisB1(int input) {
    int result = input * 11;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} IxfKx9cu_ctx_t;

void init_ctx(IxfKx9cu_ctx_t *ctx) {
    ctx->id = 8796;
    ctx->coefficient = 1.3;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} JoCC0CTr_ctx_t;

void init_ctx(JoCC0CTr_ctx_t *ctx) {
    ctx->id = 3263;
    ctx->coefficient = 9.4;
    ctx->flags = 151;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} YXa521bU_ctx_t;

void init_ctx(YXa521bU_ctx_t *ctx) {
    ctx->id = 4390;
    ctx->coefficient = 0.1;
    ctx->flags = 186;
}

int compute_CZCVKXx(int input) {
    int result = input * 69;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_eeqwgh0(int input) {
    int result = input * 28;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_HKeHQ3l(int input) {
    int result = input * 38;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_9EiD6T7(int input) {
    int result = input * 7;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

int compute_GysjYx4(int input) {
    int result = input * 70;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[70];
    double coefficient;
    uint8_t flags;
} vmcoBagK_ctx_t;

void init_ctx(vmcoBagK_ctx_t *ctx) {
    ctx->id = 6181;
    ctx->coefficient = 4.4;
    ctx->flags = 58;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} 6f3xzq1s_ctx_t;

void init_ctx(6f3xzq1s_ctx_t *ctx) {
    ctx->id = 1614;
    ctx->coefficient = 6.7;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} Jr8of2wo_ctx_t;

void init_ctx(Jr8of2wo_ctx_t *ctx) {
    ctx->id = 4883;
    ctx->coefficient = 3.9;
    ctx->flags = 45;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} DVF5HGcd_ctx_t;

void init_ctx(DVF5HGcd_ctx_t *ctx) {
    ctx->id = 6270;
    ctx->coefficient = 8.4;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 31fXAdSw_ctx_t;

void init_ctx(31fXAdSw_ctx_t *ctx) {
    ctx->id = 8391;
    ctx->coefficient = 9.4;
    ctx->flags = 171;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} vUymlKRs_ctx_t;

void init_ctx(vUymlKRs_ctx_t *ctx) {
    ctx->id = 9901;
    ctx->coefficient = 7.6;
    ctx->flags = 68;
}

int compute_pJXiLEA(int input) {
    int result = input * 3;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} 73aVAGJu_ctx_t;

void init_ctx(73aVAGJu_ctx_t *ctx) {
    ctx->id = 5061;
    ctx->coefficient = 9.6;
    ctx->flags = 252;
}

int compute_1kSIB0f(int input) {
    int result = input * 16;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_T33ErYj(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} dYbubGw8_ctx_t;

void init_ctx(dYbubGw8_ctx_t *ctx) {
    ctx->id = 8452;
    ctx->coefficient = 5.0;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} nLeu4i3p_ctx_t;

void init_ctx(nLeu4i3p_ctx_t *ctx) {
    ctx->id = 9828;
    ctx->coefficient = 9.7;
    ctx->flags = 179;
}

int compute_oZ6dJEE(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} a9xZjN8c_ctx_t;

void init_ctx(a9xZjN8c_ctx_t *ctx) {
    ctx->id = 4602;
    ctx->coefficient = 7.4;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 7kVJhEll_ctx_t;

void init_ctx(7kVJhEll_ctx_t *ctx) {
    ctx->id = 7854;
    ctx->coefficient = 8.2;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} FPPMDGUg_ctx_t;

void init_ctx(FPPMDGUg_ctx_t *ctx) {
    ctx->id = 4085;
    ctx->coefficient = 7.8;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} TMAj60nw_ctx_t;

void init_ctx(TMAj60nw_ctx_t *ctx) {
    ctx->id = 8223;
    ctx->coefficient = 1.3;
    ctx->flags = 215;
}

int compute_6Sb5pNJ(int input) {
    int result = input * 27;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

int compute_LkYAo3N(int input) {
    int result = input * 42;
    for(int i = 0; i < 13; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} AVP7PXDn_ctx_t;

void init_ctx(AVP7PXDn_ctx_t *ctx) {
    ctx->id = 4676;
    ctx->coefficient = 7.2;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 5t6sS2sG_ctx_t;

void init_ctx(5t6sS2sG_ctx_t *ctx) {
    ctx->id = 2480;
    ctx->coefficient = 7.8;
    ctx->flags = 249;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ZfMGRlp9_ctx_t;

void init_ctx(ZfMGRlp9_ctx_t *ctx) {
    ctx->id = 5841;
    ctx->coefficient = 9.4;
    ctx->flags = 76;
}

typedef struct {
    uint32_t id;
    char name[59];
    double coefficient;
    uint8_t flags;
} rMSrokpS_ctx_t;

void init_ctx(rMSrokpS_ctx_t *ctx) {
    ctx->id = 4458;
    ctx->coefficient = 8.8;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} Ju0djzss_ctx_t;

void init_ctx(Ju0djzss_ctx_t *ctx) {
    ctx->id = 8480;
    ctx->coefficient = 4.8;
    ctx->flags = 180;
}

int compute_2dpChPO(int input) {
    int result = input * 21;
    for(int i = 0; i < 14; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Jmo0JmEu_ctx_t;

void init_ctx(Jmo0JmEu_ctx_t *ctx) {
    ctx->id = 6595;
    ctx->coefficient = 7.3;
    ctx->flags = 5;
}

int compute_ig7l3iH(int input) {
    int result = input * 21;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

int compute_kbfKnN3(int input) {
    int result = input * 21;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} puurrhBx_ctx_t;

void init_ctx(puurrhBx_ctx_t *ctx) {
    ctx->id = 8428;
    ctx->coefficient = 3.3;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 9ozqZIy3_ctx_t;

void init_ctx(9ozqZIy3_ctx_t *ctx) {
    ctx->id = 4326;
    ctx->coefficient = 8.3;
    ctx->flags = 98;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} 1T0WshxI_ctx_t;

void init_ctx(1T0WshxI_ctx_t *ctx) {
    ctx->id = 9559;
    ctx->coefficient = 6.4;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} LtNybSSF_ctx_t;

void init_ctx(LtNybSSF_ctx_t *ctx) {
    ctx->id = 2163;
    ctx->coefficient = 4.4;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} Gqn3R4V8_ctx_t;

void init_ctx(Gqn3R4V8_ctx_t *ctx) {
    ctx->id = 8507;
    ctx->coefficient = 2.9;
    ctx->flags = 113;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} TdOO7GnM_ctx_t;

void init_ctx(TdOO7GnM_ctx_t *ctx) {
    ctx->id = 4369;
    ctx->coefficient = 6.6;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} Ns7S4w5A_ctx_t;

void init_ctx(Ns7S4w5A_ctx_t *ctx) {
    ctx->id = 2160;
    ctx->coefficient = 7.7;
    ctx->flags = 68;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} xYvhpVkc_ctx_t;

void init_ctx(xYvhpVkc_ctx_t *ctx) {
    ctx->id = 5398;
    ctx->coefficient = 3.1;
    ctx->flags = 243;
}

int compute_5JP8TyP(int input) {
    int result = input * 18;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 0ZnhU6Zo_ctx_t;

void init_ctx(0ZnhU6Zo_ctx_t *ctx) {
    ctx->id = 3560;
    ctx->coefficient = 3.0;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} wYuoDkqG_ctx_t;

void init_ctx(wYuoDkqG_ctx_t *ctx) {
    ctx->id = 5521;
    ctx->coefficient = 6.6;
    ctx->flags = 130;
}

typedef struct {
    uint32_t id;
    char name[60];
    double coefficient;
    uint8_t flags;
} 123suGkD_ctx_t;

void init_ctx(123suGkD_ctx_t *ctx) {
    ctx->id = 9202;
    ctx->coefficient = 5.1;
    ctx->flags = 194;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} hf4jitY7_ctx_t;

void init_ctx(hf4jitY7_ctx_t *ctx) {
    ctx->id = 6511;
    ctx->coefficient = 3.9;
    ctx->flags = 60;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} yLX2vM2v_ctx_t;

void init_ctx(yLX2vM2v_ctx_t *ctx) {
    ctx->id = 9272;
    ctx->coefficient = 3.5;
    ctx->flags = 74;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} DxOVx2g8_ctx_t;

void init_ctx(DxOVx2g8_ctx_t *ctx) {
    ctx->id = 1932;
    ctx->coefficient = 9.3;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[95];
    double coefficient;
    uint8_t flags;
} vFMYi6oE_ctx_t;

void init_ctx(vFMYi6oE_ctx_t *ctx) {
    ctx->id = 9053;
    ctx->coefficient = 2.5;
    ctx->flags = 66;
}

int compute_ZPTh7kA(int input) {
    int result = input * 54;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} r0wwpzAP_ctx_t;

void init_ctx(r0wwpzAP_ctx_t *ctx) {
    ctx->id = 4754;
    ctx->coefficient = 5.9;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} NGolAKFd_ctx_t;

void init_ctx(NGolAKFd_ctx_t *ctx) {
    ctx->id = 7039;
    ctx->coefficient = 5.0;
    ctx->flags = 233;
}

int compute_5ttQ7CI(int input) {
    int result = input * 6;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[40];
    double coefficient;
    uint8_t flags;
} 8IWxu0G2_ctx_t;

void init_ctx(8IWxu0G2_ctx_t *ctx) {
    ctx->id = 7552;
    ctx->coefficient = 3.2;
    ctx->flags = 232;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} uSxAUuPH_ctx_t;

void init_ctx(uSxAUuPH_ctx_t *ctx) {
    ctx->id = 2967;
    ctx->coefficient = 10.0;
    ctx->flags = 104;
}

int compute_GdmepsX(int input) {
    int result = input * 23;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_EROITth(int input) {
    int result = input * 6;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} pTpukglt_ctx_t;

void init_ctx(pTpukglt_ctx_t *ctx) {
    ctx->id = 6072;
    ctx->coefficient = 5.1;
    ctx->flags = 247;
}

int compute_g4c73RK(int input) {
    int result = input * 41;
    for(int i = 0; i < 10; i++) result += (i * 2);
    return result;
}

int compute_bZBGLo6(int input) {
    int result = input * 63;
    for(int i = 0; i < 9; i++) result += (i * 4);
    return result;
}

int compute_Wus1uNR(int input) {
    int result = input * 13;
    for(int i = 0; i < 18; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} Pl2NLcFA_ctx_t;

void init_ctx(Pl2NLcFA_ctx_t *ctx) {
    ctx->id = 8426;
    ctx->coefficient = 3.8;
    ctx->flags = 229;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} GkxK0u9M_ctx_t;

void init_ctx(GkxK0u9M_ctx_t *ctx) {
    ctx->id = 3543;
    ctx->coefficient = 3.3;
    ctx->flags = 198;
}

int compute_dNvMOVq(int input) {
    int result = input * 69;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[41];
    double coefficient;
    uint8_t flags;
} LxGBZQMj_ctx_t;

void init_ctx(LxGBZQMj_ctx_t *ctx) {
    ctx->id = 3944;
    ctx->coefficient = 4.7;
    ctx->flags = 206;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} gfqkWmID_ctx_t;

void init_ctx(gfqkWmID_ctx_t *ctx) {
    ctx->id = 6877;
    ctx->coefficient = 2.2;
    ctx->flags = 228;
}

typedef struct {
    uint32_t id;
    char name[87];
    double coefficient;
    uint8_t flags;
} 9tR5znfY_ctx_t;

void init_ctx(9tR5znfY_ctx_t *ctx) {
    ctx->id = 1747;
    ctx->coefficient = 3.2;
    ctx->flags = 187;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} OK4JTp9X_ctx_t;

void init_ctx(OK4JTp9X_ctx_t *ctx) {
    ctx->id = 4217;
    ctx->coefficient = 0.7;
    ctx->flags = 32;
}

int compute_orESV9Y(int input) {
    int result = input * 50;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} rFnyeTp9_ctx_t;

void init_ctx(rFnyeTp9_ctx_t *ctx) {
    ctx->id = 8942;
    ctx->coefficient = 2.5;
    ctx->flags = 112;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} 25eK5PFZ_ctx_t;

void init_ctx(25eK5PFZ_ctx_t *ctx) {
    ctx->id = 9905;
    ctx->coefficient = 3.2;
    ctx->flags = 141;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 7a8YQJuC_ctx_t;

void init_ctx(7a8YQJuC_ctx_t *ctx) {
    ctx->id = 9348;
    ctx->coefficient = 3.5;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} u9G6hl7z_ctx_t;

void init_ctx(u9G6hl7z_ctx_t *ctx) {
    ctx->id = 7484;
    ctx->coefficient = 5.8;
    ctx->flags = 203;
}

int compute_6qNnNc9(int input) {
    int result = input * 69;
    for(int i = 0; i < 6; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} x5bJPJKy_ctx_t;

void init_ctx(x5bJPJKy_ctx_t *ctx) {
    ctx->id = 4148;
    ctx->coefficient = 9.6;
    ctx->flags = 116;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} xtySRMYp_ctx_t;

void init_ctx(xtySRMYp_ctx_t *ctx) {
    ctx->id = 9587;
    ctx->coefficient = 5.1;
    ctx->flags = 192;
}

int compute_QxiXzz8(int input) {
    int result = input * 32;
    for(int i = 0; i < 16; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} hHkFmYPW_ctx_t;

void init_ctx(hHkFmYPW_ctx_t *ctx) {
    ctx->id = 4439;
    ctx->coefficient = 9.5;
    ctx->flags = 110;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} L0OLv2bU_ctx_t;

void init_ctx(L0OLv2bU_ctx_t *ctx) {
    ctx->id = 3700;
    ctx->coefficient = 9.1;
    ctx->flags = 41;
}

int compute_Rvd7aHr(int input) {
    int result = input * 55;
    for(int i = 0; i < 12; i++) result += (i * 1);
    return result;
}

int compute_3vXBU7G(int input) {
    int result = input * 23;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} Z14cIPtA_ctx_t;

void init_ctx(Z14cIPtA_ctx_t *ctx) {
    ctx->id = 8782;
    ctx->coefficient = 9.3;
    ctx->flags = 56;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 6VNeQsBh_ctx_t;

void init_ctx(6VNeQsBh_ctx_t *ctx) {
    ctx->id = 4710;
    ctx->coefficient = 9.9;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} itc6fsaj_ctx_t;

void init_ctx(itc6fsaj_ctx_t *ctx) {
    ctx->id = 1720;
    ctx->coefficient = 3.7;
    ctx->flags = 176;
}

typedef struct {
    uint32_t id;
    char name[51];
    double coefficient;
    uint8_t flags;
} vazDb0uj_ctx_t;

void init_ctx(vazDb0uj_ctx_t *ctx) {
    ctx->id = 6470;
    ctx->coefficient = 7.0;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} Je8TqUPL_ctx_t;

void init_ctx(Je8TqUPL_ctx_t *ctx) {
    ctx->id = 8568;
    ctx->coefficient = 6.2;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} hYenQdqQ_ctx_t;

void init_ctx(hYenQdqQ_ctx_t *ctx) {
    ctx->id = 7871;
    ctx->coefficient = 3.5;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} mcpMbaoj_ctx_t;

void init_ctx(mcpMbaoj_ctx_t *ctx) {
    ctx->id = 4161;
    ctx->coefficient = 1.9;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} RUGtiUFS_ctx_t;

void init_ctx(RUGtiUFS_ctx_t *ctx) {
    ctx->id = 1795;
    ctx->coefficient = 9.1;
    ctx->flags = 139;
}

int compute_biXirMh(int input) {
    int result = input * 51;
    for(int i = 0; i < 12; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} eKILrKQY_ctx_t;

void init_ctx(eKILrKQY_ctx_t *ctx) {
    ctx->id = 3589;
    ctx->coefficient = 5.7;
    ctx->flags = 176;
}

int compute_4LCry1H(int input) {
    int result = input * 2;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} GSRMgLGa_ctx_t;

void init_ctx(GSRMgLGa_ctx_t *ctx) {
    ctx->id = 1569;
    ctx->coefficient = 6.3;
    ctx->flags = 186;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} UfwxmvWJ_ctx_t;

void init_ctx(UfwxmvWJ_ctx_t *ctx) {
    ctx->id = 5675;
    ctx->coefficient = 4.8;
    ctx->flags = 48;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} bWL56ajI_ctx_t;

void init_ctx(bWL56ajI_ctx_t *ctx) {
    ctx->id = 9105;
    ctx->coefficient = 8.1;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} Ak12NsKS_ctx_t;

void init_ctx(Ak12NsKS_ctx_t *ctx) {
    ctx->id = 3758;
    ctx->coefficient = 2.2;
    ctx->flags = 80;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 4bYZSXXM_ctx_t;

void init_ctx(4bYZSXXM_ctx_t *ctx) {
    ctx->id = 6672;
    ctx->coefficient = 6.9;
    ctx->flags = 132;
}

int compute_DpxN07j(int input) {
    int result = input * 6;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} aC0Faiew_ctx_t;

void init_ctx(aC0Faiew_ctx_t *ctx) {
    ctx->id = 3319;
    ctx->coefficient = 9.6;
    ctx->flags = 49;
}

typedef struct {
    uint32_t id;
    char name[83];
    double coefficient;
    uint8_t flags;
} NqCUebUR_ctx_t;

void init_ctx(NqCUebUR_ctx_t *ctx) {
    ctx->id = 1683;
    ctx->coefficient = 3.0;
    ctx->flags = 175;
}

int compute_RaDsPQE(int input) {
    int result = input * 19;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

int compute_BWeH3og(int input) {
    int result = input * 39;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

int compute_OtjFRCb(int input) {
    int result = input * 57;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

int compute_NSm1LJf(int input) {
    int result = input * 12;
    for(int i = 0; i < 3; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} phlfnnms_ctx_t;

void init_ctx(phlfnnms_ctx_t *ctx) {
    ctx->id = 7447;
    ctx->coefficient = 0.6;
    ctx->flags = 107;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} CT3XpU1r_ctx_t;

void init_ctx(CT3XpU1r_ctx_t *ctx) {
    ctx->id = 9555;
    ctx->coefficient = 4.4;
    ctx->flags = 34;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} lWCniZsb_ctx_t;

void init_ctx(lWCniZsb_ctx_t *ctx) {
    ctx->id = 4877;
    ctx->coefficient = 7.7;
    ctx->flags = 228;
}

int compute_qKsGB4e(int input) {
    int result = input * 9;
    for(int i = 0; i < 16; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 1OU1MrKd_ctx_t;

void init_ctx(1OU1MrKd_ctx_t *ctx) {
    ctx->id = 3369;
    ctx->coefficient = 3.5;
    ctx->flags = 109;
}

int compute_gMl79XB(int input) {
    int result = input * 17;
    for(int i = 0; i < 18; i++) result += (i * 2);
    return result;
}

int compute_YU2rrEh(int input) {
    int result = input * 45;
    for(int i = 0; i < 14; i++) result += (i * 2);
    return result;
}

int compute_TMQqAgB(int input) {
    int result = input * 16;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_azWBBBG(int input) {
    int result = input * 36;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} Wd3OAK4k_ctx_t;

void init_ctx(Wd3OAK4k_ctx_t *ctx) {
    ctx->id = 3839;
    ctx->coefficient = 1.0;
    ctx->flags = 236;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} apxr6Xl3_ctx_t;

void init_ctx(apxr6Xl3_ctx_t *ctx) {
    ctx->id = 7263;
    ctx->coefficient = 4.2;
    ctx->flags = 214;
}

int compute_jZggjPr(int input) {
    int result = input * 44;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

int compute_ZikzFGP(int input) {
    int result = input * 59;
    for(int i = 0; i < 11; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} R1GS4B0q_ctx_t;

void init_ctx(R1GS4B0q_ctx_t *ctx) {
    ctx->id = 9734;
    ctx->coefficient = 8.3;
    ctx->flags = 162;
}

int compute_IHFgSF6(int input) {
    int result = input * 34;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7Zg7Vshx_ctx_t;

void init_ctx(7Zg7Vshx_ctx_t *ctx) {
    ctx->id = 6507;
    ctx->coefficient = 0.3;
    ctx->flags = 65;
}

typedef struct {
    uint32_t id;
    char name[75];
    double coefficient;
    uint8_t flags;
} 26LNpPJb_ctx_t;

void init_ctx(26LNpPJb_ctx_t *ctx) {
    ctx->id = 6838;
    ctx->coefficient = 0.4;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} di0FYdsJ_ctx_t;

void init_ctx(di0FYdsJ_ctx_t *ctx) {
    ctx->id = 6140;
    ctx->coefficient = 0.2;
    ctx->flags = 244;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} ebHZ9gyg_ctx_t;

void init_ctx(ebHZ9gyg_ctx_t *ctx) {
    ctx->id = 3515;
    ctx->coefficient = 4.2;
    ctx->flags = 121;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} lKqVDZqy_ctx_t;

void init_ctx(lKqVDZqy_ctx_t *ctx) {
    ctx->id = 9496;
    ctx->coefficient = 4.4;
    ctx->flags = 174;
}

int compute_KeUPn6T(int input) {
    int result = input * 56;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[42];
    double coefficient;
    uint8_t flags;
} uRw9d4fJ_ctx_t;

void init_ctx(uRw9d4fJ_ctx_t *ctx) {
    ctx->id = 9421;
    ctx->coefficient = 8.3;
    ctx->flags = 246;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} OJcY2x2I_ctx_t;

void init_ctx(OJcY2x2I_ctx_t *ctx) {
    ctx->id = 8823;
    ctx->coefficient = 2.4;
    ctx->flags = 87;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} fU2rd76v_ctx_t;

void init_ctx(fU2rd76v_ctx_t *ctx) {
    ctx->id = 4494;
    ctx->coefficient = 4.4;
    ctx->flags = 243;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} N1xchYdX_ctx_t;

void init_ctx(N1xchYdX_ctx_t *ctx) {
    ctx->id = 2845;
    ctx->coefficient = 6.0;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} Dcou7SbD_ctx_t;

void init_ctx(Dcou7SbD_ctx_t *ctx) {
    ctx->id = 4358;
    ctx->coefficient = 8.9;
    ctx->flags = 31;
}

int compute_7oZiad5(int input) {
    int result = input * 66;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} UtaY0HeE_ctx_t;

void init_ctx(UtaY0HeE_ctx_t *ctx) {
    ctx->id = 8246;
    ctx->coefficient = 2.9;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} 3dlnNt6F_ctx_t;

void init_ctx(3dlnNt6F_ctx_t *ctx) {
    ctx->id = 3567;
    ctx->coefficient = 0.4;
    ctx->flags = 105;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} rTpGBRZV_ctx_t;

void init_ctx(rTpGBRZV_ctx_t *ctx) {
    ctx->id = 6373;
    ctx->coefficient = 6.3;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} 3fcJZTje_ctx_t;

void init_ctx(3fcJZTje_ctx_t *ctx) {
    ctx->id = 9222;
    ctx->coefficient = 0.9;
    ctx->flags = 178;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} ZCc736bf_ctx_t;

void init_ctx(ZCc736bf_ctx_t *ctx) {
    ctx->id = 5781;
    ctx->coefficient = 1.9;
    ctx->flags = 126;
}

typedef struct {
    uint32_t id;
    char name[90];
    double coefficient;
    uint8_t flags;
} MYVGhtyy_ctx_t;

void init_ctx(MYVGhtyy_ctx_t *ctx) {
    ctx->id = 7309;
    ctx->coefficient = 2.3;
    ctx->flags = 124;
}

typedef struct {
    uint32_t id;
    char name[94];
    double coefficient;
    uint8_t flags;
} 0rPZsjsw_ctx_t;

void init_ctx(0rPZsjsw_ctx_t *ctx) {
    ctx->id = 3138;
    ctx->coefficient = 5.5;
    ctx->flags = 234;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} l6hS27lA_ctx_t;

void init_ctx(l6hS27lA_ctx_t *ctx) {
    ctx->id = 2241;
    ctx->coefficient = 4.8;
    ctx->flags = 223;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} Sa88cdNL_ctx_t;

void init_ctx(Sa88cdNL_ctx_t *ctx) {
    ctx->id = 3994;
    ctx->coefficient = 7.1;
    ctx->flags = 100;
}

typedef struct {
    uint32_t id;
    char name[32];
    double coefficient;
    uint8_t flags;
} f5dRBwWE_ctx_t;

void init_ctx(f5dRBwWE_ctx_t *ctx) {
    ctx->id = 6654;
    ctx->coefficient = 5.5;
    ctx->flags = 68;
}

int compute_ZD2Ritp(int input) {
    int result = input * 34;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

int compute_4RTZjXM(int input) {
    int result = input * 61;
    for(int i = 0; i < 6; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 26ZrIWRm_ctx_t;

void init_ctx(26ZrIWRm_ctx_t *ctx) {
    ctx->id = 9302;
    ctx->coefficient = 0.3;
    ctx->flags = 172;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} ko2L4R4F_ctx_t;

void init_ctx(ko2L4R4F_ctx_t *ctx) {
    ctx->id = 8123;
    ctx->coefficient = 3.2;
    ctx->flags = 255;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} pA4xkbRl_ctx_t;

void init_ctx(pA4xkbRl_ctx_t *ctx) {
    ctx->id = 5941;
    ctx->coefficient = 3.7;
    ctx->flags = 8;
}

int compute_UP3t1yb(int input) {
    int result = input * 3;
    for(int i = 0; i < 16; i++) result += (i * 3);
    return result;
}

int compute_RJfsvAr(int input) {
    int result = input * 54;
    for(int i = 0; i < 16; i++) result += (i * 2);
    return result;
}

int compute_uCMzYOe(int input) {
    int result = input * 26;
    for(int i = 0; i < 10; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} kySGsLev_ctx_t;

void init_ctx(kySGsLev_ctx_t *ctx) {
    ctx->id = 3681;
    ctx->coefficient = 2.3;
    ctx->flags = 166;
}

int compute_2oX0vx2(int input) {
    int result = input * 60;
    for(int i = 0; i < 18; i++) result += (i * 1);
    return result;
}

int compute_J3MA7n1(int input) {
    int result = input * 39;
    for(int i = 0; i < 14; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} sgmAOVVH_ctx_t;

void init_ctx(sgmAOVVH_ctx_t *ctx) {
    ctx->id = 7286;
    ctx->coefficient = 7.8;
    ctx->flags = 157;
}

int compute_ObXBXGM(int input) {
    int result = input * 12;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

int compute_kB3BB7N(int input) {
    int result = input * 33;
    for(int i = 0; i < 11; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 601sXTnV_ctx_t;

void init_ctx(601sXTnV_ctx_t *ctx) {
    ctx->id = 9191;
    ctx->coefficient = 7.2;
    ctx->flags = 77;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} pUMBEtfQ_ctx_t;

void init_ctx(pUMBEtfQ_ctx_t *ctx) {
    ctx->id = 1114;
    ctx->coefficient = 5.1;
    ctx->flags = 165;
}

int compute_TOyfytW(int input) {
    int result = input * 18;
    for(int i = 0; i < 13; i++) result += (i * 1);
    return result;
}

int compute_fmlU9wY(int input) {
    int result = input * 57;
    for(int i = 0; i < 10; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} BsIIIxgB_ctx_t;

void init_ctx(BsIIIxgB_ctx_t *ctx) {
    ctx->id = 8966;
    ctx->coefficient = 3.8;
    ctx->flags = 104;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} U3dfkDor_ctx_t;

void init_ctx(U3dfkDor_ctx_t *ctx) {
    ctx->id = 6128;
    ctx->coefficient = 4.5;
    ctx->flags = 85;
}

typedef struct {
    uint32_t id;
    char name[91];
    double coefficient;
    uint8_t flags;
} vz4KyWmZ_ctx_t;

void init_ctx(vz4KyWmZ_ctx_t *ctx) {
    ctx->id = 9171;
    ctx->coefficient = 2.1;
    ctx->flags = 108;
}

int compute_9e0Qmtq(int input) {
    int result = input * 39;
    for(int i = 0; i < 12; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} 03RpgT77_ctx_t;

void init_ctx(03RpgT77_ctx_t *ctx) {
    ctx->id = 5248;
    ctx->coefficient = 2.0;
    ctx->flags = 76;
}

int compute_vn2n5Mh(int input) {
    int result = input * 57;
    for(int i = 0; i < 4; i++) result += (i * 4);
    return result;
}

int compute_PYLCF4J(int input) {
    int result = input * 6;
    for(int i = 0; i < 4; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} p7SCY6Oq_ctx_t;

void init_ctx(p7SCY6Oq_ctx_t *ctx) {
    ctx->id = 3731;
    ctx->coefficient = 0.4;
    ctx->flags = 21;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} WyKaFaRQ_ctx_t;

void init_ctx(WyKaFaRQ_ctx_t *ctx) {
    ctx->id = 3850;
    ctx->coefficient = 8.0;
    ctx->flags = 52;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} 4qTyn20e_ctx_t;

void init_ctx(4qTyn20e_ctx_t *ctx) {
    ctx->id = 9550;
    ctx->coefficient = 0.1;
    ctx->flags = 89;
}

int compute_g7PurLw(int input) {
    int result = input * 67;
    for(int i = 0; i < 11; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} dDvwU0Za_ctx_t;

void init_ctx(dDvwU0Za_ctx_t *ctx) {
    ctx->id = 2358;
    ctx->coefficient = 8.6;
    ctx->flags = 29;
}

typedef struct {
    uint32_t id;
    char name[61];
    double coefficient;
    uint8_t flags;
} GnyCMkxh_ctx_t;

void init_ctx(GnyCMkxh_ctx_t *ctx) {
    ctx->id = 6850;
    ctx->coefficient = 0.9;
    ctx->flags = 50;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} QlAo3Vut_ctx_t;

void init_ctx(QlAo3Vut_ctx_t *ctx) {
    ctx->id = 8579;
    ctx->coefficient = 5.6;
    ctx->flags = 200;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} xTA7Su4V_ctx_t;

void init_ctx(xTA7Su4V_ctx_t *ctx) {
    ctx->id = 9570;
    ctx->coefficient = 9.6;
    ctx->flags = 208;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} vr7JMUO9_ctx_t;

void init_ctx(vr7JMUO9_ctx_t *ctx) {
    ctx->id = 4228;
    ctx->coefficient = 8.5;
    ctx->flags = 194;
}

int compute_3mKMdF1(int input) {
    int result = input * 33;
    for(int i = 0; i < 7; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} k2lu3QDB_ctx_t;

void init_ctx(k2lu3QDB_ctx_t *ctx) {
    ctx->id = 1254;
    ctx->coefficient = 3.1;
    ctx->flags = 7;
}

typedef struct {
    uint32_t id;
    char name[86];
    double coefficient;
    uint8_t flags;
} V8dMI6Z4_ctx_t;

void init_ctx(V8dMI6Z4_ctx_t *ctx) {
    ctx->id = 7178;
    ctx->coefficient = 5.6;
    ctx->flags = 223;
}

int compute_FOjr8lN(int input) {
    int result = input * 16;
    for(int i = 0; i < 9; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} 7vDhkYKX_ctx_t;

void init_ctx(7vDhkYKX_ctx_t *ctx) {
    ctx->id = 7879;
    ctx->coefficient = 7.1;
    ctx->flags = 104;
}

int compute_oLuHt9b(int input) {
    int result = input * 37;
    for(int i = 0; i < 15; i++) result += (i * 4);
    return result;
}

int compute_0ERgSHX(int input) {
    int result = input * 42;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} oZT4F3iH_ctx_t;

void init_ctx(oZT4F3iH_ctx_t *ctx) {
    ctx->id = 4542;
    ctx->coefficient = 3.1;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} 1qkW2BMz_ctx_t;

void init_ctx(1qkW2BMz_ctx_t *ctx) {
    ctx->id = 5204;
    ctx->coefficient = 3.6;
    ctx->flags = 22;
}

typedef struct {
    uint32_t id;
    char name[56];
    double coefficient;
    uint8_t flags;
} Q67DF0Xd_ctx_t;

void init_ctx(Q67DF0Xd_ctx_t *ctx) {
    ctx->id = 7313;
    ctx->coefficient = 2.6;
    ctx->flags = 16;
}

int compute_ztbCDo4(int input) {
    int result = input * 51;
    for(int i = 0; i < 6; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} P5M73P6r_ctx_t;

void init_ctx(P5M73P6r_ctx_t *ctx) {
    ctx->id = 5235;
    ctx->coefficient = 0.7;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} 8XSMviHx_ctx_t;

void init_ctx(8XSMviHx_ctx_t *ctx) {
    ctx->id = 5612;
    ctx->coefficient = 4.1;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} LcdtQ6ds_ctx_t;

void init_ctx(LcdtQ6ds_ctx_t *ctx) {
    ctx->id = 3508;
    ctx->coefficient = 2.3;
    ctx->flags = 135;
}

int compute_7KWCLBE(int input) {
    int result = input * 35;
    for(int i = 0; i < 7; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} PTxDSvjW_ctx_t;

void init_ctx(PTxDSvjW_ctx_t *ctx) {
    ctx->id = 2338;
    ctx->coefficient = 2.1;
    ctx->flags = 99;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} LKJ928B4_ctx_t;

void init_ctx(LKJ928B4_ctx_t *ctx) {
    ctx->id = 1462;
    ctx->coefficient = 1.7;
    ctx->flags = 42;
}

int compute_3U435cD(int input) {
    int result = input * 47;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_8tUNSnq(int input) {
    int result = input * 29;
    for(int i = 0; i < 6; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} osB5UQkA_ctx_t;

void init_ctx(osB5UQkA_ctx_t *ctx) {
    ctx->id = 3399;
    ctx->coefficient = 9.8;
    ctx->flags = 102;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} 1oAXiv8T_ctx_t;

void init_ctx(1oAXiv8T_ctx_t *ctx) {
    ctx->id = 5724;
    ctx->coefficient = 8.8;
    ctx->flags = 177;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} CHzgB6lz_ctx_t;

void init_ctx(CHzgB6lz_ctx_t *ctx) {
    ctx->id = 4545;
    ctx->coefficient = 1.9;
    ctx->flags = 213;
}

int compute_p8g4PZb(int input) {
    int result = input * 69;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} CbEqkXx0_ctx_t;

void init_ctx(CbEqkXx0_ctx_t *ctx) {
    ctx->id = 6399;
    ctx->coefficient = 4.2;
    ctx->flags = 137;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} PqLfwfv5_ctx_t;

void init_ctx(PqLfwfv5_ctx_t *ctx) {
    ctx->id = 4161;
    ctx->coefficient = 8.1;
    ctx->flags = 181;
}

typedef struct {
    uint32_t id;
    char name[55];
    double coefficient;
    uint8_t flags;
} zKualKDr_ctx_t;

void init_ctx(zKualKDr_ctx_t *ctx) {
    ctx->id = 9820;
    ctx->coefficient = 9.6;
    ctx->flags = 61;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} xFWvxJxP_ctx_t;

void init_ctx(xFWvxJxP_ctx_t *ctx) {
    ctx->id = 1791;
    ctx->coefficient = 3.1;
    ctx->flags = 214;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} nsFf5h3e_ctx_t;

void init_ctx(nsFf5h3e_ctx_t *ctx) {
    ctx->id = 4967;
    ctx->coefficient = 1.2;
    ctx->flags = 238;
}

int compute_T3JDtFJ(int input) {
    int result = input * 21;
    for(int i = 0; i < 7; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} v3R0AEIt_ctx_t;

void init_ctx(v3R0AEIt_ctx_t *ctx) {
    ctx->id = 9370;
    ctx->coefficient = 9.0;
    ctx->flags = 24;
}

int compute_oAQHVXD(int input) {
    int result = input * 68;
    for(int i = 0; i < 8; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[84];
    double coefficient;
    uint8_t flags;
} Reur8pJq_ctx_t;

void init_ctx(Reur8pJq_ctx_t *ctx) {
    ctx->id = 3838;
    ctx->coefficient = 6.3;
    ctx->flags = 9;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} 1rMmjTrt_ctx_t;

void init_ctx(1rMmjTrt_ctx_t *ctx) {
    ctx->id = 2302;
    ctx->coefficient = 4.4;
    ctx->flags = 228;
}

int compute_WkafLAT(int input) {
    int result = input * 32;
    for(int i = 0; i < 3; i++) result += (i * 2);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} 9kd1IQ0J_ctx_t;

void init_ctx(9kd1IQ0J_ctx_t *ctx) {
    ctx->id = 4648;
    ctx->coefficient = 5.7;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[77];
    double coefficient;
    uint8_t flags;
} bZM5d4hO_ctx_t;

void init_ctx(bZM5d4hO_ctx_t *ctx) {
    ctx->id = 9161;
    ctx->coefficient = 6.7;
    ctx->flags = 115;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} v7h5fSdN_ctx_t;

void init_ctx(v7h5fSdN_ctx_t *ctx) {
    ctx->id = 2933;
    ctx->coefficient = 1.2;
    ctx->flags = 217;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} ySp1nFRa_ctx_t;

void init_ctx(ySp1nFRa_ctx_t *ctx) {
    ctx->id = 3468;
    ctx->coefficient = 2.4;
    ctx->flags = 129;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} YWBTmXG3_ctx_t;

void init_ctx(YWBTmXG3_ctx_t *ctx) {
    ctx->id = 2821;
    ctx->coefficient = 6.9;
    ctx->flags = 86;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} yCuYbdQq_ctx_t;

void init_ctx(yCuYbdQq_ctx_t *ctx) {
    ctx->id = 3884;
    ctx->coefficient = 4.4;
    ctx->flags = 252;
}

typedef struct {
    uint32_t id;
    char name[37];
    double coefficient;
    uint8_t flags;
} 27KdukP6_ctx_t;

void init_ctx(27KdukP6_ctx_t *ctx) {
    ctx->id = 7023;
    ctx->coefficient = 5.8;
    ctx->flags = 180;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} EtY0gppP_ctx_t;

void init_ctx(EtY0gppP_ctx_t *ctx) {
    ctx->id = 7266;
    ctx->coefficient = 1.5;
    ctx->flags = 75;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} UrMdGBPA_ctx_t;

void init_ctx(UrMdGBPA_ctx_t *ctx) {
    ctx->id = 1584;
    ctx->coefficient = 9.9;
    ctx->flags = 37;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} 3XaKe8wQ_ctx_t;

void init_ctx(3XaKe8wQ_ctx_t *ctx) {
    ctx->id = 7902;
    ctx->coefficient = 4.2;
    ctx->flags = 185;
}

typedef struct {
    uint32_t id;
    char name[80];
    double coefficient;
    uint8_t flags;
} nzNPzavg_ctx_t;

void init_ctx(nzNPzavg_ctx_t *ctx) {
    ctx->id = 7445;
    ctx->coefficient = 5.8;
    ctx->flags = 198;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} 9uCSfiFx_ctx_t;

void init_ctx(9uCSfiFx_ctx_t *ctx) {
    ctx->id = 3831;
    ctx->coefficient = 6.7;
    ctx->flags = 27;
}

int compute_qUNVP0L(int input) {
    int result = input * 38;
    for(int i = 0; i < 3; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[50];
    double coefficient;
    uint8_t flags;
} svrd7VII_ctx_t;

void init_ctx(svrd7VII_ctx_t *ctx) {
    ctx->id = 4256;
    ctx->coefficient = 7.5;
    ctx->flags = 237;
}

typedef struct {
    uint32_t id;
    char name[89];
    double coefficient;
    uint8_t flags;
} kIg74fZf_ctx_t;

void init_ctx(kIg74fZf_ctx_t *ctx) {
    ctx->id = 8008;
    ctx->coefficient = 4.4;
    ctx->flags = 97;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} MY1YtyUK_ctx_t;

void init_ctx(MY1YtyUK_ctx_t *ctx) {
    ctx->id = 3820;
    ctx->coefficient = 3.6;
    ctx->flags = 179;
}

int compute_CdtwOgo(int input) {
    int result = input * 68;
    for(int i = 0; i < 14; i++) result += (i * 4);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} sYJg7SaN_ctx_t;

void init_ctx(sYJg7SaN_ctx_t *ctx) {
    ctx->id = 9709;
    ctx->coefficient = 9.0;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} bI6aTXil_ctx_t;

void init_ctx(bI6aTXil_ctx_t *ctx) {
    ctx->id = 7033;
    ctx->coefficient = 6.4;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} 6MwOcSd6_ctx_t;

void init_ctx(6MwOcSd6_ctx_t *ctx) {
    ctx->id = 7789;
    ctx->coefficient = 1.6;
    ctx->flags = 129;
}

int compute_vtSeNxs(int input) {
    int result = input * 31;
    for(int i = 0; i < 17; i++) result += (i * 2);
    return result;
}

int compute_hMG8YUb(int input) {
    int result = input * 49;
    for(int i = 0; i < 5; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[93];
    double coefficient;
    uint8_t flags;
} tfjZmq6l_ctx_t;

void init_ctx(tfjZmq6l_ctx_t *ctx) {
    ctx->id = 7310;
    ctx->coefficient = 6.9;
    ctx->flags = 54;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} S9l0h8Yv_ctx_t;

void init_ctx(S9l0h8Yv_ctx_t *ctx) {
    ctx->id = 6502;
    ctx->coefficient = 2.2;
    ctx->flags = 109;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 9yEkIrmC_ctx_t;

void init_ctx(9yEkIrmC_ctx_t *ctx) {
    ctx->id = 8312;
    ctx->coefficient = 6.0;
    ctx->flags = 133;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} bVL1iPrr_ctx_t;

void init_ctx(bVL1iPrr_ctx_t *ctx) {
    ctx->id = 9153;
    ctx->coefficient = 7.8;
    ctx->flags = 152;
}

typedef struct {
    uint32_t id;
    char name[63];
    double coefficient;
    uint8_t flags;
} IWTcfC8n_ctx_t;

void init_ctx(IWTcfC8n_ctx_t *ctx) {
    ctx->id = 8348;
    ctx->coefficient = 2.7;
    ctx->flags = 205;
}

typedef struct {
    uint32_t id;
    char name[34];
    double coefficient;
    uint8_t flags;
} eQCfm9zp_ctx_t;

void init_ctx(eQCfm9zp_ctx_t *ctx) {
    ctx->id = 3285;
    ctx->coefficient = 8.7;
    ctx->flags = 39;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} 6Lf8SdL2_ctx_t;

void init_ctx(6Lf8SdL2_ctx_t *ctx) {
    ctx->id = 4639;
    ctx->coefficient = 8.1;
    ctx->flags = 3;
}

typedef struct {
    uint32_t id;
    char name[78];
    double coefficient;
    uint8_t flags;
} 7e81k6Nh_ctx_t;

void init_ctx(7e81k6Nh_ctx_t *ctx) {
    ctx->id = 5806;
    ctx->coefficient = 2.2;
    ctx->flags = 155;
}

typedef struct {
    uint32_t id;
    char name[49];
    double coefficient;
    uint8_t flags;
} SFPDcmAU_ctx_t;

void init_ctx(SFPDcmAU_ctx_t *ctx) {
    ctx->id = 2709;
    ctx->coefficient = 7.8;
    ctx->flags = 193;
}

typedef struct {
    uint32_t id;
    char name[36];
    double coefficient;
    uint8_t flags;
} 9KBnWkSs_ctx_t;

void init_ctx(9KBnWkSs_ctx_t *ctx) {
    ctx->id = 9065;
    ctx->coefficient = 3.5;
    ctx->flags = 57;
}

typedef struct {
    uint32_t id;
    char name[72];
    double coefficient;
    uint8_t flags;
} GNEXbDxd_ctx_t;

void init_ctx(GNEXbDxd_ctx_t *ctx) {
    ctx->id = 1670;
    ctx->coefficient = 1.2;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[47];
    double coefficient;
    uint8_t flags;
} lFAxNavo_ctx_t;

void init_ctx(lFAxNavo_ctx_t *ctx) {
    ctx->id = 3206;
    ctx->coefficient = 6.8;
    ctx->flags = 190;
}

typedef struct {
    uint32_t id;
    char name[85];
    double coefficient;
    uint8_t flags;
} XmI4uokx_ctx_t;

void init_ctx(XmI4uokx_ctx_t *ctx) {
    ctx->id = 7115;
    ctx->coefficient = 9.9;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} vE5CFJcl_ctx_t;

void init_ctx(vE5CFJcl_ctx_t *ctx) {
    ctx->id = 3396;
    ctx->coefficient = 4.3;
    ctx->flags = 27;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} 3vVMxEEc_ctx_t;

void init_ctx(3vVMxEEc_ctx_t *ctx) {
    ctx->id = 5738;
    ctx->coefficient = 2.7;
    ctx->flags = 11;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} cIWGWjyu_ctx_t;

void init_ctx(cIWGWjyu_ctx_t *ctx) {
    ctx->id = 9302;
    ctx->coefficient = 0.3;
    ctx->flags = 36;
}

typedef struct {
    uint32_t id;
    char name[74];
    double coefficient;
    uint8_t flags;
} vQqNz4oW_ctx_t;

void init_ctx(vQqNz4oW_ctx_t *ctx) {
    ctx->id = 4094;
    ctx->coefficient = 9.3;
    ctx->flags = 179;
}

typedef struct {
    uint32_t id;
    char name[57];
    double coefficient;
    uint8_t flags;
} 4ZLDLZBr_ctx_t;

void init_ctx(4ZLDLZBr_ctx_t *ctx) {
    ctx->id = 3798;
    ctx->coefficient = 9.2;
    ctx->flags = 15;
}

typedef struct {
    uint32_t id;
    char name[67];
    double coefficient;
    uint8_t flags;
} X9i4CauZ_ctx_t;

void init_ctx(X9i4CauZ_ctx_t *ctx) {
    ctx->id = 6535;
    ctx->coefficient = 4.1;
    ctx->flags = 63;
}

int compute_tv02hRI(int input) {
    int result = input * 14;
    for(int i = 0; i < 13; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} qTDagKVy_ctx_t;

void init_ctx(qTDagKVy_ctx_t *ctx) {
    ctx->id = 9826;
    ctx->coefficient = 1.1;
    ctx->flags = 111;
}

int compute_5PyAsiI(int input) {
    int result = input * 67;
    for(int i = 0; i < 7; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 11sfqO3O_ctx_t;

void init_ctx(11sfqO3O_ctx_t *ctx) {
    ctx->id = 1396;
    ctx->coefficient = 8.8;
    ctx->flags = 81;
}

typedef struct {
    uint32_t id;
    char name[64];
    double coefficient;
    uint8_t flags;
} Yo2fvpEp_ctx_t;

void init_ctx(Yo2fvpEp_ctx_t *ctx) {
    ctx->id = 7787;
    ctx->coefficient = 3.6;
    ctx->flags = 31;
}

typedef struct {
    uint32_t id;
    char name[44];
    double coefficient;
    uint8_t flags;
} 4eQkDgri_ctx_t;

void init_ctx(4eQkDgri_ctx_t *ctx) {
    ctx->id = 4528;
    ctx->coefficient = 2.6;
    ctx->flags = 51;
}

typedef struct {
    uint32_t id;
    char name[73];
    double coefficient;
    uint8_t flags;
} 27LyArxk_ctx_t;

void init_ctx(27LyArxk_ctx_t *ctx) {
    ctx->id = 3126;
    ctx->coefficient = 1.8;
    ctx->flags = 139;
}

typedef struct {
    uint32_t id;
    char name[53];
    double coefficient;
    uint8_t flags;
} 9mxRrJgL_ctx_t;

void init_ctx(9mxRrJgL_ctx_t *ctx) {
    ctx->id = 5971;
    ctx->coefficient = 3.7;
    ctx->flags = 118;
}

int compute_6k8A6HO(int input) {
    int result = input * 56;
    for(int i = 0; i < 17; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[46];
    double coefficient;
    uint8_t flags;
} 0W7oPqeb_ctx_t;

void init_ctx(0W7oPqeb_ctx_t *ctx) {
    ctx->id = 1353;
    ctx->coefficient = 3.6;
    ctx->flags = 192;
}

int compute_h1iUTHl(int input) {
    int result = input * 41;
    for(int i = 0; i < 10; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} P53fEWqX_ctx_t;

void init_ctx(P53fEWqX_ctx_t *ctx) {
    ctx->id = 5188;
    ctx->coefficient = 4.7;
    ctx->flags = 204;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} hMK2lKYI_ctx_t;

void init_ctx(hMK2lKYI_ctx_t *ctx) {
    ctx->id = 7477;
    ctx->coefficient = 1.4;
    ctx->flags = 63;
}

typedef struct {
    uint32_t id;
    char name[79];
    double coefficient;
    uint8_t flags;
} 4qkS4HG6_ctx_t;

void init_ctx(4qkS4HG6_ctx_t *ctx) {
    ctx->id = 8350;
    ctx->coefficient = 6.6;
    ctx->flags = 216;
}

typedef struct {
    uint32_t id;
    char name[39];
    double coefficient;
    uint8_t flags;
} jSAJs3hx_ctx_t;

void init_ctx(jSAJs3hx_ctx_t *ctx) {
    ctx->id = 3854;
    ctx->coefficient = 8.5;
    ctx->flags = 119;
}

typedef struct {
    uint32_t id;
    char name[66];
    double coefficient;
    uint8_t flags;
} LaSAOoAr_ctx_t;

void init_ctx(LaSAOoAr_ctx_t *ctx) {
    ctx->id = 8467;
    ctx->coefficient = 4.1;
    ctx->flags = 94;
}

typedef struct {
    uint32_t id;
    char name[33];
    double coefficient;
    uint8_t flags;
} JmTYjHKn_ctx_t;

void init_ctx(JmTYjHKn_ctx_t *ctx) {
    ctx->id = 8606;
    ctx->coefficient = 5.5;
    ctx->flags = 29;
}

int compute_ccTtyk8(int input) {
    int result = input * 26;
    for(int i = 0; i < 17; i++) result += (i * 3);
    return result;
}

typedef struct {
    uint32_t id;
    char name[92];
    double coefficient;
    uint8_t flags;
} bBU7vJqb_ctx_t;

void init_ctx(bBU7vJqb_ctx_t *ctx) {
    ctx->id = 9138;
    ctx->coefficient = 9.7;
    ctx->flags = 201;
}

typedef struct {
    uint32_t id;
    char name[68];
    double coefficient;
    uint8_t flags;
} MYls4qKU_ctx_t;

void init_ctx(MYls4qKU_ctx_t *ctx) {
    ctx->id = 3950;
    ctx->coefficient = 7.2;
    ctx->flags = 96;
}

typedef struct {
    uint32_t id;
    char name[43];
    double coefficient;
    uint8_t flags;
} U1b5c25n_ctx_t;

void init_ctx(U1b5c25n_ctx_t *ctx) {
    ctx->id = 7092;
    ctx->coefficient = 6.9;
    ctx->flags = 174;
}

typedef struct {
    uint32_t id;
    char name[69];
    double coefficient;
    uint8_t flags;
} hQz1f6JC_ctx_t;

void init_ctx(hQz1f6JC_ctx_t *ctx) {
    ctx->id = 1895;
    ctx->coefficient = 3.2;
    ctx->flags = 47;
}

int compute_STCqn3A(int input) {
    int result = input * 23;
    for(int i = 0; i < 10; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[52];
    double coefficient;
    uint8_t flags;
} QGjR5rFW_ctx_t;

void init_ctx(QGjR5rFW_ctx_t *ctx) {
    ctx->id = 5294;
    ctx->coefficient = 2.1;
    ctx->flags = 231;
}

typedef struct {
    uint32_t id;
    char name[58];
    double coefficient;
    uint8_t flags;
} UCjV9xEi_ctx_t;

void init_ctx(UCjV9xEi_ctx_t *ctx) {
    ctx->id = 9501;
    ctx->coefficient = 3.7;
    ctx->flags = 125;
}

typedef struct {
    uint32_t id;
    char name[88];
    double coefficient;
    uint8_t flags;
} I6t44XSu_ctx_t;

void init_ctx(I6t44XSu_ctx_t *ctx) {
    ctx->id = 5762;
    ctx->coefficient = 5.0;
    ctx->flags = 250;
}

typedef struct {
    uint32_t id;
    char name[45];
    double coefficient;
    uint8_t flags;
} BLNurApg_ctx_t;

void init_ctx(BLNurApg_ctx_t *ctx) {
    ctx->id = 8869;
    ctx->coefficient = 2.4;
    ctx->flags = 14;
}

int compute_SukAC34(int input) {
    int result = input * 10;
    for(int i = 0; i < 3; i++) result += (i * 1);
    return result;
}

typedef struct {
    uint32_t id;
    char name[82];
    double coefficient;
    uint8_t flags;
} MTHCwa7T_ctx_t;

void init_ctx(MTHCwa7T_ctx_t *ctx) {
    ctx->id = 5637;
    ctx->coefficient = 3.0;
    ctx->flags = 160;
}

typedef struct {
    uint32_t id;
    char name[38];
    double coefficient;
    uint8_t flags;
} 7UVi8zcQ_ctx_t;

void init_ctx(7UVi8zcQ_ctx_t *ctx) {
    ctx->id = 5229;
    ctx->coefficient = 4.8;
    ctx->flags = 23;
}

typedef struct {
    uint32_t id;
    char name[35];
    double coefficient;
    uint8_t flags;
} WchMQF7Y_ctx_t;

void init_ctx(WchMQF7Y_ctx_t *ctx) {
    ctx->id = 5545;
    ctx->coefficient = 2.8;
    ctx->flags = 173;
}

typedef struct {
    uint32_t id;
    char name[76];
    double coefficient;
    uint8_t flags;
} DwDaqTxc_ctx_t;

void init_ctx(DwDaqTxc_ctx_t *ctx) {
    ctx->id = 8122;
    ctx->coefficient = 1.7;
    ctx->flags = 135;
}

typedef struct {
    uint32_t id;
    char name[71];
    double coefficient;
    uint8_t flags;
} 6HZed6a1_ctx_t;

void init_ctx(6HZed6a1_ctx_t *ctx) {
    ctx->id = 8984;
    ctx->coefficient = 0.8;
    ctx->flags = 131;
}

typedef struct {
    uint32_t id;
    char name[96];
    double coefficient;
    uint8_t flags;
} FxW3oPky_ctx_t;

void init_ctx(FxW3oPky_ctx_t *ctx) {
    ctx->id = 3367;
    ctx->coefficient = 5.0;
    ctx->flags = 163;
}

typedef struct {
    uint32_t id;
    char name[62];
    double coefficient;
    uint8_t flags;
} PmjFtzTz_ctx_t;

void init_ctx(PmjFtzTz_ctx_t *ctx) {
    ctx->id = 1039;
    ctx->coefficient = 7.5;
    ctx->flags = 205;
}

int compute_fFhwzHw(int input) {
    int result = input * 5;
    for(int i = 0; i < 4; i++) result += (i * 5);
    return result;
}

typedef struct {
    uint32_t id;
    char name[65];
    double coefficient;
    uint8_t flags;
} tbfU3hJx_ctx_t;

void init_ctx(tbfU3hJx_ctx_t *ctx) {
    ctx->id = 8719;
    ctx->coefficient = 9.2;
    ctx->flags = 25;
}

