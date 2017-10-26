@cd "C:/Users/victo/SCADE/batimento/Simulation"
@set OCAMLRUNPARAM=b
"C:/Program Files (x86)/Esterel Technologies/SCADE R17/SCADE/bin/uaadaptor.exe" -sdy "C:\Users\victo\SCADE\batimento\batimento.sdy" -n "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\config\a661_description\a661.xml" -outdir "C:/Users/victo/SCADE/batimento/Simulation" -k "C:/Users/victo/SCADE/batimento/Simulation/kcg_trace.xml" -o "batimento_UA_1" -i "batimento_interface.h"  -encoding "ASCII"  "C:\Users\victo\display_saude\UADF.sgfx"
@IF ERRORLEVEL 1 GOTO failed
@move "batimento_UA_1.log" "batimento_UA_1_uaadaptor.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch generate "C:\Users\victo\display_saude\display_saude.etp" -conf "DF Generation" -source "UADF.sgfx" -outdir "C:/Users/victo/SCADE/batimento/Simulation" -prefix "batimento_UA_1"
@IF ERRORLEVEL 1 GOTO failed
@move "batimento_UA_1.log" "batimento_UA_1_dfgen.log"
"C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE Display\bin\ScadeDisplayConsole.exe" batch  generateServerConf "C:\Users\victo\display_saude\display_saude.etp" -spec "UADF.sgfx" -out "C:/Users/victo/SCADE/batimento/Simulation/batimento_UA_1_conf.xml"
@exit 0
:failed
@exit 1
