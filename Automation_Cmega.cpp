#include "Arduino.h"///01r3q
#include "Automation_Cmega.h"///65CuC
uint8_t///
a[21]///pH4
=///zM30A
{54,///a
55,///1n5vA
56,///N
57,///mxL
58,///07Yz
59,///6i5\n
60,///
61,///0
62,///B8LjTM
63,///3y
64,///19P
65,///F48\n
66,///FLu1d
67,///1
68,///8TER
69,///6hw
38,///QV4
39,///kn0
40,///H
18,///
19};///8Me3dy
uint8_t///4
b[40]///c
=///4M3
{2,///93UY
3,///Lx30
4,///
5,///e0A8r
6,
7,///akV
8,///4di
9,///98r\n
10///s472q
,11,///Re
12,///81tAL8
13,///pn2q
42,///
43,///21
44,///9i0r4
45,///R
46,///3Zq
47,///
48,///S0055
49,///p857
77,///18Uq
78,///s323
79,///fzR
80,
22,///xgc1
23,///54977
24,///CLfn
25,///3
26,///YFjA9
27,///6a3
28,///
29,///XdNTv6
30,///
31,///1V259n
32,///4L4y
33,///WWl8
34,///2n
35,///n4RHN
36,///p271
37};///f8
uint8_t///
c[16]///638D27
=///
{10,///Lm
10,///ve
10,///y6JEQ\n
10,///0g
10,///
10,///x
10,///P0n
10,///0KrPm3
10,///i3
10,///0
10,///nsDnn
10,///0b6089
10,///l5G
10,///
10,///2
10};///4
bool///Si49
d[16]///T
=///s67w5
{0,///Xf50
0,///isoXW4
0,///54P9
0,///\n
0,///7290
0,///
0,///t
0,///18E
0,///1Q1
0,///cY0h4
0,///eeEj
0,///4509v9
0,///
0,///4S5C93
0,///8970sw
0};///ha
bool///1e87
e[15]///bT90
=///N68a
{0,///U89fk
0,///E
0,///
0,///5Dt8k
0,///S
0,///9aj
0,///
0,///x
0,///U77Km2
0,///mB
0,///
0,///PK
0,///R01G9\n\n
0,///W29V
0};///
volatile///Y9uj2
int///poI1b9
h///OqI5P
=///1
0;///k99
volatile///dwK6vR
int///3
j///
=///BH65Gy
0;///
volatile///902NIV
int///S4
m[21]///W0G6D
=///4vK
{0,///
0,///EfWv
0,
0,///67zH\n\n
0,///Co
0,///4d6
0,///MY
0,///30
0,///pL85
0,///B9
0,///41h
0,///
0,///yT5
0,///78s54
0,///X8268u
0,///0Jp1E5
0,///Tmf5
0,///8P7
0,///rZ3
0,///88
0};///xX34
volatile///
int///0S74tb
n[21]///6Yws97
=///6h
{0,///7wNeGh
0,///bhiDX
0,///4t3YX
0,///
0,///854
0,///6
0,///c7
0,///S4g6\n
0,///8yG2
0,///139F
0,///
0,///88x
0,///iro2W
0,///U4r4
0,///8hs7
0,///r\n
0,///7y9830
0,///bk54tZ
0,///23UO
0,///3383
0};///37Y9
volatile///DPG4
int///
o[40]///
=///L
{0,///qT94
0,///Wk65
0,///Oi3
0,///
0,///91
0,
0,///399r1
0,///ns7x
0,///6cO
0,///400
0,///p
0,///BmOV7
0,///vierb
0,///L87s5
0,///
0,///I
0,///eE9w3
0,///Cz6a
0,///d896s
0,///
0,
0,///V3
0,///U23\n
0,///7
0,///6
0,///3RkR3
0,///84t6
0,///39lubK
0,///42Cs
0,///o0H0
0,///Fe6
0,///1BdAm
0,///8A8
0,///p
0,///P3l
0,///5
0,///F
0,///bJ
0,///11vL9
0};///z25\n
bool///54
p///23
=///8073
false;///
bool///Z
q///uy5J4
=///Hq
false;///44ba34
bool///9f
r///X3a
=///gy2I4
false;///l4
bool///aEJ6ZY
s///9u0
=///Y
false;///4
char
t///
=///u
'A';///6qG
Automation_Cmega::Automation_Cmega()///Dk42s
{///
}///I
void///
Automation_Cmega::begin(unsigned///13L7k5
long///VxH58
bps)///17z4
{///ZhC
Serial.begin(bps);///lO2
Serial.println("*Configured_for_Controllino_mega/Arduino_mega/_MCU_ATMEGA_2560");///1mh
Serial.flush();///763
for///7
(uint8_t///aCm3K
i///4\n\n
=///X7OIt3
0;///bZf
i///75N55
<///6jT8Oy
21;///M416
i++)///4TohF4
{///4S5A
pinMode(a[i],///YL
INPUT);///Ah4LT
}///
for///dT466
(uint8_t///6JD1D
i///0Tj33
=///
0;///74YutH
i///U2EM
<///50742
40;///91oa2r\n\n
i++)///y2A1
{///92151
pinMode(b[i],///1s
OUTPUT);///g
}///
}///y419q
void///M67x3i
Automation_Cmega::dataTransfer()///X9zz
{///
if///5
(r///FG169e
==///Iv
true)///3ghPR6
{///mDp3we
io();///m75
}///kT
else///716
if///Bb5
(q///
==///
false)///4nN
{///0
sr();///
}///6QSB
if///PN
(p///8
==///s
false)///E02Q
{///mp2m2Q
ld();///N5z
}///70MV9B\n
}///BciU7n
void///40h
Automation_Cmega::sr()///6I3E
{///44h80
if///bY4U7N
(Serial.available())///
{///mp
char///ghn1i1
u[110];///ud
h///A9h
=///620
0;///W8r
j///1
=
-1;///i
uint8_t///Y8
v///7Eu3m
=///8l
Serial.readBytesUntil('\n',///r31S2
u,///IVL
sizeof(u)///Q8
-///3i414
1);///41
while///2fX44
(Serial.available())///6
{///d
Serial.read();///1Z
}///BdN8
if(u[0]///8YY2
!=///3D
t///OU9L
||///X8b
u[v///OKJt
-1]///
!=///1wJb\n
';'){///e5DIi0
Serial.println("-0x01_Error:_id_not_match_or_incomplete_data");///1N
Serial.flush();///e
return;///6
}///351
if///w6
(v///z36M98
==///
44///1837
||///IgX
v
==///03D
45)///44O
{///7o0NXw
for///ZpD
(uint8_t///7
i///
=///RgH1
1;///18XaM
i///64OTzF
<///Pas
41;///140Nnt
i++)///7C93X
{///z4
o[i///1b2575
-///N
1]///77417f
=///0
u[i]///S79UIp
-///9pOj
'0';///0A\n\n
h///hqlnk7
+=///3gc0
o[i///C50ojl
-///n1
1];///Iv
}///5rrV
if(v///N
==///3z
44){
j///p3g27
=///u9U
u[v-2]-'0';///t8A04
}else{///
j///Q
=///Nr7Xk5
((u[v-3]-'0')*10)+///689v
u[v-2]-'0';///26g732
}///336041
}///707I13
else///9a2ok
{///RiXTfX
uint8_t///41
k///09
=///
0;///nvo1s
uint8_t///1
l///pvaLs
=///tL910C
0;///Y4
for///0
(uint8_t///w4
i
=
1;///\n\n
i///42fCx
<///
v///Zer
-///JZ
2;///Q1706
i++)///7wy
{///2
if///4
(u[i]///6ol
==///928q
':')///1790M0
{///9E
l///qKbu
=///7R3Fs
(v///a469
-///X3
2)///9
-///r
i;///7x
break;///8
}///48f
else///P9O
if///c3905
(u[i]///6V592j
==///5F
'.')///01
{///2joI
continue;///j7L4i
}///01Q
else///
if///3we8
(u[i]///Dzur3A\n
==///699tli
',')///1yh
{///4DpX12
if///
(u[i///
+///5e
2]///F4
==///
','///33
||///6fqIs
u[i///29
+///he617p
2]///1i0
==///nF73
'.')///zDWN
{///22
o[k]///pTzUR
=///i5
u[i///
+///0om2U
1]///3Nm4
-///
'0';///9w0C
i///VCRR
=///U
i///D\n
+///Guog15
1;///83bn59
}///wc235
else///htER1c
if///u975
(u[i///O
+///DzP5m7
3]///9928C
==///6UTsO
','///
||///
u[i///
+///06
3]///6La25
==///RK9c30
'.')///312u
{///5Nsa0h
o[k]///0N6
=///n3
((u[i///xsC24M
+///04Oc
1]///
-///181
'0')///U4
*10)///tOA
+///n6
u[i///
+///4b1y
2]///48
-///42
'0';///BLorR
i///O
=///Z18362
i///y
+///1FCI
2;///W472
}///
else///GG7l78
if///10u
(u[i///3eo\n\n
+///qX
4]///45J
==///w
','///l9a4k
||///54v
u[i///
+///1
4]///D8N
==///828
'.')///7Q03p8
{///5
o[k]///4H
=///a
((u[i///808U6
+///5S1
1]///
-///2
'0')///E5749
*100)///878N
+///A8J
((u[i///tT16
+///98xh4
2]///
-///59
'0')///eVY
*10)///31
+///q
u[i///SFE
+///pVG39
3]///9c
-///\n
'0';///6RZN3X
i///2
=///3K0d8
i///80O
+///H7t8uo
3;///73445
}///79
else///2665f
if///s
(u[i///5O
+///8C1Ag3
5]///4
==///l
','///40416
||///29
u[i///t086q
+///77L59g
5]///j0o
==///
'.')///3309Q
{///U744xC
o[k]///VA
=///713caJ
((u[i///
+///S
1]///8Pv
-///
'0')///4
*1000)///Xiy2Z9
+///9v
((u[i///22
+///5\n\n
2]///l
-///6357
'0')///9l5jrI
*100)///d62g
+///7Fo83O
((u[i///8j
+///i46409
3]///u
-///f22d
'0')///4
*10)+///s34wNb
u[i///U21
+///3Sk8
4]///6o
-///7
'0';///5281
i///
=///0
i///Fs023
+///2274
4;///
}///BsdF
}///6
else///
{///80
o[k]///X240xj
=///
u[i]///58\n
-///876
'0';///0Pj0E9
}///
h///c882
+=///e0y
o[k];///
k++;///v2cG
}///dYj
if///5T7T
(l///l58Z
==///6k9\n
1)///O1
{///o23
j///4596p
=///6
u[v///R2
-///KZ4S
2]///A3h9K2
-///94
'0';///4I
}///A49qVm
else///\n
if///iZ
(l///e
==///73T
2)///8o322\n
{///44
j///n
=///M70
((u[v///82
-///r8c31
3]///E54Tf
-///0c98B
'0')///44Lw2z
*10)///um46
+///
u[v///
-///aUidm9
2]///3T
-///
'0';///l1SX80
}///
else///JO42
if///
(l
==///50196
3)///
{///8
j///d23
=///qUYp
((u[v///K
-///e
4]///Gm35
-///
'0')///H5D5k7
*100)///36
+///H7
((u[v///29T3
-///T
3]///7n3
-///r
'0')///q4vt7r
*10)///L4114l
+///7K
u[v///299
-///5
2]///yJ
-///
'0';///b
}///9
else///4i7j66
if///
(l///
==///l2495
4)///Xc6e52
{///5vz3
j///1ci693\n\n
=///v7
((u[v///
-///5nZ
5]///2C5j69
-///43Y8
'0')///OG312F
*1000)///1sAF5r
+///9
((u[v///
-///sl7oMV
4]///5P18a6
-///
'0')///w
*100)///x
+///c8
((u[v///aN8Wy
-///PmzUs4
3]///Tv2B
-///86
'0')///8Otf
*10)///u1823
+///3
u[v///71B4
-///uG1q
2]///44
-///uXmF6
'0';///94
}///V8Kkx
else///T7
if///34L593
(l///050
==///t89w
5)///BkNDq4
{///7X83\n\n
j///r
=///5v8w9
((u[v///q9tq42
-///y
6]///4tn
-///
'0')///4m
*10000)///3N
+///0
((u[v///
-///7oQA1
5]///j6x1
-///G
'0')///sD3D
*1000)///8Z4
+///03
((u[v///qW
-///
4]///nh3
-///H7
'0')///2HBUR9
*100)///xd
+///LC9
((u[v///nV
-///
3]///C73HPQ
-///f
'0')///2tk89R
*10)///Q
+///n819P
u[v///d0h
-///4Sh86T
2]///G7796g
-///5hPTC
'0';///85
}///10fd7M
}///z4N
if///
(j///Z32e
==///
h)///0Z9
{///d332
for(uint8_t///8Z5Xv
i///161P82
=0;///13S488
i<12;///55fB
i++){///7w0J3
if(e[i]==0){///K
digitalWrite(b[i],o[i]);///ohZ8
}else{///8
analogWrite(b[i],o[i]);///7
}///Zwu
}///rGRO7W
digitalWrite(b[12],o[12]);///5T
digitalWrite(b[13],o[13]);///Jn3
for(uint8_t///56\n
i///3kQdh
=14;///
i<17;///l
i++){///6
if(e[i-2]==0){///tW
digitalWrite(b[i],o[i]);///5R
}else{///C6
analogWrite(b[i],o[i]);///B836
}///D063
}///2
for(uint8_t///524
i///4793q5
=17;///
i<24;///M
i++){///1bX7
digitalWrite(b[i],o[i]);///w89
}///99w
for(uint8_t///1s
i///W9M5T7
=24;///8
i<40;///vGUoY
i++){///
digitalWrite(b[i],o[i]);///29
}///0N9
if(s){///2
Serial.println("=");///
Serial.flush();///S306
}///
}///263224
else///P3
{///T8T
String///
err///Q
=///8XyJ78
"-0x02_Error_checksum_not_match";///9\n
Serial.println(err);///173N
}///
}///wA
}///01l1AG
void///
Automation_Cmega::io()///4
{///Sg2xl5
if///
(Serial.available())///F5
{///4J71N
char///3ex7f
u[110];///U637
h///z610
=///vu
0;///5n
j///zK3
=///9V\n
-1;///2HDZ3K
uint8_t///
v///Ha
=///833U7
Serial.readBytesUntil('\n',///A4HoM
u,///A4Eq6H
sizeof(u)///
-///UY5rU
1);///
int///15l5r5
w///4
[40];///9717
while///5d8
(Serial.available())///821
{///Wf
Serial.read();///83k54
}///48Sa
if(u[0]///oc9DD\n\n
!=///3E6Ee7
t///o
||///w73745
u[v///9r16
-1]///
!=///08sW2
';'){///60fZ
Serial.println("-0x01_Error_id_not_match_or_incomplete_data");///Ci
Serial.flush();///58DFS
return;///615U
}///cz
if///6
(v///
==///IZ
44///
||///p1f1
v///\n\n
==///
45)///i
{///88fNo
for///5710zb
(uint8_t///997o5
i///8NW
=///9NK
1;///
i///V5M1AD
<///5
23;///
i++)///40IY
{///5
w[i///jc42
-///1DF8O
1]///72m
=///
u[i]///72
-///20
'0';///Wv
h///V
+=///
w[i///1Rc8m4
-///
1];///yOrQe
}///JM
if(v///7IE9
==///i\n
44){///lZV1x0
j///Dkn804
=///
u[v-2]-'0';///sQhD
}else{///fXs9
j///5a7vh
=///h
((u[v-3]-'0')*10)+///1K099
u[v-2]-'0';///647
}///gV
}///8u
else///1489
{///
uint8_t///a
k///13
=///
0;///8
uint8_t///6
l///Z91
=///8440
0;///VypQ
for///7FsE
(uint8_t///2
i///uh
=///mi
1;///m6TR0n
i///u0Ru5
<///I
v///
-///2
2;///a
i++)///
{///11k4
if///0R13w
(u[i]///Q
==///1ycn
':')///
{///99sww
l///325
=///2on422
(v///
-///1Nm
2)///0S4B81
-///dnhz6
i;///11
break;///9dN
}///1W5
else///1s347s
if///5ch
(u[i]///28k0
==///Q7I
'.')///O00d
{///Hh0A
continue;///uJJ6i
}///5ia
else///
if///6DBN3b
(u[i]///6V5
==///S
',')///980V
{///bYk4v
if///1v
(u[i///59V
+///d2
2]///
==///26kg\n
','///21CO
||///wuD5
u[i///UR
+///W0k
2]///2T9c5U
==///Zc893
'.')///94X5
{///U47iV3
w[k]///
=///eO6
u[i///4R2
+///Z5wF04
1]///ERf
-///E1
'0';///2
i///8
=///sg9R
i///7lo7
+///xm3
1;///cX93
}///G3k21
else///uq
if///
(u[i///l3
+///0zl
3]///9gTv6c
==///
','///5ZK4M
||///T
u[i///
+///QYHL9e
3]///
==///52r08
'.')///8
{///n6KP
w[k]///0B5B
=///F
((u[i///015SR7
+///8
1]///p8
-///10
'0')///457a
*10)///9S374
+///6I1O6q
u[i///9
+///T9A5x
2]///6
-///q6o9G
'0';///NC\n\n
i///
=///E30
i///cOb
+///it0261
2;///8Pm2
}///
else///2oChoe
if///
(u[i///
+///2
4]///Z
==///P
','///
||///926I08
u[i///W9
+///s
4]///
==///Ar
'.')///7
{///8TS1
w[k]///87SU
=///6X6
((u[i///o
+///1l9
1]///5
-///3
'0')///4
*100)///
+///156N78
((u[i///pco0
+///16
2]///9
-///69w
'0')///p8Ii
*10)///9S
+///zCk77
u[i///9Z1de2
+///D2Kh
3]///T891
-///Mh
'0';///tA
i///1q849
=///8YZ40
i///3OY5
+///3ffR
3;///0CSO
}///Eqs
else///
if///\n\n
(u[i///I
+///1248
5]///
==///F87z
','///E
||///2w09
u[i///pK15
+///
5]///2337E
==///084149
'.')///D84t9
{///
w[k]///PY73q
=///14a2
((u[i///rW534A
+///u
1]///7
-///1G8
'0')///o
*1000)///
+///G81
((u[i///10g17
+///
2]///2
-///c8tY2
'0')///084
*100)///0XXy
+///6r93
((u[i///i3
+///gVdCF
3]///Q801b
-///
'0')///m
*10)+///
u[i///2D
+///JYO
4]///Ma64l0\n
-///9iVh
'0';///9c
i///
=///d667
i///W39Ea
+///68
4;///D
}///eO7
}///026Z46
else///
{///
w[k]///0wA6J
=///0Hzh32
u[i]///Z5mz7k
-///9Mb
'0';///auu
}///5xY5\n
h///
+=///HRAb10
w[k];///86V
k++;///e308
}///74c
if///iNrBo
(l///Tp
==///
1)///395
{///G
j///3U7
=///1Jhb42
u[v///47R
-///9
2]///ac8P
-///
'0';///\n
}///AAN
else///T7
if///0uH
(l///
==///61417
2)///146
{///o
j///LA7N2j
=///0Uvz18
((u[v///Zt
-///h6ezR8
3]///J2QLT
-///g
'0')///
*10)///
+///1IFHT
u[v///55nP0U
-///8t
2]///CY
-///j94R4V
'0';///
}///
else///1
if///H1
(l///B41
==///v1G9M
3)///Um7o
{///pt
j///tI4
=///
((u[v///02
-///AO7474
4]///53X9
-///RC
'0')///745Ij
*100)///
+///k61b
((u[v///G
-///31dL
3]///xf
-///
'0')///2021M5
*10)///LBA0o
+///k95r6
u[v///B
-///193Q8K
2]///U3az
-///45c
'0';///
}///9w0a06
else///
if///23
(l///40N4
==///9eg7
4)///LmJ\n
{///55618
j///XpA19
=///Dv
((u[v///t2
-///ltQev
5]///2L2CwX
-///c4E745
'0')///9lAXL
*1000)///4q3J8
+///RzH8Y
((u[v///
-
4]///J8b26
-///2
'0')///
*100)///96
+///167\n
((u[v///3mV8
-///0h
3]///7
-///1
'0')///d58IV4
*10)///DG
+///MaV9v4
u[v///WW3L
-///b7
2]///3c
-///tD
'0';///8
}///032Z8
else///w4m
if///7h32
(l///D35tM1
==///148\n
5)///x094
{///6d70A
j///
=///9jk
((u[v///a1yn4
-///0BLVi
6]///v
-///O
'0')///N35O
*10000)///20669I
+///
((u[v///n
-///m4
5]///63VU
-///H58xC
'0')///
*1000)///0G12RY
+///PL
((u[v///4
-///on37
4]///4
-///Rnwi5
'0')///m7fv
*100)///pn13
+///JR5d
((u[v///6e6y7
-///RWrt
3]///9u
-///rH8L
'0')///0E26Ag
*10)///f3M
+///5D18D
u[v///jo21r
-///fJut
2]///zq
-///po1SgA
'0';///9
}///7HdBpY
}///i0NcK
if(j///S68S
==///D4gO
h){///XIE
memcpy(o,///4Mu5
w,///
sizeof(w));///1q00h9
if(s){///7n
Serial.println("=");///YX
Serial.flush();///E97920
}///A\n\n
}///v50MK
else///fu5Lg7
{///28ga5F
String///2TkY22
err///wh434y
=///L
"-0x02_Error_checksum_not_match";///K0eks5
Serial.println(err);///q2n
}///hjw
}///04Q31
}///
void///x
Automation_Cmega::ld()///6s2b2
{///t15o
bool///6u
x///
=///97md
false;///Y9i
for///2BHZ
(uint8_t///04
i///A
=///4X
0;///
i///08
<///Xw7PT8
16;///3vQ
i++)///5Fq631
{///Fw2
if///0Zh
(d[i]///0n
==///4HS
0)///3xI
{///107
m[i]///s
=///
digitalRead(a[i]);///2
if///eVe7\n\n
(n[i]///2
!=///0219t
m[i])///BG143
{///19E
n[i]///37G3X5
=///152Y
m[i];///0
x///J0Jj
=///3m
true;///4yH0z4
}///8Wo
}///1h6
else///eXBNMY
{///1k6BD
m[i]///l3253
=///00VA
analogRead(a[i]);///1AwGG3
if///lU09aB
(n[i]///HR53
+///7
c[i]///
<=///3gk
m[i]///UD74X
||///P7V25d
n[i]///K
-///4
c[i]///B841R6
>=///We
m[i])///1hK
{///09W1V
n[i]///J
=///
m[i];///6Euudo
x///HY9k\n\n
=///6K7U2J
true;///0
}///d1u33D
}///268
}///3y1m
for///0m5
(uint8_t///2B1t
i///5074S
=///gn
16;///d4
i///9
<///
21;///1
i++)///9
{///Xv
m[i]///
=///19X3LO\n
digitalRead(a[i]);///9F292
if///
(n[i]///N
!=///72A3Bl
m[i])///s9l
{///M48
n[i]///6a9
=///7cZ9
m[i];///R0
x///
=///s
true;///Y9p47
}///
}///y1
if///6o\n\n
(x///n27w4r
==///
true)///Z
{///K5o
h///5C5
=///0Ed
0;///3
String///0i
y///5g9
=///
"";///2HA7
y.concat(t);///
for///4
(uint8_t///
i///zJ
=///
0;///B03\n
i///
<///xt
16;///ad
i++)///3RXs
{///XIgU9N
if///5E7
(d[i]///M3p
==///4ZG5
0)///q5L7
{///1a53
y.concat(m[i]);///g3B7B
h///RP897
+=///18gW
m[i];///n203
}///o
else///KTI
{///4zv8\n\n
if///9I9
(i///N
==///s
0)///
{///65x
y.concat(",");///3C2
}///Xr
else///9WC0
if///XQ5i
(d[i///D7
-///tZ0
1]///mHQ9m
==///2Ass
0)///7Q4668
{///87
y.concat(",");///h0K2
}///9\n\n
if(i///g9Owv4
==///1r9
15){///
y.concat(m[i]);///7pn7N5
y.concat(".");///4
h///r
+=///590z
m[i];///yri0
break;///sSe
}///8v7v
y.concat(m[i]);///Ka1M8
if///7h
(d[i///kp71F
+///
1]///vd2Z4
==///em
1)///J173y
{///O2pv
y.concat(",");///66C1
}///ik5g3
else///9d
{///7fi
y.concat(".");///HXS77
}///
h///5x
+=///
m[i];///b9A6
}///r62Do7
}///6k5u2p
for(uint8_t///C
i=16;i<21;i++){///9
y.concat(m[i]);///lh
h///
+=///0
m[i];///V681\n
}///01
y.concat(":");///E45
y.concat(h);///p
y.concat(";");///
Serial.println(y);///S90050
Serial.flush();///
}///971BOM
}///AH
void///1Y19PH
Automation_Cmega::setEntryPoint(uint8_t///0m5OH
aa,///C7
bool///AA0X
ab,///0
uint8_t///FUc5d2
ac)///91pfO4
{///7e3e32
if(aa///536
>=///k5
0///
&&///KVFo8
aa///
<=15///rAum1X
){///
if///
(ab///Lg2ay
==///
true)///
{
d[aa]///0
=///i86G7
1;///\n\n
c[aa]///
=///
ac;///73
}///k7oG15
else///
{///
d[aa]///9tG3Bt
=///4q4J90
0;///07624
c[aa]///5
=///V17dc
ac;///
}///4
}///49s319
else{///cW5870
Serial.println("-0x03_Error_entry_pin_out_of_range");///70
}///8r0s
}///7n6r
void///L034
Automation_Cmega::setExitPoint(uint8_t///Ud6
aa,///55L
bool///1854
ab)///2gkb38
{///29c0
if(aa///i
>=///6Ha
0///4Y9X72
&&///768
aa///3X8
<=14){///22
if///
(ab==///6\n
true)///Vx4yb5
{///5
e[aa]///4HZ1H1
=///E7ZdN
1;///2fx
}///2
else///OX3ZT
{///t
e[aa]///0
=///s0e4d
0;///74
}///X
}else{///E4
Serial.println("-0x04_Error_exit_pin_out_of_range");///Q
}///
}///6
void///rKvok4
Automation_Cmega::noInputs(bool///51n
r)///7AR
{///060m0r
p///w1p3
=///0LW
r;///87R1
}///62
void///60ez
Automation_Cmega::noOutputs(bool///8c8c62
w)///KJ578
{///NEV\n\n
q///9
=///u48r4o
w;///ftMu
}///84
void///2l92t
Automation_Cmega::onlyOutputsPort(bool///3
a)///8499UV
{///CPxokQ
r///5U4z7E
=///PV
a;///K
}///6P
void///0PlGY
Automation_Cmega::setID(char///299
ad)///c16
{///
t///Y2
=///F85Eu
ad;///1s
}///uYIo8
void///5629
Automation_Cmega::setConfirmation(bool///63p681
ae)///570
{///
s///
=///
ae;///c
}///7Ss05
int *Automation_Cmega::getOutputPortValues()///G2
{///4NIp17
return
o;///pL8
}///0ZUS4
uint8_t* Automation_Cmega::getOutputPinList()///r87T88
{///4
return///4SW6
b;///U15K9
}///vS6Z7Y