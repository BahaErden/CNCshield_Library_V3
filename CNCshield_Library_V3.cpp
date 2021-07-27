#include "CNCshield_Library_V3.h"
//#include "Arduino.h"


CNCshield_Library_V3::CNCshield_Library_V3 (void){
}

void CNCshield_Library_V3::pinSetup(){
pinMode(StepXPin, OUTPUT);
pinMode(directionXPin, OUTPUT);

pinMode(StepYPin, OUTPUT);
pinMode(directionYPin, OUTPUT);

pinMode(StepZPin, OUTPUT);
pinMode(directionZPin, OUTPUT);

pinMode(StepAPin, OUTPUT);
pinMode(directionAPin, OUTPUT);

pinMode(enablePin, OUTPUT);
digitalWrite(enablePin, LOW);
}

void CNCshield_Library_V3::XdirRight(){
digitalWrite(directionXPin, HIGH);
}
void CNCshield_Library_V3::XdirLeft(){
digitalWrite(directionXPin, LOW);
}

void CNCshield_Library_V3::YdirRight(){
digitalWrite(directionYPin, HIGH);
}
void CNCshield_Library_V3::YdirLeft(){
digitalWrite(directionYPin, LOW);
}

void CNCshield_Library_V3::ZdirRight(){
digitalWrite(directionZPin, HIGH);
}
void CNCshield_Library_V3::ZdirLeft(){
digitalWrite(directionZPin, LOW);
}

void CNCshield_Library_V3::AdirRight(){
digitalWrite(directionAPin, HIGH);
}
void CNCshield_Library_V3::AdirLeft(){
digitalWrite(directionAPin, LOW);
}

void CNCshield_Library_V3::StepX(int stepX, int speedX){
    speedX = (((60/speedX)/200)/2)*1000000;
if(speedX < 25){
speedX = 25;
}
if(speedX > 300){
speedX = 300;
}

for(int i=0; i<stepX;i++){
digitalWrite(StepXPin, HIGH);
delayMicroseconds(speedX);
digitalWrite(StepXPin, LOW);
delayMicroseconds(speedX);
}
}

void CNCshield_Library_V3::StepY(int stepY, int speedY){
    speedY = (((60/speedY)/200)/2)*1000000;
if(speedY < 25){
speedY = 25;
}
if(speedY > 300){
speedY = 300;
}

for(int i=0; i<stepY;i++){
digitalWrite(StepYPin, HIGH);
delayMicroseconds(speedY);
digitalWrite(StepYPin, LOW);
delayMicroseconds(speedY);
}
}

void CNCshield_Library_V3::StepZ(int stepZ, int speedZ){
    speedZ = (((60/speedZ)/200)/2)*1000000;
if(speedZ < 25){
speedZ = 25;
}
if(speedZ > 300){
speedZ = 300;
}

for(int i=0; i<stepZ;i++){
digitalWrite(StepZPin, HIGH);
delayMicroseconds(speedZ);
digitalWrite(StepZPin, LOW);
delayMicroseconds(speedZ);
}
}

void CNCshield_Library_V3::StepA(int stepA, int speedA){
    speedA = (((60/speedA)/200)/2)*1000000;
if(speedA < 25){
speedA = 25;
}
if(speedA > 300){
speedA = 300;
}

for(int i=0; i<stepA;i++){
digitalWrite(StepAPin, HIGH);
delayMicroseconds(speedA);
digitalWrite(StepAPin, LOW);
delayMicroseconds(speedA);
}
}

void CNCshield_Library_V3::stepsON(){
    digitalWrite(enablePin, LOW);
}
void CNCshield_Library_V3::stepsOFF(){
    digitalWrite(enablePin, HIGH);
}

void CNCshield_Library_V3::InvertPin(int x, int y, int z, int a){
if(x == 1){
int stepx_dir = directionXPin, stepx = StepXPin;
directionXPin = stepx;
StepXPin = stepx_dir;
}
if(y == 1){
int stepy_dir = directionYPin, stepy = StepYPin;
directionYPin = stepy;
StepYPin = stepy_dir;
}
if(z == 1){
int stepz_dir = directionZPin, stepz = StepZPin;
directionZPin = stepz;
StepZPin = stepz_dir;
}
if(a == 1){
int stepa_dir = directionAPin, stepa = StepAPin;
directionAPin = stepa;
StepAPin = stepa_dir;
}
}
