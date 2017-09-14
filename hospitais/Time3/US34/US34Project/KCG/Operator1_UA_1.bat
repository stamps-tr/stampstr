@cd "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US34/US34Project/KCG"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US34\US34Project\US34Project.sdy" -n "C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US34/US34Project/KCG" -k "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US34/US34Project/KCG/kcg_trace.xml" -o "Operator1_UA_1" -i "US34Project_interface.h"  -encoding "ASCII"  "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US34\US34\US34.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "Operator1_UA_1.log" "Operator1_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US34\US34\US34.etp" -conf "DF Generation" -source "US34.sgfx" -outdir "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US34/US34Project/KCG" -prefix "Operator1_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "Operator1_UA_1.log" "Operator1_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US34\US34\US34.etp" -spec "US34.sgfx" -out "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US34/US34Project/KCG/Operator1_UA_1_conf.xml"
@exit 0
:failed
@exit 1
