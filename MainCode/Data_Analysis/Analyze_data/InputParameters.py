import sys, os, itertools, subprocess



# prints a discription of all parameters to terminal
discription                     =           True

# parameters for analysis
target                          =           "C12"; 
beam_en                         =           "2261"
choice                          =             1
rotations                       =             1
elSectors_flag                  =             0
deltaPhiEl                      =             0
thetaEl_lb                      =             0
thetaEl_ub                      =            180
elMom_lb                        =             0
protSectors_flag                =             0
deltaPhiProt                    =             0
thetaProt_lb                    =             0
thetaProt_ub                    =            180
protMom_lb                      =             0
protMom_ub                      =            9999
detector_acceptance             =             1
NumOfProton                     =            -1


if (discription): cmd = f"python ./genie_analysis "
else:
    cmd = f"python ./genie_analysis {target} {beam_en} {choice} {rotations} {elSectors_flag} {deltaPhiEl} \
        {thetaEl_lb} {thetaEl_ub} {elMom_lb} {protSectors_flag} {deltaPhiProt} {thetaProt_lb} {thetaProt_ub} \
        {protMom_lb} {protMom_ub} {detector_acceptance} {NumOfProton}"
    # cmd = 'python ./genie_analysis {} {} {} {} {} {} {} {} {} {} {} {} {} {} {} {} {}'.format(target, beam_en, \
    #         choice, rotations, elSectors_flag, deltaPhiEl, thetaEl_lb, thetaEl_ub, elMom_lb, protSectors_flag,\
    #         deltaPhiProt, thetaProt_lb, thetaProt_ub, protMom_lb, protMom_ub, detector_acceptance, NumOfProton)

subprocess.call(cmd, shell=True) 

