@cd "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG"
@set OCAMLRUNPARAM=b
"C:/Program Files/ANSYS Inc/v180/SCADE/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US55\US55Project\US55Project.sdy" -n "C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG" -k "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG/kcg_trace.xml" -o "Operator1_UA_1" -i "US55Project_interface.h"  -encoding "ASCII"  "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US55\T01\Batimento.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "Operator1_UA_1.log" "Operator1_UA_1_uaadaptor.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US55\T01\Smart.etp" -conf "DF Generation" -source "Batimento.sgfx" -outdir "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG" -prefix "Operator1_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "Operator1_UA_1.log" "Operator1_UA_1_dfgen.log"
"C:\Program Files\ANSYS Inc\v180\SCADE\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\guilh\Desktop\ITA\stampstr\hospitais\Time3\US55\T01\Smart.etp" -spec "Batimento.sgfx" -out "C:/Users/guilh/Desktop/ITA/stampstr/hospitais/Time3/US55/US55Project/KCG/Operator1_UA_1_conf.xml"
@exit 0
:failed
@exit 1
