@cd "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\Paiva\SCADE\STAMPS-TR\ErlunControl\ErlunControl.sdy" -n "C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation" -k "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/kcg_trace.xml" -o "ErlunControl_UA_1" -i "ErlunControl_interface.h"  -encoding "ASCII"  "C:\Users\Paiva\SCADE\STAMPS-TR\cds\CDS.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "ErlunControl_UA_1.log" "ErlunControl_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\Paiva\SCADE\STAMPS-TR\cds\remote_control.etp" -conf "DF Generation" -source "CDS.sgfx" -outdir "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation" -prefix "ErlunControl_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "ErlunControl_UA_1.log" "ErlunControl_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\Paiva\SCADE\STAMPS-TR\cds\remote_control.etp" -spec "CDS.sgfx" -out "C:/Users/Paiva/SCADE/STAMPS-TR/ErlunControl/Simulation/ErlunControl_UA_1_conf.xml"
@exit 0
:failed
@exit 1
