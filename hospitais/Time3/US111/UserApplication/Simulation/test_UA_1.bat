@cd "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US111\UserApplication\socket_test.sdy" -n "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation" -k "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation/kcg_trace.xml" -o "test_UA_1" -i "socket_test_interface.h"  -encoding "ASCII"  "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US111\DefinitionFile\SURVEYDF.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "test_UA_1.log" "test_UA_1_uaadaptor.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US111\DefinitionFile\survey_display.etp" -conf "DF Generation" -source "SURVEYDF.sgfx" -outdir "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation" -prefix "test_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "test_UA_1.log" "test_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\Julhio\Documents\ITA\CE-237\stampstr\hospitais\Time3\US111\DefinitionFile\survey_display.etp" -spec "SURVEYDF.sgfx" -out "C:/Users/Julhio/Documents/ITA/CE-237/stampstr/hospitais/Time3/US111/UserApplication/Simulation/test_UA_1_conf.xml"
@exit 0
:failed
@exit 1
