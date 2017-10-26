@cd "C:/Users/Julhio/Desktop/US94/UserApplication/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\Julhio\Desktop\US94\UserApplication\socket_test.sdy" -n "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/Julhio/Desktop/US94/UserApplication/Simulation" -k "C:/Users/Julhio/Desktop/US94/UserApplication/Simulation/kcg_trace.xml" -o "test_UA_1" -i "socket_test_interface.h"  -encoding "ASCII"  "C:\Users\Julhio\Desktop\US94\DefinitionFile\CC.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "test_UA_1.log" "test_UA_1_uaadaptor.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\Julhio\Desktop\US94\DefinitionFile\comand_control.etp" -conf "DF Generation" -source "CC.sgfx" -outdir "C:/Users/Julhio/Desktop/US94/UserApplication/Simulation" -prefix "test_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "test_UA_1.log" "test_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\Julhio\Desktop\US94\DefinitionFile\comand_control.etp" -spec "CC.sgfx" -out "C:/Users/Julhio/Desktop/US94/UserApplication/Simulation/test_UA_1_conf.xml"
@exit 0
:failed
@exit 1
