#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic -Wall

all: S2A.exe S2A.dll 

win32/A661Cosim.o: ../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/A661Cosim.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\A661Cosim.c" -o "win32\A661Cosim.o"

win32/S2A_cosim.o: S2A_cosim.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_cosim.c" -o "win32\S2A_cosim.o"

win32/S2A_UA_1.o: S2A_UA_1.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_UA_1.c" -o "win32\S2A_UA_1.o"

win32/S2A_UA_1_private.o: S2A_UA_1_private.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_UA_1_private.c" -o "win32\S2A_UA_1_private.o"

win32/S2A_UA_1_LAY_1.o: S2A_UA_1_LAY_1.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_UA_1_LAY_1.c" -o "win32\S2A_UA_1_LAY_1.o"

win32/S2A.o: S2A.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A.c" -o "win32\S2A.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/S2A_snapshot.o: S2A_snapshot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_snapshot.c" -o "win32\S2A_snapshot.o"

win32/S2A_type.o: S2A_type.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_type.c" -o "win32\S2A_type.o"

win32/SmuPredefConv.o: ../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuPredefConv.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuPredefConv.c" -o "win32\SmuPredefConv.o"

win32/SmuTypes.o: ../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuTypes.c" -o "win32\SmuTypes.o"

win32/SmuLib.o: ../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuLib.c" -o "win32\SmuLib.o"

win32/SmuVTable.o: ../../../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuVTable.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuVTable.c" -o "win32\SmuVTable.o"

win32/S2A_mapping.o: S2A_mapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_mapping.c" -o "win32\S2A_mapping.o"

win32/Serial.o: ../../../IntegrationCode/Serial.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\IntegrationCode\Serial.c" -o "win32\Serial.o"

win32/S2A_interface.o: S2A_interface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_interface.c" -o "win32\S2A_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuProxy.c" -o "win32\SmuProxy.o"

S2A.dll: win32/A661Cosim.o win32/S2A_cosim.o win32/S2A_UA_1.o win32/S2A_UA_1_private.o win32/S2A_UA_1_LAY_1.o win32/S2A.o win32/kcg_types.o win32/kcg_consts.o win32/S2A_snapshot.o win32/S2A_type.o win32/SmuPredefConv.o win32/SmuTypes.o win32/SmuLib.o win32/SmuVTable.o win32/S2A_mapping.o win32/Serial.o win32/S2A_interface.o win32/SmuProxy.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "win32\A661Cosim.o" "win32\S2A_cosim.o" "win32\S2A_UA_1.o" "win32\S2A_UA_1_private.o" "win32\S2A_UA_1_LAY_1.o" "win32\S2A.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\S2A_snapshot.o" "win32\S2A_type.o" "win32\SmuPredefConv.o" "win32\SmuTypes.o" "win32\SmuLib.o" "win32\SmuVTable.o" "win32\S2A_mapping.o" "win32\Serial.o" "win32\S2A_interface.o" "win32\SmuProxy.o" -Wl,--output-def,"SmuExport.def" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3a.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3as.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3c.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3cs.lib" -lm -lwsock32 -m32 -o "S2A.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuExport.def" "SmuExport.def"

win32/S2A_dll.o: S2A_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "S2A_dll.c" -o "win32\S2A_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\..\IntegrationCode" -I"..\..\..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\include" -I"..\..\..\..\..\..\..\eclipse-paho-mqtt-c-windows-1.2.0\lib" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

S2A.exe: win32/S2A_dll.o win32/SmuMainWindows.o 
	gcc "win32\S2A_dll.o" "win32\SmuMainWindows.o" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3a.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3as.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3c.lib" "C:\eclipse-paho-mqtt-c-windows-1.2.0\lib\paho-mqtt3cs.lib" -lm -lwsock32 -m32 -o "S2A.exe" 

#############################################################
######    End of Makefile
#############################################################
