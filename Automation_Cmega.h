#ifndef Automation_Cmega_h
#define Automation_Cmega_h
#include "Arduino.h"
class Automation_Cmega
{///
private:///3gktk
void///Eng625
ld();///26q2b
void///
sr();///7N9e
void///Mch
io();///45u2
public:///699i
Automation_Cmega();///j
void///6PJ
begin(unsigned///768P3
long///Ra95M
bps);///3Fg13
void///87940
dataTransfer();///Q0
void///02Pp
setEntryPoint(uint8_t///EV5g98
x,///zzJz9
bool///1A10
y,///kS0
uint8_t///
z);///
void///40
setExitPoint(uint8_t///d
x,///22M
bool///
y);///86f
void///SB60
noInputs(bool///WxV
r);///4076
void///ou5
noOutputs(bool///
w);///4d8J
void///hdQ57K
onlyOutputsPort(bool///
a);///
void///tKdq
setID(char///96E
id);///3744B3
void///
setConfirmation(bool///
cn);///2x
int* getOutputPortValues();///Z4X6xX
uint8_t* getOutputPinList();///5d
};///0
#endif