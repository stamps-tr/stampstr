@cd "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US71\UserApplication\comando_controle.sdy" -n "C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation" -k "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/kcg_trace.xml" -o "control_UA_1" -i "comando_controle_interface.h"  -encoding "ASCII"  "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US71\DefinitionFile\CC.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "control_UA_1.log" "control_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US71\DefinitionFile\comando_controle.etp" -conf "DF Generation" -source "CC.sgfx" -outdir "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation" -prefix "control_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "control_UA_1.log" "control_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US71\DefinitionFile\comando_controle.etp" -spec "CC.sgfx" -out "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US71/UserApplication/Simulation/control_UA_1_conf.xml"
@exit 0
:failed
@exit 1
