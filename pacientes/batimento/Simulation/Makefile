#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: batimento.exe batimento.dll 

win32/A661Cosim.o: ../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/A661Cosim.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\A661Cosim.c" -o "win32\A661Cosim.o"

win32/batimento_cosim.o: batimento_cosim.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_cosim.c" -o "win32\batimento_cosim.o"

win32/batimento_UA_1.o: batimento_UA_1.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_UA_1.c" -o "win32\batimento_UA_1.o"

win32/batimento_UA_1_private.o: batimento_UA_1_private.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_UA_1_private.c" -o "win32\batimento_UA_1_private.o"

win32/batimento_UA_1_LAY_1.o: batimento_UA_1_LAY_1.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_UA_1_LAY_1.c" -o "win32\batimento_UA_1_LAY_1.o"

win32/batimento.o: batimento.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento.c" -o "win32\batimento.o"

win32/NumericToFloat32_math_uint32.o: NumericToFloat32_math_uint32.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "NumericToFloat32_math_uint32.c" -o "win32\NumericToFloat32_math_uint32.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/batimento_snapshot.o: batimento_snapshot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_snapshot.c" -o "win32\batimento_snapshot.o"

win32/batimento_type.o: batimento_type.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_type.c" -o "win32\batimento_type.o"

win32/SmuPredefConv.o: ../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuPredefConv.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuPredefConv.c" -o "win32\SmuPredefConv.o"

win32/SmuTypes.o: ../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuTypes.c" -o "win32\SmuTypes.o"

win32/SmuLib.o: ../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuLib.c" -o "win32\SmuLib.o"

win32/SmuVTable.o: ../../../../../Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuVTable.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuVTable.c" -o "win32\SmuVTable.o"

win32/batimento_mapping.o: batimento_mapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_mapping.c" -o "win32\batimento_mapping.o"

win32/main.o: ../../file_reader_cpp/file_reader/main.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\..\file_reader_cpp\file_reader\main.c" -o "win32\main.o"

win32/batimento_interface.o: batimento_interface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_interface.c" -o "win32\batimento_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuProxy.c" -o "win32\SmuProxy.o"

batimento.dll: win32/A661Cosim.o win32/batimento_cosim.o win32/batimento_UA_1.o win32/batimento_UA_1_private.o win32/batimento_UA_1_LAY_1.o win32/batimento.o win32/NumericToFloat32_math_uint32.o win32/kcg_types.o win32/kcg_consts.o win32/batimento_snapshot.o win32/batimento_type.o win32/SmuPredefConv.o win32/SmuTypes.o win32/SmuLib.o win32/SmuVTable.o win32/batimento_mapping.o win32/main.o win32/batimento_interface.o win32/SmuProxy.o SmuExport.def 
	gcc -mwindows -mwin32 -shared -static-libgcc  "win32\A661Cosim.o" "win32\batimento_cosim.o" "win32\batimento_UA_1.o" "win32\batimento_UA_1_private.o" "win32\batimento_UA_1_LAY_1.o" "win32\batimento.o" "win32\NumericToFloat32_math_uint32.o" "win32\kcg_types.o" "win32\kcg_consts.o" "win32\batimento_snapshot.o" "win32\batimento_type.o" "win32\SmuPredefConv.o" "win32\SmuTypes.o" "win32\SmuLib.o" "win32\SmuVTable.o" "win32\batimento_mapping.o" "win32\main.o" "win32\batimento_interface.o" "win32\SmuProxy.o" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "batimento.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuExport.def" "SmuExport.def"

win32/batimento_dll.o: batimento_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "batimento_dll.c" -o "win32\batimento_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17/SCADE/lib/C/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I"..\..\file_reader_cpp\file_reader" -I"..\..\..\..\..\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17\SCADE\lib\C\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

batimento.exe: win32/batimento_dll.o win32/SmuMainWindows.o 
	gcc "win32\batimento_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "batimento.exe" 

batimento_cosim.c: batimento_UA_1.h


#############################################################
######    End of Makefile
#############################################################
