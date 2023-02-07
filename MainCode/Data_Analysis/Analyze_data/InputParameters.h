#ifndef RUN_ANALYSIS
#define RUN_ANALYSIS

#include <iostream>

using namespace std;

// prints a discription of all parameters to terminal
bool discription_in               =            false;

// parameters for analysis
std::string target_in          =           "C12"; 
std::string beam_en_in         =           "2261";
int choice_in                  =             1;
int rotations_in               =             1;
int elSectors_flag_in          =             0;
int deltaPhiEl_in              =             0;
int thetaEl_lb_in              =             0;
int thetaEl_ub_in              =            180;
double elMom_lb_in             =             0;
int protSectors_flag_in        =             0;
int deltaPhiProt_in            =             0;
int thetaProt_lb_in            =             0;
int thetaProt_ub_in            =            180;
double protMom_lb_in           =             0; 
double protMom_ub_in           =            9999;
int detector_acceptance_in     =             1;
int NumOfProton_in             =            -1;


// applies momentum thereshold and overuns previous inputs 

// bool Applymomthresh = true;
// bool TruthLevel1p0piSignalStudy = false;
// bool TruthLevel0piSignalStudy = false;
// bool UsePhiThetaBand = false;


#endif
