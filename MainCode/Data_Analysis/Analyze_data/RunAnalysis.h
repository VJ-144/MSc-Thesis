#ifndef RUN_ANALYSIS
#define RUN_ANALYSIS

#include <iostream>

using namespace std;


// parameters for analysis
std::string target          =           "C12"; 
std::string beam_en         =           "2261";
int choice                  =             1;
int rotations               =             1;
int elSectors_flag          =             0;
int deltaPhiEl              =             0;
int thetaEl_lb              =             0;
int thetaEl_ub              =            180;
double elMom_lb             =             0;
int protSectors_flag        =             0;
int deltaPhiProt            =             0;
int thetaProt_lb            =             0;
int thetaProt_ub            =            180;
double protMom_lb           =             0; 
double protMom_ub           =            9999;
int detector_acceptance     =             1;
int NumOfProton             =            -1;


// applies momentum thereshold and overuns previous inputs 
bool Applymomthresh = true;

// currently not implemeted in code - commented out in genie_analysis.C
bool TruthLevel1p0piSignalStudy = false;
bool TruthLevel0piSignalStudy = false;
bool UsePhiThetaBand = false;




#endif

