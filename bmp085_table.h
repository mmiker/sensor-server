#ifndef BMP085_TABLE_H_
#define BMP085_TABLE_H_

#define BMP085_STEP 256         // pressure step (Pa)
#define BMP085_MIN_PRES 67904   // (Pa)
#define BMP085_MAX_PRES 104000  // (Pa)

// table of heights in decimeters relative to see level
static const uint16_t ptable[]={
// height , // pressure
    -2204 , // 104000
    -1995 , // 103744
    -1785 , // 103488
    -1576 , // 103232
    -1366 , // 102976
    -1155 , // 102720
    -944 , // 102464
    -733 , // 102208
    -521 , // 101952
    -308 , // 101696
    -96 , // 101440
    117 , // 101184
    331 , // 100928
    545 , // 100672
    760 , // 100416
    974 , // 100160
    1190 , // 99904
    1406 , // 99648
    1622 , // 99392
    1839 , // 99136
    2056 , // 98880
    2273 , // 98624
    2491 , // 98368
    2710 , // 98112
    2929 , // 97856
    3148 , // 97600
    3368 , // 97344
    3589 , // 97088
    3810 , // 96832
    4031 , // 96576
    4253 , // 96320
    4475 , // 96064
    4698 , // 95808
    4921 , // 95552
    5145 , // 95296
    5369 , // 95040
    5594 , // 94784
    5819 , // 94528
    6045 , // 94272
    6271 , // 94016
    6498 , // 93760
    6725 , // 93504
    6953 , // 93248
    7181 , // 92992
    7409 , // 92736
    7639 , // 92480
    7868 , // 92224
    8099 , // 91968
    8330 , // 91712
    8561 , // 91456
    8793 , // 91200
    9025 , // 90944
    9258 , // 90688
    9491 , // 90432
    9725 , // 90176
    9960 , // 89920
    10195 , // 89664
    10430 , // 89408
    10667 , // 89152
    10903 , // 88896
    11140 , // 88640
    11378 , // 88384
    11617 , // 88128
    11856 , // 87872
    12095 , // 87616
    12335 , // 87360
    12576 , // 87104
    12817 , // 86848
    13059 , // 86592
    13301 , // 86336
    13544 , // 86080
    13787 , // 85824
    14031 , // 85568
    14276 , // 85312
    14521 , // 85056
    14767 , // 84800
    15014 , // 84544
    15261 , // 84288
    15509 , // 84032
    15757 , // 83776
    16006 , // 83520
    16255 , // 83264
    16505 , // 83008
    16756 , // 82752
    17008 , // 82496
    17260 , // 82240
    17512 , // 81984
    17766 , // 81728
    18020 , // 81472
    18274 , // 81216
    18530 , // 80960
    18786 , // 80704
    19042 , // 80448
    19299 , // 80192
    19557 , // 79936
    19816 , // 79680
    20075 , // 79424
    20335 , // 79168
    20596 , // 78912
    20857 , // 78656
    21119 , // 78400
    21382 , // 78144
    21645 , // 77888
    21909 , // 77632
    22174 , // 77376
    22439 , // 77120
    22706 , // 76864
    22972 , // 76608
    23240 , // 76352
    23508 , // 76096
    23778 , // 75840
    24047 , // 75584
    24318 , // 75328
    24589 , // 75072
    24861 , // 74816
    25134 , // 74560
    25408 , // 74304
    25682 , // 74048
    25957 , // 73792
    26233 , // 73536
    26510 , // 73280
    26787 , // 73024
    27066 , // 72768
    27345 , // 72512
    27625 , // 72256
    27905 , // 72000
    28187 , // 71744
    28469 , // 71488
    28752 , // 71232
    29036 , // 70976
    29321 , // 70720
    29606 , // 70464
    29893 , // 70208
    30180 , // 69952
    30468 , // 69696
    30757 , // 69440
    31047 , // 69184
    31338 , // 68928
    31629 , // 68672
    31922 , // 68416
    32215 , // 68160
    32509 , // 67904
};

#endif /* BMP085_TABLE_H_ */