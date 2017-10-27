@cd "C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\victo\Desktop\STAMPS\UserApplication\S2A\S2A.sdy" -n "C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation" -k "C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation/kcg_trace.xml" -o "S2A_UA_1" -i "S2A_interface.h"  -encoding "ASCII"  "C:\Users\victo\Desktop\STAMPS\DefinitionFile\S2A\S2A.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "S2A_UA_1.log" "S2A_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\victo\Desktop\STAMPS\DefinitionFile\S2A\S2A.etp" -conf "DF Generation" -source "S2A.sgfx" -outdir "C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation" -prefix "S2A_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "S2A_UA_1.log" "S2A_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\victo\Desktop\STAMPS\DefinitionFile\S2A\S2A.etp" -spec "S2A.sgfx" -out "C:/Users/victo/Desktop/STAMPS/UserApplication/S2A/Simulation/S2A_UA_1_conf.xml"
@exit 0
:failed
@exit 1
