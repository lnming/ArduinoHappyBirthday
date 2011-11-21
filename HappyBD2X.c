#include "HappyBD2X.h"

// Playtune bytestream for file http://homepage.mac.com/dpeltier/Sites/QT-MIDI/HappyBD2X.mid created by MIDITONES V1.3
byte PROGMEM score [] = {
0x90,0x62, 0x91,0x56, 0x92,0x32, 0x93,0x26, 1,44, 0x94,0x3E, 0,241, 0x84, 0,58, 0x94,0x4A, 0,241, 
0x84, 2,88, 0x80, 0x81, 0x82, 0x83, 1,102, 0x90,0x62, 0x91,0x56, 0x92,0x34, 0x93,0x26, 1,44, 0x94,0x3E, 
0,241, 0x84, 0,58, 0x94,0x4A, 0,241, 0x84, 2,88, 0x80, 0x81, 0x82, 0x83, 1,102, 0x90,0x56, 0x91,0x62, 
0x92,0x36, 0x93,0x26, 1,44, 0x94,0x3E, 0,241, 0x84, 0,58, 0x94,0x4A, 0,241, 0x84, 0,58, 0x94,0x4A, 
0,241, 0x84, 0,58, 0x94,0x4A, 0,241, 0x80, 0x81, 0x82, 0x83, 0x84, 0,58, 0x90,0x4A, 0,241, 0x80, 
0,58, 0x90,0x4A, 0,241, 0x80, 0,58, 0x90,0x4A, 0,241, 0x80, 0,58, 0x90,0x4A, 0,241, 0x80, 
0,58, 0x90,0x4A, 0,241, 0x80, 0,58, 0x90,0x4A, 0x91,0x3E, 0x92,0x4A, 1,102, 0x80, 0x82, 0x81, 0,91, 
0x90,0x4A, 0x91,0x3E, 0x92,0x4A, 0,120, 0x80, 0x82, 0x81, 0,29, 0x90,0x4C, 0x91,0x40, 0x92,0x37, 0x93,0x47, 
0x94,0x3E, 0x95,0x47, 0,241, 0x83, 0x85, 0,58, 0x93,0x4A, 0x95,0x2F, 0,179, 0x80, 0x81, 0,62, 0x83, 
0x85, 0,58, 0x90,0x47, 0x91,0x32, 0x93,0x26, 0,33, 0x95,0x4A, 0,208, 0x80, 0x81, 0x83, 0,58, 0x90,0x4A, 
0x91,0x37, 0x93,0x2B, 0,241, 0x80, 0x85, 0x81, 0x82, 0x83, 0,50, 0x90,0x4F, 0x91,0x43, 0,8, 0x92,0x47, 
0x93,0x3B, 0x95,0x2F, 0,8, 0x84, 0,233, 0x82, 0x83, 0x85, 0,58, 0x92,0x4A, 0x93,0x3E, 0x94,0x32, 0,241, 
0x82, 0x83, 0x84, 0,41, 0x80, 0x81, 0,16, 0x90,0x4E, 0x91,0x42, 0x92,0x39, 0x93,0x3E, 0x94,0x48, 0x95,0x48, 
0,241, 0x84, 0x85, 0,58, 0x94,0x45, 0x95,0x32, 0,241, 0x84, 0x85, 0,58, 0x94,0x56, 0x95,0x4A, 0,241, 
0x85, 0,58, 0x95,0x4A, 0,241, 0x85, 0,37, 0x80, 0x81, 0,4, 0x90,0x4A, 0x91,0x3E, 0,16, 0x95,0x4A, 
0,241, 0x82, 0x81, 0x83, 0x80, 0x85, 0,58, 0x90,0x4A, 0,29, 0x80, 0,29, 0x84, 0,58, 0x90,0x4A, 
0x91,0x3E, 0,125, 0x80, 0,45, 0x81, 0,12, 0x90,0x4C, 0x91,0x40, 0x92,0x39, 0x93,0x48, 0x94,0x3E, 0x95,0x45, 
0,241, 0x85, 0,58, 0x95,0x4A, 0,241, 0x85, 0,37, 0x95,0x4A, 0,20, 0x80, 0x81, 0x90,0x45, 0x91,0x2D, 
0,241, 0x80, 0x81, 0,58, 0x90,0x4A, 0x91,0x32, 0,241, 0x80, 0x85, 0x81, 0,50, 0x90,0x51, 0x91,0x45, 
0,8, 0x95,0x45, 0,20, 0x84, 0,220, 0x82, 0x83, 0x81, 0x85, 0,58, 0x91,0x4A, 0x92,0x39, 0x93,0x2D, 
0,241, 0x81, 0x82, 0x83, 0,58, 0x80, 0x90,0x4F, 0x91,0x43, 0x92,0x37, 0x93,0x3E, 0x94,0x47, 0x95,0x47, 0,241, 
0x84, 0x85, 0x82, 0,58, 0x92,0x43, 0x94,0x2B, 0x95,0x1F, 0,241, 0x81, 0x82, 0x84, 0x85, 0,58, 0x91,0x56, 
0x92,0x4A, 0x94,0x3E, 0x95,0x32, 0,241, 0x82, 0,58, 0x92,0x4A, 0,241, 0x82, 0,58, 0x92,0x4A, 0,29, 
0x80, 0,212, 0x83, 0x84, 0x82, 0,58, 0x90,0x4A, 0,58, 0x81, 0x85, 0x80, 0,91, 0x90,0x4A, 0x91,0x3E, 
0,91, 0x80, 0,29, 0x81, 0,29, 0x90,0x56, 0x91,0x4A, 0x92,0x37, 0x93,0x47, 0x94,0x3E, 0x95,0x47, 0,241, 
0x83, 0x85, 0,58, 0x93,0x43, 0x95,0x2F, 0,179, 0x80, 0x81, 0,62, 0x83, 0x85, 0,58, 0x90,0x4F, 0x91,0x32, 
0x93,0x26, 0,29, 0x95,0x53, 0,212, 0x80, 0x81, 0x83, 0,58, 0x90,0x4F, 0x91,0x37, 0x93,0x2B, 0,241, 
0x80, 0x81, 0x82, 0x83, 0,58, 0x90,0x4F, 0x91,0x43, 0x92,0x53, 0x93,0x3B, 0,29, 0x82, 0x85, 0,212, 0x84, 
0x83, 0,58, 0x92,0x4F, 0x93,0x37, 0x94,0x2B, 0,241, 0x80, 0x82, 0x83, 0x84, 0,58, 0x90,0x34, 0x92,0x43, 
0x93,0x3C, 0x94,0x4C, 0x95,0x36, 0,20, 0,33, 0x81, 0x82, 1,6, 0x84, 0x85, 0,79, 0x91,0x48, 0x92,0x34, 
0x94,0x28, 1,73, 0x81, 0x80, 0x82, 0x84, 0,83, 0x90,0x58, 0x91,0x4F, 0x92,0x30, 0x94,0x24, 0,37, 0x95,0x4C, 
0,37, 1,19, 0x81, 0,87, 0x91,0x4F, 1,2, 0x82, 0x84, 0,87, 0x81, 0,87, 0x91,0x4C, 0x92,0x36, 
0x94,0x2A, 0,25, 0,33, 0x81, 0x85, 0,179, 0x83, 0x82, 0x84, 0,58, 0x91,0x48, 0x92,0x39, 0x93,0x2D, 
0,58, 0x80, 0,25, 0x81, 0,91, 0x90,0x54, 0x91,0x48, 0,62, 0x81, 0x82, 0x83, 0,54, 0x80, 0,8, 
0x90,0x53, 0x91,0x47, 0x92,0x56, 0x93,0x47, 0x94,0x37, 0x95,0x3E, 0,233, 0x84, 0,62, 0x94,0x4F, 0,179, 
0x80, 0x81, 0x83, 0,58, 0x84, 0,58, 0x90,0x4A, 0x91,0x37, 0x93,0x2B, 0,58, 0x94,0x4F, 0,179, 0x80, 
0x81, 0x83, 0,62, 0x90,0x4F, 0x91,0x32, 0x93,0x26, 0,58, 0x82, 0x85, 0,175, 0x80, 0x84, 0x81, 0x83, 0,62, 
0x90,0x54, 0x91,0x45, 0x92,0x3C, 0x93,0x32, 0x94,0x4E, 0x95,0x39, 0,16, 0,29, 0,191, 0x84, 0x85, 0,58, 
0x94,0x4A, 0x95,0x32, 0,179, 0x80, 0x81, 0x82, 0x83, 0x85, 0,58, 0x84, 0,58, 0x90,0x4F, 0x91,0x43, 0x92,0x53, 
0x93,0x3B, 0x94,0x37, 0x95,0x43, 0,45, 0,191, 0x80, 0x84, 0,58, 0x90,0x4A, 0x94,0x32, 0,179, 0x82, 
0,62, 0x80, 0x84, 0,58, 0x90,0x5B, 0x92,0x43, 0x94,0x2B, 0,237, 0x81, 0x82, 0x85, 0,116, 0,237, 
0x84, 0,241, 0x83, 0,116, 0x80, 0,237, 0x90,0x62, 0x91,0x56, 0x92,0x32, 0x93,0x26, 1,44, 0x94,0x3E, 
0,237, 0x84, 0,62, 0x94,0x4A, 0,237, 0x84, 2,88, 0x80, 0x81, 0x82, 0x83, 1,106, 0x90,0x62, 0x91,0x56, 
0x92,0x34, 0x93,0x26, 1,44, 0x94,0x3E, 0,237, 0x84, 0,62, 0x94,0x4A, 0,237, 0x84, 2,88, 0x80, 
0x81, 0x82, 0x83, 1,106, 0x90,0x56, 0x91,0x62, 0x92,0x36, 0x93,0x26, 1,44, 0x94,0x3E, 0,237, 0x84, 0,62, 
0x94,0x4A, 0,237, 0x84, 0,62, 0x94,0x4A, 0,237, 0x84, 0,62, 0x94,0x4A, 0,237, 0x80, 0x81, 0x82, 
0x83, 0x84, 0,62, 0x90,0x4A, 0,237, 0x80, 0,62, 0x90,0x4A, 0,237, 0x80, 3,194, 0x90,0x4A, 0x91,0x3E, 
0x92,0x4A, 1,102, 0x80, 0x82, 0x81, 0,91, 0x90,0x4A, 0x91,0x3E, 0x92,0x4A, 0,120, 0x80, 0x82, 0x81, 0,29, 
0x90,0x4C, 0x91,0x40, 0x92,0x37, 0x93,0x47, 0x94,0x3E, 0x95,0x47, 0,237, 0x83, 0x85, 0,62, 0x93,0x4A, 0x95,0x2F, 
0,179, 0x80, 0x81, 0,58, 0x83, 0x85, 0,62, 0x90,0x47, 0x91,0x32, 0x93,0x26, 0,33, 0x95,0x4A, 0,204, 
0x80, 0x81, 0x83, 0,62, 0x90,0x4A, 0x91,0x37, 0x93,0x2B, 0,237, 0x80, 0x85, 0x81, 0x82, 0x83, 0,54, 0x90,0x4F, 
0x91,0x43, 0,8, 0x92,0x47, 0x93,0x3B, 0x95,0x2F, 0,8, 0x84, 0,229, 0x82, 0x83, 0x85, 0,62, 0x92,0x4A, 
0x93,0x3E, 0x94,0x32, 0,237, 0x82, 0x83, 0x84, 0,45, 0x80, 0x81, 0,16, 0x90,0x4E, 0x91,0x42, 0x92,0x39, 
0x93,0x3E, 0x94,0x48, 0x95,0x48, 0,237, 0x84, 0x85, 0,62, 0x94,0x45, 0x95,0x32, 0,237, 0x84, 0x85, 0,62, 
0x94,0x56, 0x95,0x4A, 0,237, 0x85, 0,62, 0x95,0x4A, 0,237, 0x85, 0,41, 0x80, 0x81, 0,4, 0x90,0x4A, 
0x91,0x3E, 0,16, 0x95,0x4A, 0,237, 0x82, 0x81, 0x83, 0x80, 0x85, 0,62, 0x90,0x4A, 0,29, 0x80, 0,29, 
0x84, 0,58, 0x90,0x4A, 0x91,0x3E, 0,120, 0x80, 0,50, 0x81, 0,12, 0x90,0x4C, 0x91,0x40, 0x92,0x39, 
0x93,0x48, 0x94,0x3E, 0x95,0x45, 0,237, 0x85, 0,62, 0x95,0x4A, 0,237, 0x85, 0,41, 0x95,0x4A, 0,16, 
0x80, 0x81, 0,4, 0x90,0x45, 0x91,0x2D, 0,237, 0x80, 0x81, 0,62, 0x90,0x4A, 0x91,0x32, 0,237, 0x80, 
0x85, 0x81, 0,50, 0x90,0x51, 0x91,0x45, 0,12, 0x95,0x45, 0,20, 0x84, 0,216, 0x82, 0x83, 0x81, 0x85, 
0,62, 0x91,0x4A, 0x92,0x39, 0x93,0x2D, 0,237, 0x81, 0x82, 0x83, 0,62, 0x80, 0x90,0x4F, 0x91,0x43, 0x92,0x37, 
0x93,0x3E, 0x94,0x47, 0x95,0x47, 0,237, 0x84, 0x85, 0x82, 0,62, 0x92,0x43, 0x94,0x2B, 0x95,0x1F, 0,237, 
0x81, 0x82, 0x84, 0x85, 0,62, 0x91,0x56, 0x92,0x4A, 0x94,0x3E, 0x95,0x32, 0,237, 0x82, 0,62, 0x92,0x4A, 
0,237, 0x82, 0,62, 0x92,0x4A, 0,29, 0x80, 0,208, 0x83, 0x84, 0x82, 0,62, 0x90,0x4A, 0,58, 
0x81, 0x85, 0x80, 0,91, 0x90,0x4A, 0x91,0x3E, 0,87, 0x80, 0,33, 0x81, 0,29, 0x90,0x56, 0x91,0x4A, 
0x92,0x37, 0x93,0x47, 0x94,0x3E, 0x95,0x47, 0,237, 0x83, 0x85, 0,62, 0x93,0x43, 0x95,0x2F, 0,179, 0x80, 
0x81, 0,58, 0x83, 0x85, 0,62, 0x90,0x4F, 0x91,0x32, 0x93,0x26, 0,29, 0x95,0x53, 0,208, 0x80, 0x81, 
0x83, 0,62, 0x90,0x4F, 0x91,0x37, 0x93,0x2B, 0,237, 0x80, 0x81, 0x82, 0x83, 0,62, 0x90,0x4F, 0x91,0x43, 
0x92,0x53, 0x93,0x3B, 0,29, 0x82, 0x85, 0,208, 0x84, 0x83, 0,62, 0x92,0x4F, 0x93,0x37, 0x94,0x2B, 0,237, 
0x80, 0x82, 0x83, 0x84, 0,62, 0x90,0x34, 0x92,0x43, 0x93,0x3C, 0x94,0x4C, 0x95,0x36, 0,20, 0,33, 0x81, 
0x82, 1,6, 0x84, 0x85, 0,79, 0x91,0x48, 0x92,0x34, 0x94,0x28, 1,69, 0x81, 0x80, 0x82, 0x84, 0,87, 
0x90,0x58, 0x91,0x4F, 0x92,0x30, 0x94,0x24, 0,37, 0x95,0x4C, 0,41, 1,14, 0x81, 0,87, 0x91,0x4F, 
1,2, 0x82, 0x84, 0,87, 0x81, 0,87, 0x91,0x4C, 0x92,0x36, 0x94,0x2A, 0,25, 0,33, 0x81, 0x85, 
0,179, 0x83, 0x82, 0x84, 0,58, 0x91,0x48, 0x92,0x39, 0x93,0x2D, 0,62, 0x80, 0,25, 0x81, 0,87, 
0x90,0x54, 0x91,0x48, 0,62, 0x81, 0x82, 0x83, 0,54, 0x80, 0,4, 0x90,0x53, 0x91,0x47, 0x92,0x56, 0x93,0x47, 
0x94,0x37, 0x95,0x3E, 1,60, 0x84, 0,79, 0x94,0x4F, 0,237, 0x80, 0x81, 0x83, 0,79, 0x84, 0,79, 
0x90,0x4A, 0x91,0x37, 0x93,0x2B, 0,75, 0x94,0x4F, 0,241, 0x80, 0x81, 0x83, 0,79, 0x90,0x4F, 0x91,0x32, 
0x93,0x26, 0,79, 0x82, 0x85, 0,233, 0x80, 0x84, 0x81, 0x83, 0,83, 0x90,0x54, 0x91,0x45, 0x92,0x3C, 0x93,0x32, 
0x94,0x4E, 0x95,0x39, 0,20, 0,37, 0,254, 0x84, 0x85, 0,79, 0x94,0x4A, 0x95,0x32, 0,237, 0x80, 
0x81, 0x82, 0x83, 0x85, 0,79, 0x84, 0,79, 0x90,0x4F, 0x91,0x43, 0x92,0x53, 0x93,0x3E, 0x94,0x3B, 0x95,0x43, 
0,58, 1,2, 0x80, 0,79, 0x90,0x4A, 0,233, 0x82, 0,83, 0x80, 0,75, 0x90,0x5B, 0x92,0x43, 
1,60, 0x81, 0x82, 0x85, 0,154, 1,56, 1,94, 0x83, 0x84, 0,170, 0x80, 0xf0};
// This score contains 1753 bytes, and 6 tone generators are used.
// 100 notes had to be skipped.
